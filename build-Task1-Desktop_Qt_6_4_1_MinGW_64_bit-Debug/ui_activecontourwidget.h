/********************************************************************************
** Form generated from reading UI file 'activecontourwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVECONTOURWIDGET_H
#define UI_ACTIVECONTOURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActiveContourWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpinBox *raduis;
    QSpacerItem *horizontalSpacer;
    QPushButton *clear;
    QLabel *label_7;
    QPushButton *upload_btn;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *output_label;
    QLabel *label_8;
    QDoubleSpinBox *area;
    QDoubleSpinBox *perimeter;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QSpinBox *window_size;
    QLabel *label_4;
    QSpinBox *num_points;
    QDoubleSpinBox *beta;
    QDoubleSpinBox *alpha;
    QSpinBox *numItr;
    QLabel *label_2;
    QLabel *label;
    QDoubleSpinBox *gamma;
    QPushButton *generate_btn;

    void setupUi(QWidget *ActiveContourWidget)
    {
        if (ActiveContourWidget->objectName().isEmpty())
            ActiveContourWidget->setObjectName("ActiveContourWidget");
        ActiveContourWidget->resize(1224, 812);
        verticalLayout_2 = new QVBoxLayout(ActiveContourWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_2 = new QGroupBox(ActiveContourWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        raduis = new QSpinBox(groupBox_2);
        raduis->setObjectName("raduis");
        raduis->setMaximum(1000);
        raduis->setValue(50);

        gridLayout_3->addWidget(raduis, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 2);

        clear = new QPushButton(groupBox_2);
        clear->setObjectName("clear");

        gridLayout_3->addWidget(clear, 0, 5, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        upload_btn = new QPushButton(groupBox_2);
        upload_btn->setObjectName("upload_btn");
        sizePolicy.setHeightForWidth(upload_btn->sizePolicy().hasHeightForWidth());
        upload_btn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(upload_btn, 0, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName("graphicsView");
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        graphicsView->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(graphicsView);


        gridLayout_3->addWidget(frame, 1, 0, 1, 6);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ActiveContourWidget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        gridLayout_4->addWidget(label_9, 0, 2, 1, 1);

        frame_2 = new QFrame(groupBox_3);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"           border: 2px solid  #316669;\n"
"          border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        output_label = new QLabel(frame_2);
        output_label->setObjectName("output_label");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(output_label->sizePolicy().hasHeightForWidth());
        output_label->setSizePolicy(sizePolicy1);
        output_label->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(output_label);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 4);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        area = new QDoubleSpinBox(groupBox_3);
        area->setObjectName("area");
        area->setEnabled(false);

        gridLayout_4->addWidget(area, 0, 1, 1, 1);

        perimeter = new QDoubleSpinBox(groupBox_3);
        perimeter->setObjectName("perimeter");
        perimeter->setEnabled(false);

        gridLayout_4->addWidget(perimeter, 0, 3, 1, 1);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_4 = new QGroupBox(ActiveContourWidget);
        groupBox_4->setObjectName("groupBox_4");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 5, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 8, 1, 1);

        window_size = new QSpinBox(groupBox_4);
        window_size->setObjectName("window_size");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(window_size->sizePolicy().hasHeightForWidth());
        window_size->setSizePolicy(sizePolicy3);
        window_size->setMinimum(1);
        window_size->setMaximum(13);
        window_size->setSingleStep(2);
        window_size->setValue(11);

        gridLayout_2->addWidget(window_size, 0, 4, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_4, 0, 8, 1, 1);

        num_points = new QSpinBox(groupBox_4);
        num_points->setObjectName("num_points");
        num_points->setMaximum(1000);
        num_points->setValue(50);

        gridLayout_2->addWidget(num_points, 0, 6, 1, 1);

        beta = new QDoubleSpinBox(groupBox_4);
        beta->setObjectName("beta");
        beta->setValue(3.000000000000000);

        gridLayout_2->addWidget(beta, 3, 6, 1, 1);

        alpha = new QDoubleSpinBox(groupBox_4);
        alpha->setObjectName("alpha");
        alpha->setValue(10.000000000000000);

        gridLayout_2->addWidget(alpha, 3, 4, 1, 1);

        numItr = new QSpinBox(groupBox_4);
        numItr->setObjectName("numItr");
        numItr->setMaximum(1000);
        numItr->setValue(300);

        gridLayout_2->addWidget(numItr, 0, 9, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 3, 3, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(label, 0, 3, 1, 1);

        gamma = new QDoubleSpinBox(groupBox_4);
        gamma->setObjectName("gamma");
        gamma->setValue(1.000000000000000);

        gridLayout_2->addWidget(gamma, 3, 9, 1, 1);

        generate_btn = new QPushButton(groupBox_4);
        generate_btn->setObjectName("generate_btn");
        sizePolicy1.setHeightForWidth(generate_btn->sizePolicy().hasHeightForWidth());
        generate_btn->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(generate_btn, 0, 11, 4, 1);


        verticalLayout->addWidget(groupBox_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ActiveContourWidget);

        QMetaObject::connectSlotsByName(ActiveContourWidget);
    } // setupUi

    void retranslateUi(QWidget *ActiveContourWidget)
    {
        ActiveContourWidget->setWindowTitle(QCoreApplication::translate("ActiveContourWidget", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ActiveContourWidget", "Initial Contour", nullptr));
        clear->setText(QCoreApplication::translate("ActiveContourWidget", "Clear Initial Contour", nullptr));
        label_7->setText(QCoreApplication::translate("ActiveContourWidget", "Circle Raduis", nullptr));
        upload_btn->setText(QCoreApplication::translate("ActiveContourWidget", "Upload", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ActiveContourWidget", "Snake Contour", nullptr));
        label_9->setText(QCoreApplication::translate("ActiveContourWidget", "Perimeter", nullptr));
        output_label->setText(QString());
        label_8->setText(QCoreApplication::translate("ActiveContourWidget", "Area", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ActiveContourWidget", "Active Contour Options", nullptr));
        label_5->setText(QCoreApplication::translate("ActiveContourWidget", "Beta", nullptr));
        label_6->setText(QCoreApplication::translate("ActiveContourWidget", "Num of Points", nullptr));
        label_3->setText(QCoreApplication::translate("ActiveContourWidget", "Gamma", nullptr));
        label_4->setText(QCoreApplication::translate("ActiveContourWidget", "Num of Itr", nullptr));
        label_2->setText(QCoreApplication::translate("ActiveContourWidget", "Alpha", nullptr));
        label->setText(QCoreApplication::translate("ActiveContourWidget", "Window Size", nullptr));
        generate_btn->setText(QCoreApplication::translate("ActiveContourWidget", "Generate Contour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActiveContourWidget: public Ui_ActiveContourWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVECONTOURWIDGET_H
