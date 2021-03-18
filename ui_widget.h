/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *temperature;
    QLabel *weatherlabel;
    QLabel *date;
    QLabel *sunrise;
    QFrame *line_3;
    QLabel *wind;
    QFrame *line_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *queryLabel;
    QLineEdit *query;
    QPushButton *queryButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *feelsLikeTemp;
    QLabel *minTemp;
    QLabel *maxTemp;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *rise;
    QLabel *sunriseValue;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *visibility;
    QLabel *visibilityValue;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QLabel *pressure;
    QLabel *pressurevalue;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *humidity;
    QLabel *humidityValue;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *location;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *set;
    QLabel *sunsetValue;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *windSpeed;
    QLabel *windSpeedValue;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *windDir;
    QLabel *windDirValue;
    QLabel *celciusTemp;
    QLabel *feelsLikeTempValue;
    QLabel *celciusFeelLike;
    QLabel *maxTempValue;
    QLabel *celciusMaxTemp;
    QLabel *minTempValue;
    QLabel *celciusMinTemp;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(588, 751);
        Widget->setMinimumSize(QSize(588, 751));
        Widget->setMaximumSize(QSize(588, 751));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("weather");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);\n"
"background-color: rgb(0, 170, 127);"));
        temperature = new QLabel(Widget);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setGeometry(QRect(220, 200, 101, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        temperature->setFont(font);
        temperature->setCursor(QCursor(Qt::PointingHandCursor));
        temperature->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        weatherlabel = new QLabel(Widget);
        weatherlabel->setObjectName(QString::fromUtf8("weatherlabel"));
        weatherlabel->setGeometry(QRect(0, 280, 581, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        weatherlabel->setFont(font1);
        weatherlabel->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        weatherlabel->setAlignment(Qt::AlignCenter);
        date = new QLabel(Widget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(0, 160, 591, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font2.setPointSize(12);
        date->setFont(font2);
        date->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        date->setAlignment(Qt::AlignCenter);
        sunrise = new QLabel(Widget);
        sunrise->setObjectName(QString::fromUtf8("sunrise"));
        sunrise->setGeometry(QRect(60, 570, 161, 21));
        sunrise->setFont(font2);
        sunrise->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(60, 650, 151, 21));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        line_3->setFont(font3);
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        wind = new QLabel(Widget);
        wind->setObjectName(QString::fromUtf8("wind"));
        wind->setGeometry(QRect(320, 570, 61, 21));
        wind->setFont(font2);
        wind->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        line_4 = new QFrame(Widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(320, 650, 211, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 571, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        queryLabel = new QLabel(layoutWidget);
        queryLabel->setObjectName(QString::fromUtf8("queryLabel"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        queryLabel->setFont(font4);
        queryLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(queryLabel);

        query = new QLineEdit(layoutWidget);
        query->setObjectName(QString::fromUtf8("query"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font5.setPointSize(11);
        query->setFont(font5);
        query->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(query);

        queryButton = new QPushButton(layoutWidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setFont(font5);
        queryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));

        horizontalLayout->addWidget(queryButton);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 440, 521, 47));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        feelsLikeTemp = new QLabel(layoutWidget1);
        feelsLikeTemp->setObjectName(QString::fromUtf8("feelsLikeTemp"));
        feelsLikeTemp->setFont(font2);
        feelsLikeTemp->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        feelsLikeTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(feelsLikeTemp);

        minTemp = new QLabel(layoutWidget1);
        minTemp->setObjectName(QString::fromUtf8("minTemp"));
        minTemp->setFont(font5);
        minTemp->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        minTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(minTemp);

        maxTemp = new QLabel(layoutWidget1);
        maxTemp->setObjectName(QString::fromUtf8("maxTemp"));
        maxTemp->setFont(font5);
        maxTemp->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        maxTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(maxTemp);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 620, 151, 30));
        layoutWidget2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        rise = new QLabel(layoutWidget2);
        rise->setObjectName(QString::fromUtf8("rise"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        rise->setFont(font6);
        rise->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(rise);

        sunriseValue = new QLabel(layoutWidget2);
        sunriseValue->setObjectName(QString::fromUtf8("sunriseValue"));
        sunriseValue->setFont(font2);
        sunriseValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        sunriseValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(sunriseValue);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 350, 571, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        visibility = new QLabel(layoutWidget3);
        visibility->setObjectName(QString::fromUtf8("visibility"));
        visibility->setFont(font2);
        visibility->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        visibility->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(visibility);

        visibilityValue = new QLabel(layoutWidget3);
        visibilityValue->setObjectName(QString::fromUtf8("visibilityValue"));
        visibilityValue->setFont(font2);
        visibilityValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        visibilityValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(visibilityValue);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        line = new QFrame(layoutWidget3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFont(font3);
        line->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pressure = new QLabel(layoutWidget3);
        pressure->setObjectName(QString::fromUtf8("pressure"));
        pressure->setFont(font2);
        pressure->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pressure->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(pressure);

        pressurevalue = new QLabel(layoutWidget3);
        pressurevalue->setObjectName(QString::fromUtf8("pressurevalue"));
        pressurevalue->setFont(font2);
        pressurevalue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pressurevalue->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(pressurevalue);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        line_2 = new QFrame(layoutWidget3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        line_2->setFont(font7);
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        humidity = new QLabel(layoutWidget3);
        humidity->setObjectName(QString::fromUtf8("humidity"));
        humidity->setFont(font2);
        humidity->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        humidity->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(humidity);

        humidityValue = new QLabel(layoutWidget3);
        humidityValue->setObjectName(QString::fromUtf8("humidityValue"));
        humidityValue->setFont(font2);
        humidityValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        humidityValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(humidityValue);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        layoutWidget4 = new QWidget(Widget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 80, 591, 83));
        QFont font8;
        font8.setPointSize(36);
        font8.setBold(false);
        font8.setWeight(50);
        layoutWidget4->setFont(font8);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        location = new QLabel(layoutWidget4);
        location->setObjectName(QString::fromUtf8("location"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font9.setPointSize(36);
        font9.setBold(false);
        font9.setWeight(50);
        location->setFont(font9);
        location->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        location->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(location);

        layoutWidget5 = new QWidget(Widget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(60, 670, 151, 30));
        layoutWidget5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        set = new QLabel(layoutWidget5);
        set->setObjectName(QString::fromUtf8("set"));
        set->setFont(font2);
        set->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(set);

        sunsetValue = new QLabel(layoutWidget5);
        sunsetValue->setObjectName(QString::fromUtf8("sunsetValue"));
        sunsetValue->setFont(font2);
        sunsetValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        sunsetValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(sunsetValue);

        layoutWidget6 = new QWidget(Widget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(320, 670, 211, 30));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        windSpeed = new QLabel(layoutWidget6);
        windSpeed->setObjectName(QString::fromUtf8("windSpeed"));
        windSpeed->setFont(font2);
        windSpeed->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(windSpeed);

        windSpeedValue = new QLabel(layoutWidget6);
        windSpeedValue->setObjectName(QString::fromUtf8("windSpeedValue"));
        windSpeedValue->setFont(font2);
        windSpeedValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        windSpeedValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(windSpeedValue);

        layoutWidget7 = new QWidget(Widget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(320, 620, 211, 30));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        windDir = new QLabel(layoutWidget7);
        windDir->setObjectName(QString::fromUtf8("windDir"));
        windDir->setFont(font2);
        windDir->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(windDir);

        windDirValue = new QLabel(layoutWidget7);
        windDirValue->setObjectName(QString::fromUtf8("windDirValue"));
        windDirValue->setFont(font2);
        windDirValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        windDirValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(windDirValue);

        celciusTemp = new QLabel(Widget);
        celciusTemp->setObjectName(QString::fromUtf8("celciusTemp"));
        celciusTemp->setGeometry(QRect(320, 200, 51, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font10.setPointSize(16);
        font10.setBold(true);
        font10.setWeight(75);
        celciusTemp->setFont(font10);
        celciusTemp->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        feelsLikeTempValue = new QLabel(Widget);
        feelsLikeTempValue->setObjectName(QString::fromUtf8("feelsLikeTempValue"));
        feelsLikeTempValue->setGeometry(QRect(80, 494, 41, 31));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font11.setPointSize(20);
        feelsLikeTempValue->setFont(font11);
        feelsLikeTempValue->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        feelsLikeTempValue->setAlignment(Qt::AlignCenter);
        celciusFeelLike = new QLabel(Widget);
        celciusFeelLike->setObjectName(QString::fromUtf8("celciusFeelLike"));
        celciusFeelLike->setGeometry(QRect(120, 490, 21, 16));
        celciusFeelLike->setFont(font4);
        celciusFeelLike->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        maxTempValue = new QLabel(Widget);
        maxTempValue->setObjectName(QString::fromUtf8("maxTempValue"));
        maxTempValue->setGeometry(QRect(430, 490, 41, 31));
        maxTempValue->setFont(font11);
        maxTempValue->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        maxTempValue->setAlignment(Qt::AlignCenter);
        celciusMaxTemp = new QLabel(Widget);
        celciusMaxTemp->setObjectName(QString::fromUtf8("celciusMaxTemp"));
        celciusMaxTemp->setGeometry(QRect(470, 490, 21, 16));
        celciusMaxTemp->setFont(font4);
        celciusMaxTemp->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        minTempValue = new QLabel(Widget);
        minTempValue->setObjectName(QString::fromUtf8("minTempValue"));
        minTempValue->setGeometry(QRect(260, 490, 41, 31));
        minTempValue->setFont(font11);
        minTempValue->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));
        minTempValue->setAlignment(Qt::AlignCenter);
        celciusMinTemp = new QLabel(Widget);
        celciusMinTemp->setObjectName(QString::fromUtf8("celciusMinTemp"));
        celciusMinTemp->setGeometry(QRect(300, 490, 21, 16));
        celciusMinTemp->setFont(font4);
        celciusMinTemp->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 255);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "WeatherApp", nullptr));
        temperature->setText(QApplication::translate("Widget", "0", nullptr));
        weatherlabel->setText(QApplication::translate("Widget", "Partly Sunny", nullptr));
        date->setText(QString());
        sunrise->setText(QApplication::translate("Widget", "SUNRISE/SUNSET", nullptr));
        wind->setText(QApplication::translate("Widget", "WIND", nullptr));
        queryLabel->setText(QApplication::translate("Widget", "Enter City Name", nullptr));
        queryButton->setText(QApplication::translate("Widget", "Find", nullptr));
        feelsLikeTemp->setText(QApplication::translate("Widget", "FEELS LIKE", nullptr));
        minTemp->setText(QApplication::translate("Widget", "MIN TEMP", nullptr));
        maxTemp->setText(QApplication::translate("Widget", "MAX TEMP", nullptr));
        rise->setText(QApplication::translate("Widget", "Sunrise", nullptr));
        sunriseValue->setText(QApplication::translate("Widget", "00:00", nullptr));
        visibility->setText(QApplication::translate("Widget", "Visibility", nullptr));
        visibilityValue->setText(QString());
        pressure->setText(QApplication::translate("Widget", "Pressure", nullptr));
        pressurevalue->setText(QString());
        humidity->setText(QApplication::translate("Widget", "Humidity", nullptr));
        humidityValue->setText(QString());
        location->setText(QApplication::translate("Widget", "WeatherApp", nullptr));
        set->setText(QApplication::translate("Widget", "Sunset", nullptr));
        sunsetValue->setText(QApplication::translate("Widget", "00:00", nullptr));
        windSpeed->setText(QApplication::translate("Widget", "Wind Speed", nullptr));
        windSpeedValue->setText(QApplication::translate("Widget", "0 km/h", nullptr));
        windDir->setText(QApplication::translate("Widget", "Wind Direc", nullptr));
        windDirValue->setText(QApplication::translate("Widget", "North", nullptr));
        celciusTemp->setText(QApplication::translate("Widget", "\302\260C", nullptr));
        feelsLikeTempValue->setText(QApplication::translate("Widget", "0", nullptr));
        celciusFeelLike->setText(QApplication::translate("Widget", "\302\260C", nullptr));
        maxTempValue->setText(QApplication::translate("Widget", "0", nullptr));
        celciusMaxTemp->setText(QApplication::translate("Widget", "\302\260C", nullptr));
        minTempValue->setText(QApplication::translate("Widget", "0", nullptr));
        celciusMinTemp->setText(QApplication::translate("Widget", "\302\260C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
