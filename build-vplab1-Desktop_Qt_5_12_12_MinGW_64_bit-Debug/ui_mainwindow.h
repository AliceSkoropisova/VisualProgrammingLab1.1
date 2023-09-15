/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_23;
    QPushButton *pushButton_33;
    QPushButton *pushButton_32;
    QPushButton *pushButton_31;
    QPushButton *pushButton_30;
    QPushButton *pushButton_19;
    QProgressBar *progressBar_4;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;
    QProgressBar *progressBar_5;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *Albumlabel;
    QLabel *Tracklabel;
    QLabel *Artistlabel;
    QLabel *Yearslabel;
    QLabel *Genrelabel;
    QLabel *Timelabel;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_18;
    QLCDNumber *lcdNumber;
    QLabel *label_11;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(700, 745);
        MainWindow->setMinimumSize(QSize(700, 745));
        MainWindow->setMaximumSize(QSize(1677, 1677));
        MainWindow->setBaseSize(QSize(700, 745));
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 52, 52);\n"
"QMainWindow::QWindowTitle{\n"
"background-color: rgb(52, 52, 52);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/b.jpg")));
        label_10->setScaledContents(true);

        gridLayout->addWidget(label_10, 0, 0, 1, 7);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAutoFillBackground(false);
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/a.jpg")));
        label_9->setScaledContents(true);

        gridLayout->addWidget(label_9, 4, 1, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setMinimumSize(QSize(15, 0));
        pushButton_23->setSizeIncrement(QSize(15, 0));
        pushButton_23->setBaseSize(QSize(15, 0));
        pushButton_23->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_23->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/trash/krug.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_23->setIcon(icon);
        pushButton_23->setIconSize(QSize(31, 26));
        pushButton_23->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_23);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);
        pushButton_33->setMinimumSize(QSize(15, 0));
        pushButton_33->setSizeIncrement(QSize(15, 0));
        pushButton_33->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_33->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        pushButton_33->setIcon(icon);
        pushButton_33->setIconSize(QSize(31, 26));
        pushButton_33->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_33);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);
        pushButton_32->setMinimumSize(QSize(15, 0));
        pushButton_32->setSizeIncrement(QSize(15, 0));
        pushButton_32->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_32->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        pushButton_32->setIcon(icon);
        pushButton_32->setIconSize(QSize(31, 26));
        pushButton_32->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_32);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);
        pushButton_31->setMinimumSize(QSize(15, 0));
        pushButton_31->setSizeIncrement(QSize(15, 0));
        pushButton_31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_31->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        pushButton_31->setIcon(icon);
        pushButton_31->setIconSize(QSize(31, 26));
        pushButton_31->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_31);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);
        pushButton_30->setMinimumSize(QSize(15, 0));
        pushButton_30->setSizeIncrement(QSize(15, 0));
        pushButton_30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_30->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        pushButton_30->setIcon(icon);
        pushButton_30->setIconSize(QSize(31, 26));
        pushButton_30->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_30);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setMinimumSize(QSize(13, 13));
        pushButton_19->setSizeIncrement(QSize(0, 0));
        pushButton_19->setBaseSize(QSize(10, 0));
        pushButton_19->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_19->setStyleSheet(QString::fromUtf8("border-image: stretch;"));
        pushButton_19->setIcon(icon);
        pushButton_19->setIconSize(QSize(11, 11));
        pushButton_19->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_19);

        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(progressBar_4->sizePolicy().hasHeightForWidth());
        progressBar_4->setSizePolicy(sizePolicy2);
        progressBar_4->setMinimumSize(QSize(143, 0));
        progressBar_4->setMaximumSize(QSize(16777215, 15));
        progressBar_4->setBaseSize(QSize(0, 0));
        progressBar_4->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border-radius: 7px;\n"
"	background-color: rgb(89, 89, 89);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #ff8722;\n"
"    border-radius: 7px;\n"
"}"));
        progressBar_4->setValue(66);

        horizontalLayout_5->addWidget(progressBar_4);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(15, 6));
        pushButton_20->setMaximumSize(QSize(16777215, 15));
        pushButton_20->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix2/trash/off.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_20->setIcon(icon1);
        pushButton_20->setIconSize(QSize(27, 21));
        pushButton_20->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_20);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setMinimumSize(QSize(15, 0));
        pushButton_22->setMaximumSize(QSize(16777215, 15));
        pushButton_22->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix2/trash/knopa.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_22->setIcon(icon2);
        pushButton_22->setIconSize(QSize(27, 21));
        pushButton_22->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_22);

        progressBar_5 = new QProgressBar(centralwidget);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressBar_5->sizePolicy().hasHeightForWidth());
        progressBar_5->setSizePolicy(sizePolicy3);
        progressBar_5->setMinimumSize(QSize(340, 0));
        progressBar_5->setMaximumSize(QSize(16777215, 15));
        progressBar_5->setBaseSize(QSize(0, 0));
        progressBar_5->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border-radius: 7px;\n"
