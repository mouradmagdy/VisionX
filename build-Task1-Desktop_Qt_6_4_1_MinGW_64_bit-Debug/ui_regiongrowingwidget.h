/********************************************************************************
** Form generated from reading UI file 'regiongrowingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIONGROWINGWIDGET_H
#define UI_REGIONGROWINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegionGrowingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *processedImgFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *processedImgLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *uploadBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *resetBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RegionGrowingWidget)
    {
        if (RegionGrowingWidget->objectName().isEmpty())
            RegionGrowingWidget->setObjectName("RegionGrowingWidget");
        RegionGrowingWidget->resize(907, 482);
        verticalLayout = new QVBoxLayout(RegionGrowingWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(RegionGrowingWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        graphicsView = new QGraphicsView(frame_3);
        graphicsView->setObjectName("graphicsView");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        graphicsView->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(graphicsView);


        horizontalLayout_2->addWidget(frame_3);

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
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        processedImgFrame = new QFrame(frame_4);
        processedImgFrame->setObjectName("processedImgFrame");
        processedImgFrame->setFrameShape(QFrame::StyledPanel);
        processedImgFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(processedImgFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        processedImgLabel = new QLabel(processedImgFrame);
        processedImgLabel->setObjectName("processedImgLabel");

        verticalLayout_2->addWidget(processedImgLabel);


        horizontalLayout_3->addWidget(processedImgFrame);


        horizontalLayout_2->addWidget(frame_4);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(RegionGrowingWidget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(frame);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        uploadBtn = new QPushButton(frame);
        uploadBtn->setObjectName("uploadBtn");
        uploadBtn->setMinimumSize(QSize(150, 30));

        horizontalLayout_5->addWidget(uploadBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        resetBtn = new QPushButton(frame);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setMinimumSize(QSize(150, 30));

        horizontalLayout_5->addWidget(resetBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        applyBtn = new QPushButton(frame);
        applyBtn->setObjectName("applyBtn");
        applyBtn->setMinimumSize(QSize(150, 30));

        horizontalLayout_5->addWidget(applyBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame);


        retranslateUi(RegionGrowingWidget);

        QMetaObject::connectSlotsByName(RegionGrowingWidget);
    } // setupUi

    void retranslateUi(QWidget *RegionGrowingWidget)
    {
        RegionGrowingWidget->setWindowTitle(QCoreApplication::translate("RegionGrowingWidget", "Form", nullptr));
        processedImgLabel->setText(QString());
        label->setText(QCoreApplication::translate("RegionGrowingWidget", "Number of regions", nullptr));
        label_2->setText(QCoreApplication::translate("RegionGrowingWidget", "0", nullptr));
        uploadBtn->setText(QCoreApplication::translate("RegionGrowingWidget", "Upload", nullptr));
        resetBtn->setText(QCoreApplication::translate("RegionGrowingWidget", "Reset", nullptr));
        applyBtn->setText(QCoreApplication::translate("RegionGrowingWidget", "Apply ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegionGrowingWidget: public Ui_RegionGrowingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIONGROWINGWIDGET_H
