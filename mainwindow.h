#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsRectItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void resizeButtonClicked();

private:
    Ui::MainWindow *ui;
    QGraphicsRectItem *ri;
};

#endif // MAINWINDOW_H
