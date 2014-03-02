#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QtGlobal>
#include <sstream>
#include <fstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCreate_clicked()
{
    if (operating_system != win32 && operating_system != linux) {
        std::cout << "Not win32 or linux!" << std::endl;

    }

    std::stringstream script;

    if (ui->checkCUCorMat->isChecked()) {
        script << (operating_system == win32 ? "CUCorMat.exe " : "./CUCormat ") <<
              ui->lineEditCUCorMat_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_mask_threshold->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_average_flag->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_binary_thresholds->text().toStdString() <<
              std::endl;

    }

    if (ui->checkCUBFW_Lp->isChecked()) {
        script << (operating_system == win32 ? "CUBFW_Lp.exe " : "./CUBFW_Lp ") <<
              ui->lineEditCUBFW_Lp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCUBFW_Lp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkCUBFS_Lp->isChecked()) {
        script << (operating_system == win32 ? "CUBFS_Lp.exe " : "./CUBFS_Lp ") <<
              ui->lineEditCUBFS_Lp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCUBFS_Lp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkCP->isChecked()) {
        script << (operating_system == win32 ? "Cp.exe " : "./Cp ") <<
              ui->lineEditCp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkDegree->isChecked()) {
        script << (operating_system == win32 ? "Degree.exe " : "./Degree ") <<
              ui->lineEditDegree_input_dir->text().toStdString() <<
              std::endl;
    }

    if (ui->checkCUBC->isChecked()) {
        script << (operating_system == win32 ? "CUBC.exe " : "./CUBC ") <<
              ui->lineEditCUBC_input_dir->text().toStdString() <<
              std::endl;
    }

    if (ui->checkMaslov->isChecked()) {
        script << (operating_system == win32 ? "Maslov.exe " : "./Maslov ") <<
              ui->lineEditMaslov_input_csr_file->text().toStdString() <<
              std::endl;
    }

    if (ui->checkConvertNII->isChecked()) {
        script << (operating_system == win32 ? "ConvertNII.exe " : "./ConvertNII ") <<
              ui->lineEditConvertNII_input_file->text().toStdString() <<
              ' ' <<
              ui->lineEditConvertNII_mask_nii->text().toStdString() <<
              ' ' <<
              ui->lineEditConvertNII_mask_threshold->text().toStdString() <<
              std::endl;
    }

    std::cout << script.str() << std::endl;

    QString file_name = QFileDialog::getSaveFileName(this,
                                                     "Save as..." ,
                                                     (operating_system == win32 ? "script.bat" : "script.sh"),
                                                     (operating_system == win32 ? "script (*.bat);;Any (*.*)" : "script (*.sh);Any (*.*)"));

    if (!file_name.isNull()) {
        std::ofstream os;
        os.open(file_name.toStdString().c_str());
        os << script.str();
        os.close();
    }
}

void MainWindow::on_toolButtonCUCorMat_input_dir_clicked()
{
    ui->lineEditCUCorMat_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCUBFW_Lp_input_dir_clicked()
{
    ui->lineEditCUBFW_Lp_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCUBFS_Lp_input_dir_clicked()
{
    ui->lineEditCUBFS_Lp_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCp_input_dir_clicked()
{
    ui->lineEditCp_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonDegree_input_dir_clicked()
{
    ui->lineEditDegree_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCUBC_input_dir_clicked()
{
    ui->lineEditCUBC_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonMaslov_input_csr_file_clicked()
{
    ui->lineEditMaslov_input_csr_file->setText(QFileDialog::getOpenFileName(this,
                                                                            "CSR File",
                                                                            "",
                                                                            "CSR (*.csr)"));
}

void MainWindow::on_toolButtonConvertNII_input_file_clicked()
{
    ui->lineEditConvertNII_input_file->setText(QFileDialog::getOpenFileName(this,
                                                                            "CP File",
                                                                            "",
                                                                            "CP (*.cp)"));
}

void MainWindow::on_toolButtonConvertNII_mask_nii_clicked()
{
    ui->lineEditConvertNII_mask_nii->setText(QFileDialog::getOpenFileName(this,
                                                                          "NII File",
                                                                          "",
                                                                          "NII (*.nii)"));
}
