/********************************************************************************
** Form generated from reading UI file 'meanshiftwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEANSHIFTWIDGET_H
#define UI_MEANSHIFTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeanShiftWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QFrame *processedImgFrame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *originalImgWidget;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *processedImgFrame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *processedImgWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *uploadMeansShiftBtn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *colorBandwidthSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpinBox *distanceBandwidthSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyMeansShiftBtn;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MeanShiftWidget)
    {
        if (MeanShiftWidget->objectName().isEmpty())
            MeanShiftWidget->setObjectName("MeanShiftWidget");
        MeanShiftWidget->resize(1288, 653);
        verticalLayout = new QVBoxLayout(MeanShiftWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(MeanShiftWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("QFrame {\n"
" border: 2px solid  #316669;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"QLabel{\n"
"border: 0\n"
"}\n"
"          "));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        processedImgFrame_3 = new QFrame(frame_5);
        processedImgFrame_3->setObjectName("processedImgFrame_3");
        processedImgFrame_3->setFrameShape(QFrame::StyledPanel);
        processedImgFrame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(processedImgFrame_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        originalImgWidget = new QLabel(processedImgFrame_3);
        originalImgWidget->setObjectName("originalImgWidget");

        verticalLayout_4->addWidget(originalImgWidget);


        horizontalLayout_5->addWidget(processedImgFrame_3);


        horizontalLayout->addWidget(frame_5);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
" border: 2px solid  #316669;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"QLabel{\n"
"border: 0\n"
"}\n"
"          "));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        processedImgFrame_2 = new QFrame(frame_4);
        processedImgFrame_2->setObjectName("processedImgFrame_2");
        processedImgFrame_2->setFrameShape(QFrame::StyledPanel);
        processedImgFrame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(processedImgFrame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        processedImgWidget = new QLabel(processedImgFrame_2);
        processedImgWidget->setObjectName("processedImgWidget");

        verticalLayout_3->addWidget(processedImgWidget);


        horizontalLayout_4->addWidget(processedImgFrame_2);


        horizontalLayout->addWidget(frame_4);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(MeanShiftWidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 70));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        uploadMeansShiftBtn = new QPushButton(frame);
        uploadMeansShiftBtn->setObjectName("uploadMeansShiftBtn");

        horizontalLayout_7->addWidget(uploadMeansShiftBtn);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        colorBandwidthSpinBox = new QSpinBox(frame);
        colorBandwidthSpinBox->setObjectName("colorBandwidthSpinBox");

        horizontalLayout_2->addWidget(colorBandwidthSpinBox);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        distanceBandwidthSpinBox = new QSpinBox(frame);
        distanceBandwidthSpinBox->setObjectName("distanceBandwidthSpinBox");

        horizontalLayout_6->addWidget(distanceBandwidthSpinBox);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        applyMeansShiftBtn = new QPushButton(frame);
        applyMeansShiftBtn->setObjectName("applyMeansShiftBtn");

        horizontalLayout_7->addWidget(applyMeansShiftBtn);

        horizontalSpacer_5 = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(frame);


        retranslateUi(MeanShiftWidget);

        QMetaObject::connectSlotsByName(MeanShiftWidget);
    } // setupUi

    void retranslateUi(QWidget *MeanShiftWidget)
    {
        MeanShiftWidget->setWindowTitle(QCoreApplication::translate("MeanShiftWidget", "Form", nullptr));
        originalImgWidget->setText(QString());
        processedImgWidget->setText(QString());
        uploadMeansShiftBtn->setText(QCoreApplication::translate("MeanShiftWidget", "Upload", nullptr));
        label->setText(QCoreApplication::translate("MeanShiftWidget", "Color Bandwidth", nullptr));
        label_2->setText(QCoreApplication::translate("MeanShiftWidget", "Distance Bandwidth", nullptr));
        applyMeansShiftBtn->setText(QCoreApplication::translate("MeanShiftWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeanShiftWidget: public Ui_MeanShiftWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEANSHIFTWIDGET_H
