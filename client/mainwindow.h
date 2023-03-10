#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>
#include <TcpClient.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void positionUpdated(const QGeoPositionInfo &info);

private:
    Ui::MainWindow *ui;
    QGeoPositionInfo info;
    QGeoPositionInfoSource *source;
    TcpClient *_client;
};
#endif // MAINWINDOW_H
