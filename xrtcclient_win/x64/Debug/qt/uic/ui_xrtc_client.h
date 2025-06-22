/********************************************************************************
** Form generated from reading UI file 'xrtc_client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRTC_CLIENT_H
#define UI_XRTC_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRTCClientClass
{
public:
    QWidget *top;
    QWidget *top_left;
    QLabel *label_host;
    QLabel *label_uid;
    QLabel *label_stream_name;
    QLabel *label_cam;
    QLabel *label_mic;
    QLineEdit *edit_host;
    QLineEdit *edit_uid;
    QLineEdit *edit_stream_name;
    QComboBox *cb_cam;
    QComboBox *cb_mic;
    QPushButton *btn_preview;
    QPushButton *btn_push;
    QPushButton *btn_pull;
    QLabel *label_pull_stream_name;
    QLineEdit *edit_pull_stream_name;
    QPushButton *btn_device;
    QPushButton *btn_pull_2;
    QLabel *label_pull_stream_name_2;
    QLineEdit *edit_pull_stream_name_2;
    QWidget *top_right;
    QWidget *bottom;
    QLabel *label_tips2;
    QLabel *label_tips1;
    QLabel *label_tips3;

    void setupUi(QWidget *XRTCClientClass)
    {
        if (XRTCClientClass->objectName().isEmpty())
            XRTCClientClass->setObjectName(QString::fromUtf8("XRTCClientClass"));
        XRTCClientClass->resize(1252, 1030);
        XRTCClientClass->setStyleSheet(QString::fromUtf8("#top {\n"
"	background-color: rgb(200, 200, 200);\n"
"}\n"
"\n"
"#top_left {\n"
"	background-color: rgb(245, 245, 245);\n"
"}\n"
"\n"
"#top_right {\n"
"	background-color: rgb(100, 100, 100);\n"
"}\n"
"\n"
"#bottom {\n"
"	background-color: #007acc;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background-color: #007acc;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:disabled {    \n"
"    background-color: #D3D3D3;\n"
"    color: #808080; \n"
"}"));
        top = new QWidget(XRTCClientClass);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(90, 20, 1061, 801));
        top_left = new QWidget(top);
        top_left->setObjectName(QString::fromUtf8("top_left"));
        top_left->setGeometry(QRect(30, 50, 400, 701));
        top_left->setMinimumSize(QSize(0, 0));
        top_left->setMaximumSize(QSize(400, 16777215));
        top_left->setAutoFillBackground(false);
        label_host = new QLabel(top_left);
        label_host->setObjectName(QString::fromUtf8("label_host"));
        label_host->setGeometry(QRect(10, 10, 50, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(7);
        font.setBold(false);
        font.setWeight(50);
        label_host->setFont(font);
        label_uid = new QLabel(top_left);
        label_uid->setObjectName(QString::fromUtf8("label_uid"));
        label_uid->setGeometry(QRect(10, 35, 50, 20));
        label_uid->setFont(font);
        label_stream_name = new QLabel(top_left);
        label_stream_name->setObjectName(QString::fromUtf8("label_stream_name"));
        label_stream_name->setGeometry(QRect(10, 60, 110, 20));
        label_stream_name->setFont(font);
        label_cam = new QLabel(top_left);
        label_cam->setObjectName(QString::fromUtf8("label_cam"));
        label_cam->setGeometry(QRect(10, 85, 50, 20));
        label_cam->setFont(font);
        label_mic = new QLabel(top_left);
        label_mic->setObjectName(QString::fromUtf8("label_mic"));
        label_mic->setGeometry(QRect(10, 110, 50, 20));
        label_mic->setFont(font);
        edit_host = new QLineEdit(top_left);
        edit_host->setObjectName(QString::fromUtf8("edit_host"));
        edit_host->setGeometry(QRect(60, 10, 110, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(7);
        edit_host->setFont(font1);
        edit_uid = new QLineEdit(top_left);
        edit_uid->setObjectName(QString::fromUtf8("edit_uid"));
        edit_uid->setGeometry(QRect(60, 35, 110, 20));
        edit_uid->setFont(font1);
        edit_stream_name = new QLineEdit(top_left);
        edit_stream_name->setObjectName(QString::fromUtf8("edit_stream_name"));
        edit_stream_name->setGeometry(QRect(60, 60, 110, 20));
        edit_stream_name->setFont(font1);
        cb_cam = new QComboBox(top_left);
        cb_cam->setObjectName(QString::fromUtf8("cb_cam"));
        cb_cam->setGeometry(QRect(60, 85, 110, 20));
        cb_cam->setFont(font1);
        cb_mic = new QComboBox(top_left);
        cb_mic->setObjectName(QString::fromUtf8("cb_mic"));
        cb_mic->setGeometry(QRect(60, 110, 110, 20));
        cb_mic->setFont(font1);
        btn_preview = new QPushButton(top_left);
        btn_preview->setObjectName(QString::fromUtf8("btn_preview"));
        btn_preview->setGeometry(QRect(40, 170, 110, 20));
        btn_preview->setFont(font1);
        btn_push = new QPushButton(top_left);
        btn_push->setObjectName(QString::fromUtf8("btn_push"));
        btn_push->setGeometry(QRect(40, 200, 110, 20));
        btn_push->setFont(font1);
        btn_pull = new QPushButton(top_left);
        btn_pull->setObjectName(QString::fromUtf8("btn_pull"));
        btn_pull->setGeometry(QRect(115, 250, 60, 20));
        btn_pull->setFont(font1);
        label_pull_stream_name = new QLabel(top_left);
        label_pull_stream_name->setObjectName(QString::fromUtf8("label_pull_stream_name"));
        label_pull_stream_name->setGeometry(QRect(10, 250, 50, 20));
        label_pull_stream_name->setFont(font);
        edit_pull_stream_name = new QLineEdit(top_left);
        edit_pull_stream_name->setObjectName(QString::fromUtf8("edit_pull_stream_name"));
        edit_pull_stream_name->setGeometry(QRect(30, 250, 80, 20));
        edit_pull_stream_name->setFont(font1);
        btn_device = new QPushButton(top_left);
        btn_device->setObjectName(QString::fromUtf8("btn_device"));
        btn_device->setGeometry(QRect(40, 140, 110, 20));
        btn_device->setFont(font1);
        btn_pull_2 = new QPushButton(top_left);
        btn_pull_2->setObjectName(QString::fromUtf8("btn_pull_2"));
        btn_pull_2->setGeometry(QRect(115, 280, 60, 20));
        btn_pull_2->setFont(font1);
        label_pull_stream_name_2 = new QLabel(top_left);
        label_pull_stream_name_2->setObjectName(QString::fromUtf8("label_pull_stream_name_2"));
        label_pull_stream_name_2->setGeometry(QRect(10, 280, 50, 20));
        label_pull_stream_name_2->setFont(font);
        edit_pull_stream_name_2 = new QLineEdit(top_left);
        edit_pull_stream_name_2->setObjectName(QString::fromUtf8("edit_pull_stream_name_2"));
        edit_pull_stream_name_2->setGeometry(QRect(30, 280, 80, 20));
        edit_pull_stream_name_2->setFont(font1);
        top_right = new QWidget(top);
        top_right->setObjectName(QString::fromUtf8("top_right"));
        top_right->setGeometry(QRect(680, 30, 321, 651));
        bottom = new QWidget(XRTCClientClass);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setGeometry(QRect(200, 890, 921, 80));
        label_tips2 = new QLabel(bottom);
        label_tips2->setObjectName(QString::fromUtf8("label_tips2"));
        label_tips2->setGeometry(QRect(350, 0, 135, 20));
        QFont font2;
        font2.setPointSize(7);
        label_tips2->setFont(font2);
        label_tips1 = new QLabel(bottom);
        label_tips1->setObjectName(QString::fromUtf8("label_tips1"));
        label_tips1->setGeometry(QRect(5, 0, 150, 20));
        label_tips1->setFont(font2);
        label_tips3 = new QLabel(bottom);
        label_tips3->setObjectName(QString::fromUtf8("label_tips3"));
        label_tips3->setGeometry(QRect(510, 0, 135, 20));
        label_tips3->setFont(font2);
        bottom->raise();
        top->raise();

        retranslateUi(XRTCClientClass);

        QMetaObject::connectSlotsByName(XRTCClientClass);
    } // setupUi

    void retranslateUi(QWidget *XRTCClientClass)
    {
        XRTCClientClass->setWindowTitle(QCoreApplication::translate("XRTCClientClass", "XRTCClient-Windows\345\256\242\346\210\267\347\253\257V1.0", nullptr));
        label_host->setText(QCoreApplication::translate("XRTCClientClass", "XRTC\346\234\215\345\212\241:", nullptr));
        label_uid->setText(QCoreApplication::translate("XRTCClientClass", "UID:", nullptr));
        label_stream_name->setText(QCoreApplication::translate("XRTCClientClass", "\346\265\201\345\220\215\347\247\260:", nullptr));
        label_cam->setText(QCoreApplication::translate("XRTCClientClass", "\346\221\204\345\203\217\345\244\264:", nullptr));
        label_mic->setText(QCoreApplication::translate("XRTCClientClass", "\351\272\246\345\205\213\351\243\216:", nullptr));
        edit_host->setText(QCoreApplication::translate("XRTCClientClass", "www.str2num.com:8281", nullptr));
        edit_uid->setText(QCoreApplication::translate("XRTCClientClass", "211", nullptr));
        edit_stream_name->setText(QCoreApplication::translate("XRTCClientClass", "xrtc_985", nullptr));
        btn_preview->setText(QCoreApplication::translate("XRTCClientClass", "\345\274\200\345\247\213\346\234\254\345\234\260\351\242\204\350\247\210", nullptr));
        btn_push->setText(QCoreApplication::translate("XRTCClientClass", "\345\274\200\345\247\213\346\216\250\346\265\201", nullptr));
        btn_pull->setText(QCoreApplication::translate("XRTCClientClass", "\345\274\200\345\247\213\346\213\211\346\265\201", nullptr));
        label_pull_stream_name->setText(QCoreApplication::translate("XRTCClientClass", "\346\265\2011:", nullptr));
        edit_pull_stream_name->setText(QCoreApplication::translate("XRTCClientClass", "xrtc_985", nullptr));
        btn_device->setText(QCoreApplication::translate("XRTCClientClass", "\345\220\257\345\212\250\351\237\263\350\247\206\351\242\221\350\256\276\345\244\207", nullptr));
        btn_pull_2->setText(QCoreApplication::translate("XRTCClientClass", "\345\274\200\345\247\213\346\213\211\346\265\201", nullptr));
        label_pull_stream_name_2->setText(QCoreApplication::translate("XRTCClientClass", "\346\265\2012:", nullptr));
        edit_pull_stream_name_2->setText(QCoreApplication::translate("XRTCClientClass", "xrtc_web", nullptr));
        label_tips2->setText(QString());
        label_tips1->setText(QString());
        label_tips3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class XRTCClientClass: public Ui_XRTCClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRTC_CLIENT_H
