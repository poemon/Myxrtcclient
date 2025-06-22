#include "xrtc_client.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    // ∏ﬂ∑÷±Ê¬   ≈‰
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    XRTCClient w;
    w.show();
    return a.exec();
}
