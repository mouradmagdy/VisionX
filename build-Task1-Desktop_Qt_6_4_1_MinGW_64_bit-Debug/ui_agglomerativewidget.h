/********************************************************************************
** Form generated from reading UI file 'agglomerativewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGGLOMERATIVEWIDGET_H
#define UI_AGGLOMERATIVEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_AgglomerativeWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_5;
    QLabel *originalImage_2;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_6;
    QLabel *processedImage_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSlider *kCluserSlider;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *browseBtn_2;
    QPushButton *segmentBtn;

    void setupUi(QWidget *AgglomerativeWidget)
    {
        if (AgglomerativeWidget->objectName().isEmpty())
            AgglomerativeWidget->setObjectName("AgglomerativeWidget");
        AgglomerativeWidget->resize(1091, 863);
        gridLayout = new QGridLayout(AgglomerativeWidget);
        gridLayout->setObjectName("gridLayout");
        frame_11 = new QFrame(AgglomerativeWidget);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName("frame_12");
        frame_12->setMinimumSize(QSize(500, 500));
        frame_12->setMaximumSize(QSize(500, 500));
        frame_12->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_12);
        verticalLayout_5->setObjectName("verticalLayout_5");
        originalImage_2 = new QLabel(frame_12);
        originalImage_2->setObjectName("originalImage_2");

        verticalLayout_5->addWidget(originalImage_2);


        horizontalLayout_5->addWidget(frame_12);

        horizontalSpacer_4 = new QSpacerItem(31, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        frame_13 = new QFrame(frame_11);
        frame_13->setObjectName("frame_13");
        frame_13->setMinimumSize(QSize(500, 500));
        frame_13->setMaximumSize(QSize(500, 500));
        frame_13->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;\n"
"      "));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_13);
        verticalLayout_6->setObjectName("verticalLayout_6");
        processedImage_2 = new QLabel(frame_13);
        processedImage_2->setObjectName("processedImage_2");

        verticalLayout_6->addWidget(processedImage_2);


        horizontalLayout_5->addWidget(frame_13);


        gridLayout->addWidget(frame_11, 0, 0, 1, 1);

        frame_6 = new QFrame(AgglomerativeWidget);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame_10 = new QFrame(frame_6);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_10);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(200, 140, 361, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        kCluserSlider = new QSlider(widget);
        kCluserSlider->setObjectName("kCluserSlider");
        kCluserSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(kCluserSlider);

        widget1 = new QWidget(frame_10);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(50, 20, 169, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        browseBtn_2 = new QPushButton(widget1);
        browseBtn_2->setObjectName("browseBtn_2");

        horizontalLayout_2->addWidget(browseBtn_2);

        segmentBtn = new QPushButton(widget1);
        segmentBtn->setObjectName("segmentBtn");

        horizontalLayout_2->addWidget(segmentBtn);


        horizontalLayout_3->addWidget(frame_10);


        gridLayout->addWidget(frame_6, 1, 0, 1, 1);


        retranslateUi(AgglomerativeWidget);

        QMetaObject::connectSlotsByName(AgglomerativeWidget);
    } // setupUi

    void retranslateUi(QWidget *AgglomerativeWidget)
    {
        AgglomerativeWidget->setWindowTitle(QCoreApplication::translate("AgglomerativeWidget", "Form", nullptr));
        originalImage_2->setText(QString());
        processedImage_2->setText(QString());
        label_4->setText(QCoreApplication::translate("AgglomerativeWidget", "Clusters: 0", nullptr));
        browseBtn_2->setText(QCoreApplication::translate("AgglomerativeWidget", "Browse", nullptr));
        segmentBtn->setText(QCoreApplication::translate("AgglomerativeWidget", "Segment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgglomerativeWidget: public Ui_AgglomerativeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGGLOMERATIVEWIDGET_H
