/********************************************************************************
** Form generated from reading UI file 'segmentationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATIONWIDGET_H
#define UI_SEGMENTATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SegmentationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *kmeansBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *regionGrowingBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *meanShiftBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *aggBtn;
    QSpacerItem *horizontalSpacer_5;
    QFrame *workFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *SegmentationWidget)
    {
        if (SegmentationWidget->objectName().isEmpty())
            SegmentationWidget->setObjectName("SegmentationWidget");
        SegmentationWidget->resize(1226, 648);
        verticalLayout = new QVBoxLayout(SegmentationWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SegmentationWidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 60));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        kmeansBtn = new QPushButton(frame);
        kmeansBtn->setObjectName("kmeansBtn");

        horizontalLayout->addWidget(kmeansBtn);

        horizontalSpacer_2 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        regionGrowingBtn = new QPushButton(frame);
        regionGrowingBtn->setObjectName("regionGrowingBtn");

        horizontalLayout->addWidget(regionGrowingBtn);

        horizontalSpacer_3 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        meanShiftBtn = new QPushButton(frame);
        meanShiftBtn->setObjectName("meanShiftBtn");

        horizontalLayout->addWidget(meanShiftBtn);

        horizontalSpacer_4 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        aggBtn = new QPushButton(frame);
        aggBtn->setObjectName("aggBtn");

        horizontalLayout->addWidget(aggBtn);

        horizontalSpacer_5 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(frame);

        workFrame = new QFrame(SegmentationWidget);
        workFrame->setObjectName("workFrame");
        workFrame->setFrameShape(QFrame::StyledPanel);
        workFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(workFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(workFrame);
        stackedWidget->setObjectName("stackedWidget");

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(workFrame);


        retranslateUi(SegmentationWidget);

        QMetaObject::connectSlotsByName(SegmentationWidget);
    } // setupUi

    void retranslateUi(QWidget *SegmentationWidget)
    {
        SegmentationWidget->setWindowTitle(QCoreApplication::translate("SegmentationWidget", "Form", nullptr));
        kmeansBtn->setText(QCoreApplication::translate("SegmentationWidget", "K-Means", nullptr));
        regionGrowingBtn->setText(QCoreApplication::translate("SegmentationWidget", "Region Growing", nullptr));
        meanShiftBtn->setText(QCoreApplication::translate("SegmentationWidget", "Mean-Shift", nullptr));
        aggBtn->setText(QCoreApplication::translate("SegmentationWidget", "Agg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SegmentationWidget: public Ui_SegmentationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTATIONWIDGET_H
