#ifndef INTEXTWIDEGET_H
#define INTEXTWIDEGET_H

#include <QWidget>
#include<QTextEdit>
#include<QKeyEvent>
#include<QString>

typedef void (*rsastring) (QString );
class IntextWideget : public QTextEdit
{
  Q_OBJECT
public:
  explicit IntextWideget(QWidget *parent = 0);
  #if 0
  void keyPressEvent(QKeyEvent *e)override;
#endif
  void SetFunc(rsastring func);
private:
rsastring mf;
};

#endif // INTEXTWIDEGET_H
