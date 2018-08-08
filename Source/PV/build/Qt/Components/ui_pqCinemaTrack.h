/********************************************************************************
** Form generated from reading UI file 'pqCinemaTrack.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCINEMATRACK_H
#define UI_PQCINEMATRACK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CinemaTrack
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QRadioButton *radioButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;

    void setupUi(QWidget *CinemaTrack)
    {
        if (CinemaTrack->objectName().isEmpty())
            CinemaTrack->setObjectName(QString::fromUtf8("CinemaTrack"));
        CinemaTrack->resize(315, 283);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CinemaTrack->sizePolicy().hasHeightForWidth());
        CinemaTrack->setSizePolicy(sizePolicy);
        CinemaTrack->setMinimumSize(QSize(0, 283));
        verticalLayout_2 = new QVBoxLayout(CinemaTrack);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(CinemaTrack);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        radioButton = new QRadioButton(CinemaTrack);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setLayoutDirection(Qt::LeftToRight);
        radioButton->setChecked(false);

        horizontalLayout_2->addWidget(radioButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(CinemaTrack);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 274, 224));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(CinemaTrack);

        QMetaObject::connectSlotsByName(CinemaTrack);
    } // setupUi

    void retranslateUi(QWidget *CinemaTrack)
    {
        CinemaTrack->setWindowTitle(QApplication::translate("CinemaTrack", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CinemaTrack->setToolTip(QApplication::translate("CinemaTrack", "Specify values that the viewew app exposes here. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("CinemaTrack", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButton->setToolTip(QApplication::translate("CinemaTrack", "Check to allow the user to explore this parameter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButton->setText(QApplication::translate("CinemaTrack", "Cinema Explore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        scrollArea->setToolTip(QApplication::translate("CinemaTrack", "Specify values that cinema will expose to the user here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CinemaTrack: public Ui_CinemaTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCINEMATRACK_H
