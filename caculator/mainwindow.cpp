#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QRegularExpression>

double Caclvalue= 0.0; // khoi tao bien hien thi
bool divTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool multTrigger = false;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this); // Thiết lập giao diện người dùng
    ui->Display->setText(QString::number(Caclvalue));// hien thi bien caclvalue

    //khởi tạo nút bấm các chữ số
    QPushButton *numbutton[10];
    for(int i = 0;i<10;i++)
    {
        QString butname = "Button" + QString::number(i); //Xoay vòng qua việc định vị các nút
        numbutton[i] = MainWindow::findChild<QPushButton *>(butname); //Lấy các nút theo tên và thêm vào mảng

        connect(numbutton[i], SIGNAL(released()), this, // kich hoat nut bam
                SLOT(NumPressed()));
    }
    connect(ui->add, SIGNAL(released()), this,
            SLOT(MathbuttonPressed()));
    connect(ui->sub, SIGNAL(released()), this,
            SLOT(MathbuttonPressed()));
    connect(ui->multiply, SIGNAL(released()), this,
            SLOT(MathbuttonPressed()));
    connect(ui->divide, SIGNAL(released()), this,
            SLOT(MathbuttonPressed()));
    connect(ui->Equal, SIGNAL(released()), this,
            SLOT(EqualButton()));
    connect(ui->ChangeTheSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));
    connect(ui->Clean, SIGNAL(released()), this,
            SLOT(CleanButton()));
    connect(ui->decimalPoint, SIGNAL(released()), this,
            SLOT(DecimalButtonPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: NumPressed()
{

    QPushButton *button = (QPushButton *)sender(); //trả về con trỏ đến đối tượng phát ra tín hiệu

    QString butVal = button->text();// đưa số vào chuỗi
    QString displayVal = ui->Display->text();//lấy giá trị in ra màn hình
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){

        // Caclvalue = butVal.toDouble();
        ui->Display->setText(butVal);
    }
    else
    {
        QString newVal = displayVal + butVal; //Đặt số mới vào bên phải số củ
        ui->Display->setText(newVal);
        double dblNewVal =newVal.toDouble();

        //Đặt giá trị trong màn hình và cho phép tối đa 16
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}
void MainWindow ::MathbuttonPressed()
{
    divTrigger = false;
    addTrigger = false;
    subTrigger = false;
    multTrigger = false;

    // Lưu trữ giá trị hiện tại trong Hiển thị
    QString displayVal = ui->Display->text();
    Caclvalue = displayVal.toDouble();

    // trả về một con trỏ tới nút được nhấn
    QPushButton *button = (QPushButton *)sender();

    // Nhận ký hiệu toán học trên nút
    QString butVal = button->text();
    if(QString ::compare(butVal, "/" , Qt ::CaseInsensitive)== 0)
    {
        divTrigger = true;
    }
    else if (QString ::compare(butVal, "*" , Qt ::CaseInsensitive)== 0)
    {
        multTrigger = true;
    }
    else if(QString ::compare(butVal, "+" , Qt ::CaseInsensitive)== 0)
    {
        addTrigger =  true;
    }
    else if(QString ::compare(butVal, "-" , Qt ::CaseInsensitive)== 0)
    {
        subTrigger = true;
    }

    // xóa giá trị hiện tại
    ui->Display->setText(" ");
}
void MainWindow :: EqualButton()
{
     double solution = 0.0; // bien ket qua


     // Nhận giá trị hiển thị
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    if(addTrigger || subTrigger || multTrigger || divTrigger ){
         if(addTrigger){
            solution = Caclvalue + dblDisplayVal;
        } else if(subTrigger){
            solution = Caclvalue - dblDisplayVal;
        } else if(multTrigger){
            solution = Caclvalue * dblDisplayVal;
        } else {
            solution = Caclvalue / dblDisplayVal;
        }
    }

    // hiển thị kết quả
     ui->Display->setText(QString::number(solution));
}
void MainWindow ::ChangeNumberSign(){
     // Nhận giá trị hiển thị
    QString displayVal = ui->Display->text();

    // kiểm tra xem đó có phải là số không
    QRegularExpression reg ("[-+]?[0-9]*\\.?[0-9]+");

    QRegularExpressionMatch match = reg.match(displayVal);


    // nếu đúng thì số đó *(-1)
    if(match.hasMatch()){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}

void MainWindow::CleanButton()
{
    // hiển thị số 0 khi nhấn nút
    ui->Display->setText("0");

    Caclvalue = 0.0;
    addTrigger = false;
    subTrigger = false;
    multTrigger = false;
    divTrigger = false;
}

void MainWindow::DecimalButtonPressed()
{
    // Nhận giá trị hiển thị
    QString displayVal = ui->Display->text();

    // nếu chưa có dấu thập phân thì sẽ thêm vào và hiển thị
    if(!displayVal.contains('.')){
        displayVal += ".";
        ui->Display->setText(displayVal);
    }
}
