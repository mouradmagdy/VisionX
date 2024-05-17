/********************************************************************************
** Form generated from reading UI file 'kmeanswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMEANSWIDGET_H
#define UI_KMEANSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KmeansWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *originalImage;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *processedImage;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *clustersNum;
    QSlider *kCluserSlider;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *browseBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *segmentBtn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *KmeansWidget)
    {
        if (KmeansWidget->objectName().isEmpty())
            KmeansWidget->setObjectName("KmeansWidget");
        KmeansWidget->resize(1175, 844);
        verticalLayout = new QVBoxLayout(KmeansWidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_7 = new QFrame(KmeansWidget);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_7);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(500, 500));
        frame_8->setMaximumSize(QSize(500, 500));
        frame_8->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        originalImage = new QLabel(frame_8);
        originalImage->setObjectName("originalImage");

        verticalLayout_2->addWidget(originalImage);


        horizontalLayout->addWidget(frame_8);

        horizontalSpacer_3 = new QSpacerItem(31, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

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


        horizontalLayout->addWidget(frame_9);


        verticalLayout->addWidget(frame_7);

        frame_6 = new QFrame(KmeansWidget);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        frame = new QFrame(frame_5);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clustersNum = new QLabel(frame);
        clustersNum->setObjectName("clustersNum");
        clustersNum->setMaximumSize(QSize(250, 16777215));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        clustersNum->setFont(font);

        horizontalLayout_3->addWidget(clustersNum);

        kCluserSlider = new QSlider(frame);
        kCluserSlider->setObjectName("kCluserSlider");
        kCluserSlider->setMaximumSize(QSize(250, 16777215));
        kCluserSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(kCluserSlider);

        horizontalSpacer_2 = new QSpacerItem(175, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        browseBtn = new QPushButton(frame);
        browseBtn->setObjectName("browseBtn");
        browseBtn->setMinimumSize(QSize(150, 60));
        browseBtn->setMaximumSize(QSize(150, 70));

        horizontalLayout_3->addWidget(browseBtn);

        horizontalSpacer_5 = new QSpacerItem(21, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        segmentBtn = new QPushButton(frame);
        segmentBtn->setObjectName("segmentBtn");
        segmentBtn->setMinimumSize(QSize(150, 60));
        segmentBtn->setMaximumSize(QSize(150, 70));

        horizontalLayout_3->addWidget(segmentBtn);

        horizontalSpacer_4 = new QSpacerItem(197, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_6->addWidget(frame);


        horizontalLayout_2->addWidget(frame_5);


        verticalLayout->addWidget(frame_6);


        retranslateUi(KmeansWidget);

        QMetaObject::connectSlotsByName(KmeansWidget);
    } // setupUi

    void retranslateUi(QWidget *KmeansWidget)
    {
        KmeansWidget->setWindowTitle(QCoreApplication::translate("KmeansWidget", "Form", nullptr));
        originalImage->setText(QString());
        processedImage->setText(QString());
        clustersNum->setText(QCoreApplication::translate("KmeansWidget", "Number of Clusters", nullptr));
        browseBtn->setText(QCoreApplication::translate("KmeansWidget", "Browse", nullptr));
        segmentBtn->setText(QCoreApplication::translate("KmeansWidget", "Segment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KmeansWidget: public Ui_KmeansWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMEANSWIDGET_H
