#include "IntextWideget.h"
#include <QDebug>
IntextWideget::IntextWideget(QWidget *parent) : QTextEdit(parent)
{
mf = NULL;
}
#if 0
void IntextWideget:: keyPressEvent(QKeyEvent *e)
{
  if((e->modifiers() == Qt::ControlModifier) && (e->key() == Qt::Key_Enter))
    {
      QString html = this->document()->toHtml();
      QString str = this->document()->toPlainText();
    }
}
#endif

  void IntextWideget::SetFunc(rsastring func)
  {
    mf= func;
  }
