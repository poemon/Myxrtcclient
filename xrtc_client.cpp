#include "xrtc_client.h"

#include <QScreen>
#include <QHBoxLayout>
#include <QVBoxLayout>

const float kMainWindowScale = 0.8;
const int kMaxStreamWindows = 9;
QWidget* stream_windows[kMaxStreamWindows] = { nullptr };

static QWidget* GetLocalVideo() {
    return stream_windows[0];
}

XRTCClient::XRTCClient(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    // 设置窗口大小为屏幕大小的60%
    QScreen* screen = QGuiApplication::primaryScreen();
    int width = screen->geometry().width() * kMainWindowScale;
    int height = screen->geometry().height() * kMainWindowScale;
    this->resize(width, height);

    // 设置主布局
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(ui.top);
    layout->addWidget(ui.bottom);
    layout->setSpacing(0);
    layout->setMargin(0);
    this->setLayout(layout);

    ui.top_left->setMaximumWidth(180);
    ui.bottom->setMaximumHeight(20);
    ui.label_tips1->setStyleSheet("color:white");
    ui.label_tips2->setStyleSheet("color:white");
    ui.label_tips3->setStyleSheet("color:white");

    // 设置顶部布局
    QHBoxLayout* top_layout = new QHBoxLayout();
    top_layout->addWidget(ui.top_left);
    top_layout->addWidget(ui.top_right);
    top_layout->setSpacing(0);
    top_layout->setMargin(0);
    ui.top->setLayout(top_layout);

    // 顶部右侧布局
    InitStreamWindows(kMaxStreamWindows);

    ConnectSlot();
}

XRTCClient::~XRTCClient()
{}

void XRTCClient::ClickBtnDevice() {
}

void XRTCClient::ClickBtnPreview() {
}

void XRTCClient::ClickBtnPush() {
}

void XRTCClient::ClickBtnPull() {
}

void XRTCClient::InitStreamWindows(int num) {
    right_layout_ = new QGridLayout();
    right_layout_->setSpacing(1);
    right_layout_->setContentsMargins(1, 1, 1, 1);
    ui.top_right->setLayout(right_layout_);

    int cols = sqrt(num);
    for (int i = 0; i < num; ++i) {
        stream_windows[i] = new QWidget();
        stream_windows[i]->setStyleSheet("background-color: rgb(50, 50, 50)");
        right_layout_->addWidget(stream_windows[i], i / cols, i % cols);
    }
}

void XRTCClient::ConnectSlot() {
    connect(ui.btn_device, SIGNAL(clicked()), this, SLOT(ClickBtnDevice()));
    connect(ui.btn_preview, SIGNAL(clicked()), this, SLOT(ClickBtnPreview()));
    connect(ui.btn_push, SIGNAL(clicked()), this, SLOT(ClickBtnPush()));
    connect(ui.btn_pull, SIGNAL(clicked()), this, SLOT(ClickBtnPull()));
}
