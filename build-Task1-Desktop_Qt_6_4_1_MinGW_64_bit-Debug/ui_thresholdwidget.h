/********************************************************************************
** Form generated from reading UI file 'thresholdwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THRESHOLDWIDGET_H
#define UI_THRESHOLDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThresholdWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *originalImage;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *processedImage;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *uploadBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetBtn;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *spectralBtn;
    QPushButton *otsuBtn;
    QPushButton *optimumBtn;
    QComboBox *globalVsLocalCombo;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *globalThresholdBtn;
    QPushButton *localThresholdBtn;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *radiusSLider;

    void setupUi(QWidget *ThresholdWidget)
    {
        if (ThresholdWidget->objectName().isEmpty())
            ThresholdWidget->setObjectName("ThresholdWidget");
        ThresholdWidget->resize(1276, 747);
        gridLayout_2 = new QGridLayout(ThresholdWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        frame_7 = new QFrame(ThresholdWidget);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(500, 500));
        frame_8->setMaximumSize(QSize(500, 500));
        frame_8->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        originalImage = new QLabel(frame_8);
        originalImage->setObjectName("originalImage");

        verticalLayout_2->addWidget(originalImage);


        horizontalLayout_4->addWidget(frame_8);

        horizontalSpacer_3 = new QSpacerItem(31, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName("frame_9");
        frame_9->setMinimumSize(QSize(500, 500));
        frame_9->setMaximumSize(QSize(500, 500));
        frame_9->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_9);
        verticalLayout_3->setObjectName("verticalLayout_3");
        processedImage = new QLabel(frame_9);
        processedImage->setObjectName("processedImage");

        verticalLayout_3->addWidget(processedImage);


        horizontalLayout_4->addWidget(frame_9);


        gridLayout->addWidget(frame_7, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        uploadBtn = new QPushButton(ThresholdWidget);
        uploadBtn->setObjectName("uploadBtn");

        horizontalLayout_6->addWidget(uploadBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        resetBtn = new QPushButton(ThresholdWidget);
        resetBtn->setObjectName("resetBtn");

        horizontalLayout_6->addWidget(resetBtn);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(350, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(ThresholdWidget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        frame_3 = new QFrame(ThresholdWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        spectralBtn = new QPushButton(frame_3);
        spectralBtn->setObjectName("spectralBtn");

        horizontalLayout_5->addWidget(spectralBtn);

        otsuBtn = new QPushButton(frame_3);
        otsuBtn->setObjectName("otsuBtn");

        horizontalLayout_5->addWidget(otsuBtn);

        optimumBtn = new QPushButton(frame_3);
        optimumBtn->setObjectName("optimumBtn");

        horizontalLayout_5->addWidget(optimumBtn);

        globalVsLocalCombo = new QComboBox(frame_3);
        globalVsLocalCombo->addItem(QString());
        globalVsLocalCombo->addItem(QString());
        globalVsLocalCombo->setObjectName("globalVsLocalCombo");

        horizontalLayout_5->addWidget(globalVsLocalCombo);


        verticalLayout_4->addWidget(frame_3);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(ThresholdWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame = new QFrame(ThresholdWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        globalThresholdBtn = new QPushButton(frame);
        globalThresholdBtn->setObjectName("globalThresholdBtn");

        horizontalLayout->addWidget(globalThresholdBtn);

        localThresholdBtn = new QPushButton(frame);
        localThresholdBtn->setObjectName("localThresholdBtn");

        horizontalLayout->addWidget(localThresholdBtn);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_3->addWidget(frame);

        frame_2 = new QFrame(ThresholdWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(frame_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        radiusSLider = new QSlider(frame_2);
        radiusSLider->setObjectName("radiusSLider");
        radiusSLider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(radiusSLider);


        horizontalLayout_3->addWidget(frame_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ThresholdWidget);

        QMetaObject::connectSlotsByName(ThresholdWidget);
    } // setupUi

    void retranslateUi(QWidget *ThresholdWidget)
    {
        ThresholdWidget->setWindowTitle(QCoreApplication::translate("ThresholdWidget", "Form", nullptr));
        originalImage->setText(QString());
        processedImage->setText(QString());
        uploadBtn->setText(QCoreApplication::translate("ThresholdWidget", "Upload", nullptr));
        resetBtn->setText(QCoreApplication::translate("ThresholdWidget", "Reset", nullptr));
        label_3->setText(QCoreApplication::translate("ThresholdWidget", "Thresholding Modes ", nullptr));
        spectralBtn->setText(QCoreApplication::translate("ThresholdWidget", "Spectral Thresholding", nullptr));
        otsuBtn->setText(QCoreApplication::translate("ThresholdWidget", "Otsu Thresholding", nullptr));
        optimumBtn->setText(QCoreApplication::translate("ThresholdWidget", "Optimum Thresholding", nullptr));
        globalVsLocalCombo->setItemText(0, QCoreApplication::translate("ThresholdWidget", "Global", nullptr));
        globalVsLocalCombo->setItemText(1, QCoreApplication::translate("ThresholdWidget", "Local ", nullptr));

        label_2->setText(QCoreApplication::translate("ThresholdWidget", "General Thresholding", nullptr));
        globalThresholdBtn->setText(QCoreApplication::translate("ThresholdWidget", "Global Thresholding", nullptr));
        localThresholdBtn->setText(QCoreApplication::translate("ThresholdWidget", "Local Thresholding", nullptr));
        label->setText(QCoreApplication::translate("ThresholdWidget", "Global threshold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThresholdWidget: public Ui_ThresholdWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THRESHOLDWIDGET_H
