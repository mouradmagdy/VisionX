/********************************************************************************
** Form generated from reading UI file 'harriswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARRISWIDGET_H
#define UI_HARRISWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_HarrisWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *imageOriginal;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *imageDetected;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *uploadImgBtn;
    QPushButton *applyBtn;
    QPushButton *resetFilterBtn;
    QLabel *time_label;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *threeByThreeKernelBtn;
    QPushButton *fiveByFiveKernelBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *threshold;

    void setupUi(QWidget *HarrisWidget)
    {
        if (HarrisWidget->objectName().isEmpty())
            HarrisWidget->setObjectName("HarrisWidget");
        HarrisWidget->resize(1287, 1200);
        gridLayout = new QGridLayout(HarrisWidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_5 = new QFrame(HarrisWidget);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame = new QFrame(frame_5);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(500, 500));
        frame->setMaximumSize(QSize(500, 500));
        frame->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        imageOriginal = new QLabel(frame);
        imageOriginal->setObjectName("imageOriginal");

        verticalLayout->addWidget(imageOriginal);


        horizontalLayout_4->addWidget(frame);

        horizontalSpacer_3 = new QSpacerItem(31, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(500, 500));
        frame_2->setMaximumSize(QSize(500, 500));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        imageDetected = new QLabel(frame_2);
        imageDetected->setObjectName("imageDetected");

        verticalLayout_2->addWidget(imageDetected);


        horizontalLayout_4->addWidget(frame_2);


        verticalLayout_3->addWidget(frame_5);

        frame_4 = new QFrame(HarrisWidget);
        frame_4->setObjectName("frame_4");
        frame_4->setMaximumSize(QSize(16777215, 60));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        uploadImgBtn = new QPushButton(frame_4);
        uploadImgBtn->setObjectName("uploadImgBtn");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uploadImgBtn->sizePolicy().hasHeightForWidth());
        uploadImgBtn->setSizePolicy(sizePolicy);
        uploadImgBtn->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(uploadImgBtn);

        applyBtn = new QPushButton(frame_4);
        applyBtn->setObjectName("applyBtn");
        sizePolicy.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy);
        applyBtn->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(applyBtn);

        resetFilterBtn = new QPushButton(frame_4);
        resetFilterBtn->setObjectName("resetFilterBtn");
        sizePolicy.setHeightForWidth(resetFilterBtn->sizePolicy().hasHeightForWidth());
        resetFilterBtn->setSizePolicy(sizePolicy);
        resetFilterBtn->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(resetFilterBtn);

        time_label = new QLabel(frame_4);
        time_label->setObjectName("time_label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(time_label->sizePolicy().hasHeightForWidth());
        time_label->setSizePolicy(sizePolicy1);
        time_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(time_label);


        verticalLayout_3->addWidget(frame_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        groupBox_3 = new QGroupBox(HarrisWidget);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        groupBox_3->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"\n"
"      "));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 0;"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(groupBox_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 0;"));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        threeByThreeKernelBtn = new QPushButton(groupBox_4);
        threeByThreeKernelBtn->setObjectName("threeByThreeKernelBtn");
        threeByThreeKernelBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #76ABAE;\n"
"border: none;\n"
"}"));

        horizontalLayout_5->addWidget(threeByThreeKernelBtn);

        fiveByFiveKernelBtn = new QPushButton(groupBox_4);
        fiveByFiveKernelBtn->setObjectName("fiveByFiveKernelBtn");
        fiveByFiveKernelBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
""));

        horizontalLayout_5->addWidget(fiveByFiveKernelBtn);


        horizontalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_2->addWidget(groupBox_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 0;"));

        horizontalLayout_2->addWidget(label_2);

        threshold = new QDoubleSpinBox(groupBox_3);
        threshold->setObjectName("threshold");
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(threshold->sizePolicy().hasHeightForWidth());
        threshold->setSizePolicy(sizePolicy4);
        threshold->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 0;"));
        threshold->setMaximum(500.000000000000000);
        threshold->setValue(100.000000000000000);

        horizontalLayout_2->addWidget(threshold);


        verticalLayout_4->addWidget(groupBox_3);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(HarrisWidget);

        QMetaObject::connectSlotsByName(HarrisWidget);
    } // setupUi

    void retranslateUi(QWidget *HarrisWidget)
    {
        HarrisWidget->setWindowTitle(QCoreApplication::translate("HarrisWidget", "Form", nullptr));
        imageOriginal->setText(QString());
        imageDetected->setText(QString());
        uploadImgBtn->setText(QCoreApplication::translate("HarrisWidget", "Upload", nullptr));
        applyBtn->setText(QCoreApplication::translate("HarrisWidget", "Apply", nullptr));
        resetFilterBtn->setText(QCoreApplication::translate("HarrisWidget", "Reset", nullptr));
        time_label->setText(QCoreApplication::translate("HarrisWidget", "Time Elapsed:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("HarrisWidget", "Harris Modes", nullptr));
        label_3->setText(QCoreApplication::translate("HarrisWidget", "Operator Type", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("HarrisWidget", "Harris", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("HarrisWidget", "Lamda-", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("HarrisWidget", "Kernel Size", nullptr));
        threeByThreeKernelBtn->setText(QCoreApplication::translate("HarrisWidget", "3*3", nullptr));
        fiveByFiveKernelBtn->setText(QCoreApplication::translate("HarrisWidget", "5*5", nullptr));
        label_2->setText(QCoreApplication::translate("HarrisWidget", "Threshold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HarrisWidget: public Ui_HarrisWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARRISWIDGET_H
