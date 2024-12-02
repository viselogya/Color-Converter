#pragma once

#include <QtTest/QtTest>

class MainWindow;

class TestMainWindow : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testUpdateColorRGB();
    void testUpdateColorHSV();
    void testUpdateColorCMYK();
    void testRgbSliderUpdatesColor();
    void testCmykSliderUpdatesColor();

private:
    MainWindow *m_mainWindow;
};
