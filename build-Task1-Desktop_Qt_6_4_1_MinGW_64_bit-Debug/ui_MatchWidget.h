/********************************************************************************
** Form generated from reading UI file 'MatchWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHWIDGET_H
#define UI_MATCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_MatchWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *imageOriginal1;
    QPushButton *uploadBtn1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageOriginal2;
    QPushButton *uploadBtn2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *imageProcessed;
    QLabel *time_label;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyBtn;

    void setupUi(QWidget *MatchWidget)
    {
        if (MatchWidget->objectName().isEmpty())
            MatchWidget->setObjectName("MatchWidget");
        MatchWidget->resize(1201, 911);
        gridLayout = new QGridLayout(MatchWidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(MatchWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16777215, 30));

        verticalLayout_5->addWidget(label_4);

        frame_3 = new QFrame(MatchWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(300, 250));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
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

        uploadBtn1 = new QPushButton(MatchWidget);
        uploadBtn1->setObjectName("uploadBtn1");
        uploadBtn1->setMaximumSize(QSize(150, 30));
        uploadBtn1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(uploadBtn1);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(MatchWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 30));

        verticalLayout_6->addWidget(label_3);

        frame_2 = new QFrame(MatchWidget);
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

        uploadBtn2 = new QPushButton(MatchWidget);
        uploadBtn2->setObjectName("uploadBtn2");
        uploadBtn2->setMaximumSize(QSize(150, 30));
        uploadBtn2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(uploadBtn2);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(30, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(MatchWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_2);

        frame = new QFrame(MatchWidget);
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

        time_label = new QLabel(MatchWidget);
        time_label->setObjectName("time_label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(time_label->sizePolicy().hasHeightForWidth());
        time_label->setSizePolicy(sizePolicy);
        time_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(time_label);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout);

        groupBox_4 = new QGroupBox(MatchWidget);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label);

        comboBox = new QComboBox(groupBox_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setMinimumSize(QSize(400, 0));

        horizontalLayout_4->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        applyBtn = new QPushButton(groupBox_4);
        applyBtn->setObjectName("applyBtn");

        horizontalLayout_4->addWidget(applyBtn);


        verticalLayout_8->addWidget(groupBox_4);


        gridLayout->addLayout(verticalLayout_8, 0, 0, 1, 1);


        retranslateUi(MatchWidget);

        QMetaObject::connectSlotsByName(MatchWidget);
    } // setupUi

    void retranslateUi(QWidget *MatchWidget)
    {
        MatchWidget->setWindowTitle(QCoreApplication::translate("MatchWidget", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("MatchWidget", "Image", nullptr));
        imageOriginal1->setText(QString());
        uploadBtn1->setText(QCoreApplication::translate("MatchWidget", "Upload Image", nullptr));
        label_3->setText(QCoreApplication::translate("MatchWidget", "Source Map Image", nullptr));
        imageOriginal2->setText(QString());
        uploadBtn2->setText(QCoreApplication::translate("MatchWidget", "Upload Map Image", nullptr));
        label_2->setText(QCoreApplication::translate("MatchWidget", "Matched Image", nullptr));
        imageProcessed->setText(QString());
        time_label->setText(QCoreApplication::translate("MatchWidget", "Time Elapsed:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MatchWidget", "Modes", nullptr));
        label->setText(QCoreApplication::translate("MatchWidget", "Matching Technique", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MatchWidget", "Squared Sum of Differences", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MatchWidget", "Cross Correlation", nullptr));

        applyBtn->setText(QCoreApplication::translate("MatchWidget", "Match", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatchWidget: public Ui_MatchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHWIDGET_H
