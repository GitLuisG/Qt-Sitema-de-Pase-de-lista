#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}
class QStandardItemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_actionNuevo_archivo_triggered();
    void on_pushButton_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_actionAcerca_De_triggered();
    void on_action_Guarda_triggered();
    void on_action_Abrir_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *nModel;
    void setValueAt(int ix,int jx,const QString &value);
    QString getValueAt(int ix,int jx);
    int Verificador;
    QString Grupo;
};

#endif // MAINWINDOW_H
