#pragma once

#include <QtWidgets/QWidget>
#include <QGridLayout>
#include "ui_xrtc_client.h"

class XRTCClient : public QWidget
{
    Q_OBJECT

public:
    XRTCClient(QWidget *parent = nullptr);
    ~XRTCClient();

public Q_SLOTS:
    void ClickBtnDevice();
    void ClickBtnPreview();
    void ClickBtnPush();
    void ClickBtnPull();

private:
    void InitStreamWindows(int num);
    void ConnectSlot();

private:
    Ui::XRTCClientClass ui;
    QGridLayout* right_layout_ = nullptr;
    int video_width_ = 800;
    int video_height_ = 600;
};
