/********************************************************************************
** Form generated from reading UI file 'siftwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIFTWIDGET_H
#define UI_SIFTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiftWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *imageOriginal1;
    QPushButton *uploadBtn1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageOriginal2;
    QPushButton *uploadBtn2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *imageProcessed;
    QLabel *time_label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *sigmaSpin;
    QLabel *label_2;
    QDoubleSpinBox *KSpin;
    QLabel *label_3;
    QDoubleSpinBox *ContrastSpin;
    QLabel *label_4;
    QDoubleSpinBox *EdgeSpin;
    QLabel *label_5;
    QDoubleSpinBox *MagSpin;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SiftWidget)
    {
        if (SiftWidget->objectName().isEmpty())
            SiftWidget->setObjectName("SiftWidget");
        SiftWidget->resize(1196, 852);
        gridLayout = new QGridLayout(SiftWidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(SiftWidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(16777215, 30));

        verticalLayout_5->addWidget(label_6);

        frame_3 = new QFrame(SiftWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(300, 250));
        frame_3->setMaximumSize(QSize(16777215, 250));
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        imageOriginal1 = new QLabel(frame_3);
        imageOriginal1->setObjectName("imageOriginal1");

        verticalLayout_4->addWidget(imageOriginal1);


        verticalLayout_5->addWidget(frame_3);

        uploadBtn1 = new QPushButton(SiftWidget);
        uploadBtn1->setObjectName("uploadBtn1");
        uploadBtn1->setMaximumSize(QSize(150, 30));
        uploadBtn1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(uploadBtn1);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_7 = new QLabel(SiftWidget);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(16777215, 30));

        verticalLayout_6->addWidget(label_7);

        frame_2 = new QFrame(SiftWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(300, 250));
        frame_2->setMaximumSize(QSize(16777215, 250));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName("verticalLayout");
        imageOriginal2 = new QLabel(frame_2);
        imageOriginal2->setObjectName("imageOriginal2");

        verticalLayout->addWidget(imageOriginal2);


        verticalLayout_6->addWidget(frame_2);

        uploadBtn2 = new QPushButton(SiftWidget);
        uploadBtn2->setObjectName("uploadBtn2");
        uploadBtn2->setMaximumSize(QSize(150, 30));
        uploadBtn2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(uploadBtn2);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(30, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(SiftWidget);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_8);

        frame = new QFrame(SiftWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(450, 450));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        imageProcessed = new QLabel(frame);
        imageProcessed->setObjectName("imageProcessed");

        verticalLayout_3->addWidget(imageProcessed);


        verticalLayout_2->addWidget(frame);

        time_label = new QLabel(SiftWidget);
        time_label->setObjectName("time_label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(time_label->sizePolicy().hasHeightForWidth());
        time_label->setSizePolicy(sizePolicy);
        time_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(time_label);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(SiftWidget);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        sigmaSpin = new QDoubleSpinBox(groupBox);
        sigmaSpin->setObjectName("sigmaSpin");
        sigmaSpin->setValue(1.600000000000000);

        horizontalLayout->addWidget(sigmaSpin);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        KSpin = new QDoubleSpinBox(groupBox);
        KSpin->setObjectName("KSpin");
        KSpin->setValue(2.000000000000000);

        horizontalLayout->addWidget(KSpin);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_3);

        ContrastSpin = new QDoubleSpinBox(groupBox);
        ContrastSpin->setObjectName("ContrastSpin");
        ContrastSpin->setValue(0.030000000000000);

        horizontalLayout->addWidget(ContrastSpin);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_4);

        EdgeSpin = new QDoubleSpinBox(groupBox);
        EdgeSpin->setObjectName("EdgeSpin");
        EdgeSpin->setValue(10.000000000000000);

        horizontalLayout->addWidget(EdgeSpin);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_5);

        MagSpin = new QDoubleSpinBox(groupBox);
        MagSpin->setObjectName("MagSpin");
        MagSpin->setValue(0.200000000000000);

        horizontalLayout->addWidget(MagSpin);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_8->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout_8, 0, 0, 1, 1);


        retranslateUi(SiftWidget);

        QMetaObject::connectSlotsByName(SiftWidget);
    } // setupUi

    void retranslateUi(QWidget *SiftWidget)
    {
        SiftWidget->setWindowTitle(QCoreApplication::translate("SiftWidget", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("SiftWidget", "Image", nullptr));
        imageOriginal1->setText(QString());
        uploadBtn1->setText(QCoreApplication::translate("SiftWidget", "Upload Image", nullptr));
        label_7->setText(QCoreApplication::translate("SiftWidget", "Image 2", nullptr));
        imageOriginal2->setText(QString());
        uploadBtn2->setText(QCoreApplication::translate("SiftWidget", "Upload Image", nullptr));
        label_8->setText(QCoreApplication::translate("SiftWidget", "Matched Image", nullptr));
        imageProcessed->setText(QString());
        time_label->setText(QCoreApplication::translate("SiftWidget", "Time Elapsed:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SiftWidget", "Options", nullptr));
        label->setText(QCoreApplication::translate("SiftWidget", "Sigma", nullptr));
        label_2->setText(QCoreApplication::translate("SiftWidget", "K", nullptr));
        label_3->setText(QCoreApplication::translate("SiftWidget", "Contrast Thresh", nullptr));
        label_4->setText(QCoreApplication::translate("SiftWidget", "Edge Thresh", nullptr));
        label_5->setText(QCoreApplication::translate("SiftWidget", "Magnitude Thresh.", nullptr));
        pushButton->setText(QCoreApplication::translate("SiftWidget", "Extract keypoints", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SiftWidget", "Match", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiftWidget: public Ui_SiftWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIFTWIDGET_H
