#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    friend class TestMainWindow;

    enum class ColorModel {
        RGB, CMYK, HSV
    };

    void UpdateColor(ColorModel color_model, int first_color, int second_color,
                     int third_color, int fourth_color = -1);

public slots:
    void on_pushButton_clicked();
    void on_rgbSlider_valueChanged(int);
    void on_hsvSlider_valueChanged(int);
    void on_cmykSlider_valueChanged(int);
    void on_rgbSpinBox_valueChanged(int);
    void on_hsvSpinBox_valueChanged(int);
    void on_cmykSpinBox_valueChanged(int);

private:

    void change_CMYK_stats(int c, int m, int y, int k);
    void change_HSV_stats(int h, int s, int v);
    void change_RGB_stats(int r, int g, int b);
    bool isUpdating = false;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

