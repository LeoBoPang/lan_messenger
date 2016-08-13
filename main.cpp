#include <QtGui/QApplication>
#include "widget.h"
#include <QtGui/QDesktopServices>
#include "qdesktopservices.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    const QUrl url("http://www.pangbo.com");
    QDesktopServices::openUrl(url);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
#if defined(Q_WS_S60)
    w.showMaximized();
#else
    w.show();
#endif
    return a.exec();
}
