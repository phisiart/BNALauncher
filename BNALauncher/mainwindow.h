#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QCheckBox>

extern enum OperatingSystem {
    win32,
    linux
} operating_system;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButtonSave_clicked();
    void on_pushButtonLoad_clicked();
    void on_toolButtonCUCorMat_Dir_for_BOLD_clicked();
    void on_toolButtonCUBFW_Lp_input_dir_clicked();
    void on_toolButtonCUBFS_Lp_input_dir_clicked();
    void on_toolButtonBFS_MulCPU_input_dir_clicked();
    void on_toolButtonCp_input_dir_clicked();
    void on_toolButtonDegree_input_dir_clicked();
    void on_toolButtonCUBC_input_dir_clicked();
    void on_toolButtonConvertNII_input_file_clicked();
    void on_toolButtonConvertNII_mask_file_clicked();
    void on_toolButtonL_Modularity_dir_for_csr_clicked();
    void on_toolButtonSaveDir_clicked();
};

#endif // MAINWINDOW_H
