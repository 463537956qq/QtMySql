#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtSql/QSqlDatabase"
#include "QMessageBox"
#include <QDebug>
#include <QtSql/QSqlError>
#include<QSqlQuery>
#include<QKeyEvent>
#include<QMouseEvent>
namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:

  void on_ToConnect_Button_clicked();

  void on_pushButton_clicked();

private:
  Ui::MainWindow *ui;
  void keyPressEvent(QKeyEvent *e)override;
  void mousePressEvent(QMouseEvent *e)override;
   QSqlDatabase db;

 QSqlQuery  query ;
};

#endif // MAINWINDOW_H
