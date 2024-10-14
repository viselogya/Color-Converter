#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QColorDialog>
#include <QPalette>
#include <QTextEdit>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->RedSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);
    connect(ui->GreenSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);
    connect(ui->BlueSlider, &QSlider::valueChanged, this, &MainWindow::on_rgbSlider_valueChanged);

    connect(ui->RedBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);
    connect(ui->GreenBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);
    connect(ui->BlueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_rgbSpinBox_valueChanged);

    connect(ui->HueSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);
    connect(ui->SaturationSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);
    connect(ui->ValueSlider, &QSlider::valueChanged, this, &MainWindow::on_hsvSlider_valueChanged);

    connect(ui->HueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);
    connect(ui->SaturationBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);
    connect(ui->ValueBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_hsvSpinBox_valueChanged);

    connect(ui->CyanSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->MagentaSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->YellowSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);
    connect(ui->BlackSlider, &QSlider::valueChanged, this, &MainWindow::on_cmykSlider_valueChanged);

    connect(ui->CyanBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->MagentaBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->YellowBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
    connect(ui->BlackBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_cmykSpinBox_valueChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QColor ColorValue = QColorDialog::getColor(Qt::white, this, tr("Select the color"));
    int r, g, b;
    ColorValue.getRgb(&r, &g, &b);
    UpdateColor(ColorModel::RGB, r, g, b);
}

void MainWindow::UpdateColor(ColorModel color_model, int first_color, int second_color,
                             int third_color, int fourth_color) {
    if (isUpdating) return;
    isUpdating = true;

    QColor color;
    switch(color_model)
    {
    case ColorModel::RGB:
        color.setRgb(first_color, second_color, third_color);
        break;
    case ColorModel::CMYK:
        color.setCmyk(first_color, second_color, third_color, fourth_color);
        break;
    case ColorModel::HSV:
        color.setHsv(first_color, second_color, third_color);
        break;
    }
    ui->colorWidget->setStyleSheet(QString("background-color: %1").arg(color.name()));
    int r, g, b, h, s, v, c, m, y, k;
    color.getRgb(&r, &g, &b);
    color.getHsv(&h, &s, &v);
    color.getCmyk(&c, &m, &y, &k);
    change_RGB_stats(r, g, b);
    change_HSV_stats(h, s, v);
    change_CMYK_stats(c, m, y, k);
    isUpdating = false;
}

void MainWindow::change_HSV_stats(int h, int s, int v)
{
    ui->HueSlider->setValue(h);
    ui->SaturationSlider->setValue(s);
    ui->ValueSlider->setValue(v);

    ui->HueBox->setValue(h);
    ui->SaturationBox->setValue(s);
    ui->ValueBox->setValue(v);
}


void MainWindow::change_CMYK_stats(int c, int m, int y, int k)
{
    ui->CyanSlider->setValue(c);
    ui->MagentaSlider->setValue(m);
    ui->YellowSlider->setValue(y);
    ui->BlackSlider->setValue(k);

    ui->CyanBox->setValue(c);
    ui->MagentaBox->setValue(m);
    ui->YellowBox->setValue(y);
    ui->BlackBox->setValue(k);
}

void MainWindow::change_RGB_stats(int r, int g, int b)
{
    ui->RedSlider->setValue(r);
    ui->GreenSlider->setValue(g);
    ui->BlueSlider->setValue(b);

    ui->RedBox->setValue(r);
    ui->GreenBox->setValue(g);
    ui->BlueBox->setValue(b);
}

void MainWindow::on_rgbSlider_valueChanged(int)
{
    int r = ui->RedSlider->value();
    int g = ui->GreenSlider->value();
    int b = ui->BlueSlider->value();
    UpdateColor(ColorModel::RGB, r, g, b);
}

void MainWindow::on_rgbSpinBox_valueChanged(int )
{
    int r = ui->RedBox->value();
    int g = ui->GreenBox->value();
    int b = ui->BlueBox->value();
    UpdateColor(ColorModel::RGB, r, g, b);
}
void MainWindow::on_hsvSpinBox_valueChanged(int )
{
    int h = ui->HueBox->value();
    int s = ui->SaturationBox->value();
    int v = ui->ValueBox->value();
    UpdateColor(ColorModel::HSV, h, s, v);
}

void MainWindow::on_hsvSlider_valueChanged(int )
{
    int h = ui->HueSlider->value();
    int s = ui->SaturationSlider->value();
    int v = ui->ValueSlider->value();
    UpdateColor(ColorModel::HSV, h, s, v);
}

void MainWindow::on_cmykSlider_valueChanged(int )
{
    int c = ui->CyanSlider->value();
    int m = ui->MagentaSlider->value();
    int y = ui->YellowSlider->value();
    int k = ui->BlackSlider->value();
    UpdateColor(ColorModel::CMYK, c, m, y, k);
}

void MainWindow::on_cmykSpinBox_valueChanged(int )
{
    int c = ui->CyanBox->value();
    int m = ui->MagentaBox->value();
    int y = ui->YellowBox->value();
    int k = ui->BlackBox->value();
    UpdateColor(ColorModel::CMYK, c, m, y, k);
}