"	background-color: rgb(89, 89, 89);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #ff8722;\n"
"    border-radius: 7px;\n"
"}"));
        progressBar_5->setValue(24);

        horizontalLayout_5->addWidget(progressBar_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy4);
        progressBar->setMinimumSize(QSize(0, 13));
        progressBar->setMaximumSize(QSize(16777215, 15));
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border-radius: 7px;\n"
"	background-color: rgb(89, 89, 89);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #ff8722;\n"
"    border-radius: 7px;\n"
"}"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        gridLayout->addLayout(verticalLayout_2, 8, 0, 2, 7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(25, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix2/trash/p.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon3);
        pushButton_8->setIconSize(QSize(25, 19));
        pushButton_8->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(25, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix2/trash/m.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(25, 19));
        pushButton_7->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(25, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix2/trash/t.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(25, 19));
        pushButton_6->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(25, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix2/trash/s.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(25, 19));
        pushButton_4->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(25, 0));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix2/trash/po.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon7);
        pushButton_5->setIconSize(QSize(25, 19));
        pushButton_5->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_5);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy5);
        lineEdit->setMinimumSize(QSize(497, 0));
        lineEdit->setMaximumSize(QSize(16777215, 19));
        lineEdit->setSizeIncrement(QSize(100, 0));
        lineEdit->setBaseSize(QSize(100, 0));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("color : rgb(119, 118, 123); background-color: rgb(94, 92, 100)"));
        lineEdit->setReadOnly(false);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(28, 0));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix2/trash/fil.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon8);
        pushButton_9->setIconSize(QSize(26, 19));
        pushButton_9->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_9);


        gridLayout->addLayout(horizontalLayout_3, 14, 0, 1, 7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/nepon.jpg")));
        label_6->setScaledContents(true);

        verticalLayout_7->addWidget(label_6);


        gridLayout->addLayout(verticalLayout_7, 4, 5, 1, 2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        Albumlabel = new QLabel(centralwidget);
        Albumlabel->setObjectName(QString::fromUtf8("Albumlabel"));
        Albumlabel->setMinimumSize(QSize(100, 0));
        Albumlabel->setMouseTracking(false);
        Albumlabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/album.jpg")));
        Albumlabel->setScaledContents(true);
        Albumlabel->setWordWrap(false);
        Albumlabel->setOpenExternalLinks(false);

        verticalLayout_8->addWidget(Albumlabel);

        Tracklabel = new QLabel(centralwidget);
        Tracklabel->setObjectName(QString::fromUtf8("Tracklabel"));
        Tracklabel->setMinimumSize(QSize(150, 0));
        Tracklabel->setStyleSheet(QString::fromUtf8("color : rgb(245, 130, 49)"));

        verticalLayout_8->addWidget(Tracklabel);

        Artistlabel = new QLabel(centralwidget);
        Artistlabel->setObjectName(QString::fromUtf8("Artistlabel"));

        verticalLayout_8->addWidget(Artistlabel);

        Yearslabel = new QLabel(centralwidget);
        Yearslabel->setObjectName(QString::fromUtf8("Yearslabel"));

        verticalLayout_8->addWidget(Yearslabel);

        Genrelabel = new QLabel(centralwidget);
        Genrelabel->setObjectName(QString::fromUtf8("Genrelabel"));

        verticalLayout_8->addWidget(Genrelabel);

        Timelabel = new QLabel(centralwidget);
        Timelabel->setObjectName(QString::fromUtf8("Timelabel"));
        Timelabel->setStyleSheet(QString::fromUtf8("color : rgb(245, 130, 49)"));

        verticalLayout_8->addWidget(Timelabel);


        gridLayout->addLayout(verticalLayout_8, 12, 0, 2, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(25, 25));
        pushButton_18->setMaximumSize(QSize(25, 25));
        pushButton_18->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix2/trash/vkl.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon9);
        pushButton_18->setIconSize(QSize(30, 30));
        pushButton_18->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_18);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy6);
        lcdNumber->setMinimumSize(QSize(40, 40));
        lcdNumber->setMaximumSize(QSize(60, 60));
        lcdNumber->setProperty("value", QVariant(0.250000000000000));

        horizontalLayout_4->addWidget(lcdNumber);


        verticalLayout_5->addLayout(horizontalLayout_4);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/d.jpg")));
        label_11->setScaledContents(true);

        verticalLayout_5->addWidget(label_11);


        gridLayout->addLayout(verticalLayout_5, 4, 3, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy4.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy4);
        pushButton_24->setMinimumSize(QSize(25, 25));
        pushButton_24->setMaximumSize(QSize(25, 25));
        pushButton_24->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix2/trash/1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_24->setIcon(icon10);
        pushButton_24->setIconSize(QSize(25, 25));
        pushButton_24->setFlat(true);

        gridLayout_2->addWidget(pushButton_24, 0, 0, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy6.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy6);
        pushButton_25->setMinimumSize(QSize(25, 25));
        pushButton_25->setMaximumSize(QSize(25, 25));
        pushButton_25->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix2/trash/2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_25->setIcon(icon11);
        pushButton_25->setIconSize(QSize(25, 25));
        pushButton_25->setFlat(true);

        gridLayout_2->addWidget(pushButton_25, 0, 1, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy6.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy6);
        pushButton_26->setMinimumSize(QSize(25, 25));
        pushButton_26->setMaximumSize(QSize(25, 25));
        pushButton_26->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix2/trash/3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_26->setIcon(icon12);
        pushButton_26->setIconSize(QSize(25, 25));
        pushButton_26->setFlat(true);

        gridLayout_2->addWidget(pushButton_26, 1, 0, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setMinimumSize(QSize(25, 25));
        pushButton_27->setMaximumSize(QSize(25, 25));
        pushButton_27->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix2/trash/4.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_27->setIcon(icon13);
        pushButton_27->setIconSize(QSize(25, 25));
        pushButton_27->setFlat(true);

        gridLayout_2->addWidget(pushButton_27, 1, 1, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy6.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy6);
        pushButton_28->setMinimumSize(QSize(25, 25));
        pushButton_28->setMaximumSize(QSize(25, 25));
        pushButton_28->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix2/trash/5.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_28->setIcon(icon14);
        pushButton_28->setIconSize(QSize(25, 25));
        pushButton_28->setFlat(true);

        gridLayout_2->addWidget(pushButton_28, 2, 0, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setMinimumSize(QSize(25, 25));
        pushButton_29->setMaximumSize(QSize(25, 25));
        pushButton_29->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix2/trash/str.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_29->setIcon(icon15);
        pushButton_29->setIconSize(QSize(25, 25));
        pushButton_29->setFlat(true);

        gridLayout_2->addWidget(pushButton_29, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 1);
        gridLayout_2->setRowMinimumHeight(0, 1);
        gridLayout_2->setRowMinimumHeight(1, 1);
        gridLayout_2->setRowMinimumHeight(2, 1);

        gridLayout->addLayout(gridLayout_2, 4, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/c.jpg")));
        label->setScaledContents(true);

        verticalLayout_11->addWidget(label);


        gridLayout->addLayout(verticalLayout_11, 11, 0, 1, 7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy7);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 445, 425));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        QSizePolicy sizePolicy8(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy8);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/11.jpg")));
        label_2->setScaledContents(true);
        label_2->setIndent(-1);
        label_2->setOpenExternalLinks(false);

        verticalLayout_6->addWidget(label_2);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy8.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy8);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/22.jpg")));
        label_7->setScaledContents(true);

        verticalLayout_6->addWidget(label_7);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy8.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy8);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/33.jpg")));
        label_5->setScaledContents(true);

        verticalLayout_6->addWidget(label_5);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy8.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy8);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/44.jpg")));
        label_12->setScaledContents(true);

        verticalLayout_6->addWidget(label_12);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy8.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy8);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/55.jpg")));
        label_4->setScaledContents(true);

        verticalLayout_6->addWidget(label_4);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy8.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy8);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/66.jpg")));
        label_3->setScaledContents(true);

        verticalLayout_6->addWidget(label_3);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy8.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy8);
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/trash/77.jpg")));
        label_8->setScaledContents(true);

        verticalLayout_6->addWidget(label_8);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 12, 2, 2, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy6.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy6);
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setBaseSize(QSize(20, 0));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color : rgb(192, 191, 188); background-color: rgb(94, 92, 100)"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy6.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy6);
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setBaseSize(QSize(20, 0));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color : rgb(192, 191, 188); background-color: rgb(94, 92, 100)"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy6.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy6);
        pushButton_3->setMinimumSize(QSize(60, 25));
        pushButton_3->setBaseSize(QSize(0, 0));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255); background-color: rgb(255, 120, 0)"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 10, 0, 1, 6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music", nullptr));
        label_10->setText(QString());
        label_9->setText(QString());
        pushButton_23->setText(QString());
        pushButton_33->setText(QString());
        pushButton_32->setText(QString());
        pushButton_31->setText(QString());
        pushButton_30->setText(QString());
        pushButton_19->setText(QString());
        progressBar_4->setFormat(QString());
        pushButton_20->setText(QString());
        pushButton_22->setText(QString());
        progressBar_5->setFormat(QString());
        progressBar->setFormat(QString());
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QString());
        pushButton_9->setText(QString());
        label_6->setText(QString());
        Albumlabel->setText(QString());
        Tracklabel->setText(QApplication::translate("MainWindow", "Cowboy song", nullptr));
        Artistlabel->setText(QApplication::translate("MainWindow", "Thin Lizzy", nullptr));
        Yearslabel->setText(QApplication::translate("MainWindow", "45", nullptr));
        Genrelabel->setText(QApplication::translate("MainWindow", "Rock", nullptr));
        Timelabel->setText(QApplication::translate("MainWindow", "2:15", nullptr));
        pushButton_18->setText(QString());
        label_11->setText(QString());
        pushButton_24->setText(QString());
        pushButton_25->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_7->setText(QString());
        label_5->setText(QString());
        label_12->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_8->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Default", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Pls at 14-39-59", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Thin Lizzy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
