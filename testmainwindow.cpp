#include "testmainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

void TestMainWindow::initTestCase()
{
    m_mainWindow = new MainWindow();
}

void TestMainWindow::cleanupTestCase()
{
    delete m_mainWindow;
}

void TestMainWindow::testUpdateColorRGB()
{
    m_mainWindow->UpdateColor(MainWindow::ColorModel::RGB, 100, 150, 200);

    QCOMPARE(m_mainWindow->ui->RedSlider->value(), 100);
    QCOMPARE(m_mainWindow->ui->GreenSlider->value(), 150);
    QCOMPARE(m_mainWindow->ui->BlueSlider->value(), 200);

    QCOMPARE(m_mainWindow->ui->RedBox->value(), 100);
    QCOMPARE(m_mainWindow->ui->GreenBox->value(), 150);
    QCOMPARE(m_mainWindow->ui->BlueBox->value(), 200);
}

void TestMainWindow::testUpdateColorHSV()
{
    m_mainWindow->UpdateColor(MainWindow::ColorModel::HSV, 120, 50, 75);

    QCOMPARE(m_mainWindow->ui->HueSlider->value(), 120);
    QCOMPARE(m_mainWindow->ui->SaturationSlider->value(), 50);
    QCOMPARE(m_mainWindow->ui->ValueSlider->value(), 75);

    QCOMPARE(m_mainWindow->ui->HueBox->value(), 120);
    QCOMPARE(m_mainWindow->ui->SaturationBox->value(), 50);
    QCOMPARE(m_mainWindow->ui->ValueBox->value(), 75);
}

void TestMainWindow::testUpdateColorCMYK()
{
    m_mainWindow->UpdateColor(MainWindow::ColorModel::CMYK, 30, 60, 90, 10);

    QCOMPARE(m_mainWindow->ui->CyanSlider->value(), 30);
    QCOMPARE(m_mainWindow->ui->MagentaSlider->value(), 60);
    QCOMPARE(m_mainWindow->ui->YellowSlider->value(), 90);
    QCOMPARE(m_mainWindow->ui->BlackSlider->value(), 10);

    QCOMPARE(m_mainWindow->ui->CyanBox->value(), 30);
    QCOMPARE(m_mainWindow->ui->MagentaBox->value(), 60);
    QCOMPARE(m_mainWindow->ui->YellowBox->value(), 90);
    QCOMPARE(m_mainWindow->ui->BlackBox->value(), 10);
}

void TestMainWindow::testRgbSliderUpdatesColor()
{
    m_mainWindow->ui->RedSlider->setValue(255);
    m_mainWindow->ui->GreenSlider->setValue(0);
    m_mainWindow->ui->BlueSlider->setValue(255);

    QCOMPARE(m_mainWindow->ui->RedBox->value(), 255);
    QCOMPARE(m_mainWindow->ui->GreenBox->value(), 0);
    QCOMPARE(m_mainWindow->ui->BlueBox->value(), 255);
}

void TestMainWindow::testCmykSliderUpdatesColor()
{
    m_mainWindow->ui->CyanSlider->setValue(50);
    m_mainWindow->ui->MagentaSlider->setValue(70);
    m_mainWindow->ui->YellowSlider->setValue(20);
    m_mainWindow->ui->BlackSlider->setValue(10);

    QCOMPARE(m_mainWindow->ui->CyanBox->value(), 50);
    QCOMPARE(m_mainWindow->ui->MagentaBox->value(), 70);
    QCOMPARE(m_mainWindow->ui->YellowBox->value(), 20);
    QCOMPARE(m_mainWindow->ui->BlackBox->value(), 10);
}
