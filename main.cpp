#include "xrtc_client.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    // �߷ֱ�������
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    XRTCClient w;
    w.show();
    return a.exec();
}
