/********************************************************************************
** Form generated from reading UI file 'pqImageOutputInfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMAGEOUTPUTINFO_H
#define UI_PQIMAGEOUTPUTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageOutputInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *imageTypeLabel;
    QLabel *imageFileNameLabel;
    QLabel *imageWriteFrequencyLabel;
    QLabel *thumbnailLabel;
    QSpinBox *imageWriteFrequency;
    QLineEdit *imageFileName;
    QCheckBox *fitToScreen;
    QComboBox *imageType;
    QComboBox *cinemaExport;
    QLabel *imageMagnificationLabel;
    QSpinBox *imageMagnification;
    QLabel *cinemaLabel;
    QGridLayout *cinemaCamLayout;
    QLabel *phiLabel;
    QSpinBox *phiResolution;
    QLabel *thetaLabel;
    QSpinBox *thetaResolution;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ImageOutputInfo)
    {
        if (ImageOutputInfo->objectName().isEmpty())
            ImageOutputInfo->setObjectName(QString::fromUtf8("ImageOutputInfo"));
        ImageOutputInfo->resize(431, 283);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageOutputInfo->sizePolicy().hasHeightForWidth());
        ImageOutputInfo->setSizePolicy(sizePolicy);
        ImageOutputInfo->setMinimumSize(QSize(0, 283));
        gridLayout = new QGridLayout(ImageOutputInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageTypeLabel = new QLabel(ImageOutputInfo);
        imageTypeLabel->setObjectName(QString::fromUtf8("imageTypeLabel"));
        imageTypeLabel->setEnabled(true);

        gridLayout->addWidget(imageTypeLabel, 0, 0, 1, 1);

        imageFileNameLabel = new QLabel(ImageOutputInfo);
        imageFileNameLabel->setObjectName(QString::fromUtf8("imageFileNameLabel"));
        imageFileNameLabel->setEnabled(true);

        gridLayout->addWidget(imageFileNameLabel, 1, 0, 1, 1);

        imageWriteFrequencyLabel = new QLabel(ImageOutputInfo);
        imageWriteFrequencyLabel->setObjectName(QString::fromUtf8("imageWriteFrequencyLabel"));
        imageWriteFrequencyLabel->setEnabled(true);

        gridLayout->addWidget(imageWriteFrequencyLabel, 2, 0, 1, 1);

        thumbnailLabel = new QLabel(ImageOutputInfo);
        thumbnailLabel->setObjectName(QString::fromUtf8("thumbnailLabel"));
        sizePolicy.setHeightForWidth(thumbnailLabel->sizePolicy().hasHeightForWidth());
        thumbnailLabel->setSizePolicy(sizePolicy);
        thumbnailLabel->setBaseSize(QSize(147, 145));
        thumbnailLabel->setScaledContents(false);
        thumbnailLabel->setAlignment(Qt::AlignCenter);
        thumbnailLabel->setWordWrap(true);

        gridLayout->addWidget(thumbnailLabel, 0, 2, 5, 1);

        imageWriteFrequency = new QSpinBox(ImageOutputInfo);
        imageWriteFrequency->setObjectName(QString::fromUtf8("imageWriteFrequency"));
        imageWriteFrequency->setEnabled(true);
        imageWriteFrequency->setMinimum(1);
        imageWriteFrequency->setMaximum(1000);

        gridLayout->addWidget(imageWriteFrequency, 2, 1, 1, 1);

        imageFileName = new QLineEdit(ImageOutputInfo);
        imageFileName->setObjectName(QString::fromUtf8("imageFileName"));
        imageFileName->setEnabled(true);

        gridLayout->addWidget(imageFileName, 1, 1, 1, 1);

        fitToScreen = new QCheckBox(ImageOutputInfo);
        fitToScreen->setObjectName(QString::fromUtf8("fitToScreen"));
        fitToScreen->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(fitToScreen, 4, 0, 1, 1);

        imageType = new QComboBox(ImageOutputInfo);
        imageType->setObjectName(QString::fromUtf8("imageType"));
        imageType->setEnabled(true);
        imageType->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(imageType, 0, 1, 1, 1);

        cinemaExport = new QComboBox(ImageOutputInfo);
        cinemaExport->setObjectName(QString::fromUtf8("cinemaExport"));
        cinemaExport->setEnabled(false);

        gridLayout->addWidget(cinemaExport, 5, 1, 1, 1);

        imageMagnificationLabel = new QLabel(ImageOutputInfo);
        imageMagnificationLabel->setObjectName(QString::fromUtf8("imageMagnificationLabel"));
        imageMagnificationLabel->setEnabled(true);

        gridLayout->addWidget(imageMagnificationLabel, 3, 0, 1, 1);

        imageMagnification = new QSpinBox(ImageOutputInfo);
        imageMagnification->setObjectName(QString::fromUtf8("imageMagnification"));
        imageMagnification->setEnabled(true);
        imageMagnification->setMinimum(1);
        imageMagnification->setMaximum(1000);

        gridLayout->addWidget(imageMagnification, 3, 1, 1, 1);

        cinemaLabel = new QLabel(ImageOutputInfo);
        cinemaLabel->setObjectName(QString::fromUtf8("cinemaLabel"));
        cinemaLabel->setEnabled(true);

        gridLayout->addWidget(cinemaLabel, 5, 0, 1, 1);

        cinemaCamLayout = new QGridLayout();
        cinemaCamLayout->setObjectName(QString::fromUtf8("cinemaCamLayout"));
        phiLabel = new QLabel(ImageOutputInfo);
        phiLabel->setObjectName(QString::fromUtf8("phiLabel"));
        phiLabel->setEnabled(true);
        phiLabel->setMaximumSize(QSize(16777215, 20));
        phiLabel->setAlignment(Qt::AlignCenter);

        cinemaCamLayout->addWidget(phiLabel, 0, 0, 1, 1);

        phiResolution = new QSpinBox(ImageOutputInfo);
        phiResolution->setObjectName(QString::fromUtf8("phiResolution"));
        phiResolution->setEnabled(false);
        phiResolution->setMinimum(1);
        phiResolution->setMaximum(30);
        phiResolution->setValue(12);

        cinemaCamLayout->addWidget(phiResolution, 1, 0, 1, 1);

        thetaLabel = new QLabel(ImageOutputInfo);
        thetaLabel->setObjectName(QString::fromUtf8("thetaLabel"));
        thetaLabel->setEnabled(true);
        thetaLabel->setMaximumSize(QSize(16777215, 20));
        thetaLabel->setAlignment(Qt::AlignCenter);

        cinemaCamLayout->addWidget(thetaLabel, 0, 1, 1, 1);

        thetaResolution = new QSpinBox(ImageOutputInfo);
        thetaResolution->setObjectName(QString::fromUtf8("thetaResolution"));
        thetaResolution->setEnabled(false);
        thetaResolution->setMinimum(1);
        thetaResolution->setMaximum(30);
        thetaResolution->setValue(12);

        cinemaCamLayout->addWidget(thetaResolution, 1, 1, 1, 1);


        gridLayout->addLayout(cinemaCamLayout, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);


        retranslateUi(ImageOutputInfo);

        QMetaObject::connectSlotsByName(ImageOutputInfo);
    } // setupUi

    void retranslateUi(QWidget *ImageOutputInfo)
    {
        ImageOutputInfo->setWindowTitle(QApplication::translate("ImageOutputInfo", "Form", 0, QApplication::UnicodeUTF8));
        imageTypeLabel->setText(QApplication::translate("ImageOutputInfo", "Image Type", 0, QApplication::UnicodeUTF8));
        imageFileNameLabel->setText(QApplication::translate("ImageOutputInfo", "File Name", 0, QApplication::UnicodeUTF8));
        imageWriteFrequencyLabel->setText(QApplication::translate("ImageOutputInfo", "Write Frequency", 0, QApplication::UnicodeUTF8));
        thumbnailLabel->setText(QApplication::translate("ImageOutputInfo", "View not currently available", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageFileName->setToolTip(QApplication::translate("ImageOutputInfo", "The file name must contain %t.  This gets replaced with the time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        imageFileName->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        imageFileName->setText(QApplication::translate("ImageOutputInfo", "image_%t.png", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fitToScreen->setToolTip(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fitToScreen->setWhatsThis(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fitToScreen->setText(QApplication::translate("ImageOutputInfo", "Fit to Screen", 0, QApplication::UnicodeUTF8));
        imageType->clear();
        imageType->insertItems(0, QStringList()
         << QApplication::translate("ImageOutputInfo", "png", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "bmp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "ppm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "tif", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "tiff", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "jpg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "jpeg", 0, QApplication::UnicodeUTF8)
        );
        cinemaExport->clear();
        cinemaExport->insertItems(0, QStringList()
         << QApplication::translate("ImageOutputInfo", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "Static", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "Spherical", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        cinemaExport->setToolTip(QApplication::translate("ImageOutputInfo", "Mode for the cinema store of this view: None=no cinema export, Static=Stationary Camera, Spherical=Phi*Theta camera positions around center of rotation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        imageMagnificationLabel->setText(QApplication::translate("ImageOutputInfo", "Magnification", 0, QApplication::UnicodeUTF8));
        cinemaLabel->setText(QApplication::translate("ImageOutputInfo", "Cinema Export", 0, QApplication::UnicodeUTF8));
        phiLabel->setText(QApplication::translate("ImageOutputInfo", "Phi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        phiResolution->setToolTip(QApplication::translate("ImageOutputInfo", "The number of camera positions in phi direction.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        thetaLabel->setText(QApplication::translate("ImageOutputInfo", "Theta", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        thetaResolution->setToolTip(QApplication::translate("ImageOutputInfo", "The number of camera positions in the theta direction.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ImageOutputInfo: public Ui_ImageOutputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMAGEOUTPUTINFO_H
