#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include<QSqlQuery>
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
ui->centralWidget->installEventFilter(this);


}

MainWindow::~MainWindow()
{
  delete ui;
}
#if 0
void MainWindow::on_PritnDB_clicked()
{

  ui->lineEdit->text();
 query = QSqlQuery( ui->lineEdit->text());

int size =0 ;

 ui->textEdit->append(ui->lineEdit->text());
while (query.next())
  {
    ui->textEdit->append(QString("from <:%1 > =").arg(size) +query.value(0).toString());
      size++;
  }
}
#endif

void MainWindow:: keyPressEvent(QKeyEvent *e)
{

  if( e->key() == Qt::Key_Enter)
    {
      QString str =  ui->IN_Text->document()->toPlainText();
      QStringList strlist = str.split("\n");

      for (int i = 0 ;i < strlist.size(); i++)
	{
	  QString var = strlist.at(i);
	  if(var.size()>4)
	    {
	      if(var.mid(0,1) != "#"&&!var.contains("--")&&!var.contains("/*")&&!var.contains("*/"))
		{
		  query.exec(var);
		  while (query.next())
		    {
		      ui->OUT_Text->append(QString(query.value(0).toString() + query.value(1).toString()));

		      int ss=query.ValuesAsRows;
qDebug()<<QString::number(ss);
		    }
		}
	    }
	}

    }
}

 void MainWindow::mousePressEvent(QMouseEvent *e)
 {
  ui->centralWidget->setFocus();
 }

//#use mysql
//#desc db
//#select Host, db, User from db



void MainWindow::on_ToConnect_Button_clicked()
{


  db = QSqlDatabase::addDatabase("QMYSQL");
 db.setHostName(ui->IP_Edit->text());
 db.setPort(ui->Prot_Edit->text().toInt());//端口
 db.setDatabaseName("");
 db.setUserName(ui->User_Edit->text());
 db.setPassword(ui->PassWordEdit->text());
 bool ok = db.open();
 if (ok){
    query = QSqlQuery(db) ;
 QMessageBox::information(this, "infor", "success");
 }
 else {
 QMessageBox::information(this, "infor", "open failed");
 qDebug()<<"error open database because"<<db.lastError().text();
 }
}

void MainWindow::on_pushButton_clicked()
{
if(db.isOpen())
  {
    db.close();
  }
}

void MainWindow::on_pushButton_2_clicked()
{

  QString fileName = QFileDialog::getOpenFileName(this,
						      tr("文件对话框！"),
						      "C:/Users/Administrator/Desktop",
						      tr("xmlfile(*xml)"));
  QFile file(fileName);

  //重新打开文件，对文件进行读操作
   if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
       qDebug()<<"文件打开失败";
   }
   //每次都去文件中的一行，然后输出读取到的字符串


    QByteArray arry = file.readAll();

   int size = arry.size();
ui->OUT_Text->append(arry.data());
   file.close();
   return ;





}
