#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QtGlobal>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

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

void MainWindow::on_pushButtonSave_clicked()
{
    if (operating_system != win32 && operating_system != linux) {
        std::cout << "Not win32 or linux!" << std::endl;

    }

    std::stringstream script;

    if (ui->checkCUCorMat->isChecked()) {
        if (ui->lineEditCUCorMat_Dir_for_BOLD->text().isEmpty()
                || ui->lineEditCUCorMat_threshold_for_mask->text().isEmpty()
                || ui->lineEditCUCorMat_to_average->text().isEmpty()
                || ui->lineEditCUCorMat_to_save_cormatrix->text().isEmpty()
                || ui->lineEditCUCorMat_threshold_type->text().isEmpty()
                || ui->lineEditCUCorMat_threshold_for_correlation_coefficient->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\CUCorMat.exe " : "./CUCormat ") <<
              ui->lineEditCUCorMat_Dir_for_BOLD->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_threshold_for_mask->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_to_average->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_to_save_cormatrix->text().toStdString() <<
              ' ' << 
              ui->lineEditCUCorMat_threshold_type->text().toStdString() <<
              ' ' <<
              ui->lineEditCUCorMat_threshold_for_correlation_coefficient->text().toStdString() <<
              std::endl;

    }

    if (ui->checkCUBFW_Lp->isChecked()) {
        if (ui->lineEditCUBFW_Lp_input_dir->text().isEmpty()
                || ui->lineEditCUBFW_Lp_num_of_random_networks->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\CUBFW_Lp.exe " : "./CUBFW_Lp ") <<
              ui->lineEditCUBFW_Lp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCUBFW_Lp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkCUBFS_Lp->isChecked()) {
        if (ui->lineEditCUBFS_Lp_input_dir->text().isEmpty()
                || ui->lineEditCUBFS_Lp_num_of_random_networks->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\CUBFS_Lp.exe " : "./CUBFS_Lp ") <<
              ui->lineEditCUBFS_Lp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCUBFS_Lp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkBFS_MulCPU->isChecked()) {
        if (ui->lineEditBFS_MulCPU_input_dir->text().isEmpty()
                || ui->lineEditBFS_MulCPU_num_of_random_networks->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\BFS_MulCPU.exe " : "./BFS_MulCPU ") <<
              ui->lineEditBFS_MulCPU_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditBFS_MulCPU_num_of_random_networks->text().toStdString() <<
              std::endl;
    }
    
    if (ui->checkCP->isChecked()) {
        if (ui->lineEditCp_input_dir->text().isEmpty()
                || ui->lineEditCp_num_of_random_networks->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\Cp.exe " : "./Cp ") <<
              ui->lineEditCp_input_dir->text().toStdString() <<
              ' ' <<
              ui->lineEditCp_num_of_random_networks->text().toStdString() <<
              std::endl;
    }

    if (ui->checkDegree->isChecked()) {
        if (ui->lineEditDegree_input_dir->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\Degree.exe " : "./Degree ") <<
              ui->lineEditDegree_input_dir->text().toStdString() <<
              std::endl;
    }

    if (ui->checkCUBC->isChecked()) {
        if (ui->lineEditCUBC_input_dir->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\CUBC.exe " : "./CUBC ") <<
              ui->lineEditCUBC_input_dir->text().toStdString() <<
              std::endl;
    }

    if (ui->checkConvertNII->isChecked()) {
        if (ui->lineEditConvertNII_input_file->text().isEmpty()
                || ui->lineEditConvertNII_mask_file->text().isEmpty()
                || ui->lineEditConvertNII_mask_threshold->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\ConvertNII.exe " : "./ConvertNII ") <<
              ui->lineEditConvertNII_input_file->text().toStdString() <<
              ' ' <<
              ui->lineEditConvertNII_mask_file->text().toStdString() <<
              ' ' <<
              ui->lineEditConvertNII_mask_threshold->text().toStdString() <<
              std::endl;
    }

    if (ui->checkL_Modularity->isChecked()) {
        if (ui->lineEditL_Modularity_dir_for_csr->text().isEmpty()
                || ui->lineEditL_Modularity_num_of_random_networks->text().isEmpty()) {
            QMessageBox::information(this, "Error", "Empty parameter(s).", QMessageBox::Ok, QMessageBox::Ok);
            return;
        }
        script << (operating_system == win32 ? ".\\L_Moduarity.exe " : "./L_Moduarity ") <<
              ui->lineEditL_Modularity_dir_for_csr->text().toStdString() <<
              ' ' <<
              ui->lineEditL_Modularity_num_of_random_networks->text().toStdString() <<
              std::endl;
    }
    
    QString file_name = ui->lineEditSaveDir->text();
    std::cout << script.str() << std::endl;
    QFileInfo file_info(file_name);
    if (!file_info.exists()) {
        file_name = QFileDialog::getSaveFileName(this,
                                                         "Save as..." ,
                                                         (operating_system == win32 ? "script.bat" : "script.sh"),
                                                         (operating_system == win32 ? "script (*.bat);;Any (*.*)" : "script (*.sh);Any (*.*)"));

    }
    if (!file_name.isNull()) {
        ui->lineEditSaveDir->setText(file_name);
        std::ofstream os;
        os.open(file_name.toStdString().c_str());
        os << script.str();
        os.close();
    }
    /*if (ui->lineEditSaveDir->text().isEmpty()) {
        on_toolButtonSaveDir_clicked();
    }
    QString file_name = ui->lineEditSaveDir->text();
    if (!file_name.isNull()) {
        file_name += ((operating_system == win32) ? "/script.bat" : "script.sh");
        std::ofstream os;
        os.open(file_name.toStdString().c_str());
        os << script.str();
        os.close();
    }*/
    
}

void MainWindow::on_pushButtonLoad_clicked()
{
    QString file_name = ui->lineEditSaveDir->text();
    // file_name += ((operating_system == win32) ? "/script.bat" : "script.sh");
    QFileInfo file_info(file_name);
    if (!file_info.exists()) {
        file_name = QFileDialog::getOpenFileName(this,
                                                 "Save as..." ,
                                                 (operating_system == win32 ? "script.bat" : "script.sh"),
                                                 (operating_system == win32 ? "script (*.bat);;Any (*.*)" : "script (*.sh);Any (*.*)"));
        ui->lineEditSaveDir->setText(file_name);
    }
    std::ifstream is;
    is.open(file_name.toStdString().c_str());
    std::string line;

    ui->checkCUCorMat->setChecked(false);
    ui->checkCUBFW_Lp->setChecked(false);
    ui->checkCUBFS_Lp->setChecked(false);
    ui->checkBFS_MulCPU->setChecked(false);
    ui->checkCP->setChecked(false);
    ui->checkDegree->setChecked(false);
    ui->checkCUBC->setChecked(false);
    ui->checkConvertNII->setChecked(false);
    ui->checkL_Modularity->setChecked(false);

    while (std::getline(is, line)) {
        //ui->lineEditSaveDir->setText(line.c_str());
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream line_is(line);
        while (line_is >> token) {
            tokens.push_back(token);
        }

        //std::string out;
        //for (size_t i = 0; i < tokens.size(); ++i) {
        //    out += tokens[i] + " ";
        //}
        //ui->lineEditSaveDir->setText(out.c_str());

        if (tokens.empty())
            continue;


        if (tokens[0] == (operating_system == win32 ? ".\\CUCorMat.exe" : "./CUCormat")) {
            if (tokens.size() >= 7) {
                ui->checkCUCorMat->setChecked(true);
                ui->lineEditCUCorMat_Dir_for_BOLD->setText(tokens[1].c_str());
                ui->lineEditCUCorMat_threshold_for_mask->setText(tokens[2].c_str());
                ui->lineEditCUCorMat_to_average->setText(tokens[3].c_str());
                ui->lineEditCUCorMat_to_save_cormatrix->setText(tokens[4].c_str());
                ui->lineEditCUCorMat_threshold_type->setText(tokens[5].c_str());
                std::string token6;
                for (size_t i = 6; i < tokens.size(); ++i)
                    token6 += tokens[i] + " ";
                ui->lineEditCUCorMat_threshold_for_correlation_coefficient->setText(token6.c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\CUBFW_Lp.exe" : "./CUBFW_Lp")) {
            if (tokens.size() == 3) {
                ui->checkCUBFW_Lp->setChecked(true);
                ui->lineEditCUBFW_Lp_input_dir->setText(tokens[1].c_str());
                ui->lineEditCUBFW_Lp_num_of_random_networks->setText(tokens[2].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\CUBFS_Lp.exe" : "./CUBFS_Lp")) {
            if (tokens.size() == 3) {
                ui->checkCUBFS_Lp->setChecked(true);
                ui->lineEditCUBFS_Lp_input_dir->setText(tokens[1].c_str());
                ui->lineEditCUBFS_Lp_num_of_random_networks->setText(tokens[2].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\BFS_MulCPU.exe" : "./BFS_MulCPU")) {
            if (tokens.size() == 3) {
                ui->checkBFS_MulCPU->setChecked(true);
                ui->lineEditBFS_MulCPU_input_dir->setText(tokens[1].c_str());
                ui->lineEditBFS_MulCPU_num_of_random_networks->setText(tokens[2].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\Cp.exe" : "./Cp")) {
            if (tokens.size() == 3) {
                ui->checkCP->setChecked(true);
                ui->lineEditCp_input_dir->setText(tokens[1].c_str());
                ui->lineEditCp_num_of_random_networks->setText(tokens[2].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\Degree.exe" : "./Degree")) {
            if (tokens.size() == 2) {
                ui->checkDegree->setChecked(true);
                ui->lineEditDegree_input_dir->setText(tokens[1].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\CUBC.exe" : "./CUBC")) {
            if (tokens.size() == 2) {
                ui->checkCUBC->setChecked(true);
                ui->lineEditCUBC_input_dir->setText(tokens[1].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\ConvertNII.exe" : "./ConvertNII")) {
            if (tokens.size() == 4) {
                ui->checkConvertNII->setChecked(true);
                ui->lineEditConvertNII_input_file->setText(tokens[1].c_str());
                ui->lineEditConvertNII_mask_file->setText(tokens[2].c_str());
                ui->lineEditConvertNII_mask_threshold->setText(tokens[3].c_str());
            }
        } else if (tokens[0] == (operating_system == win32 ? ".\\L_Moduarity.exe" : "./L_Moduarity")) {
            if (tokens.size() == 3) {
                ui->checkL_Modularity->setChecked(true);
                ui->lineEditL_Modularity_dir_for_csr->setText(tokens[1].c_str());
                ui->lineEditL_Modularity_num_of_random_networks->setText(tokens[2].c_str());
            }
        }

        // ui->lineEditSaveDir->setText(QString(token.c_str()));
    }

    is.close();

}

void MainWindow::on_toolButtonCUCorMat_Dir_for_BOLD_clicked()
{
    ui->lineEditCUCorMat_Dir_for_BOLD->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCUBFW_Lp_input_dir_clicked()
{
    ui->lineEditCUBFW_Lp_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonCUBFS_Lp_input_dir_clicked()
{
    ui->lineEditCUBFS_Lp_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonBFS_MulCPU_input_dir_clicked()
{
    ui->lineEditBFS_MulCPU_input_dir->setText(QFileDialog::getExistingDirectory(this, "Directory"));
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

void MainWindow::on_toolButtonConvertNII_input_file_clicked()
{
    ui->lineEditConvertNII_input_file->setText(QFileDialog::getOpenFileName(this,
                                                                            "File to convert",
                                                                            "",
                                                                            "CP (*.cp); EFF (*.eff); DEG (*.deg); BC (*.bc); Any (*.*)"));
}

void MainWindow::on_toolButtonConvertNII_mask_file_clicked()
{
    ui->lineEditConvertNII_mask_file->setText(QFileDialog::getOpenFileName(this,
                                                                          "NII File",
                                                                          "",
                                                                          "NII (*.nii)"));
}

void MainWindow::on_toolButtonL_Modularity_dir_for_csr_clicked()
{
    ui->lineEditL_Modularity_dir_for_csr->setText(QFileDialog::getExistingDirectory(this, "Directory"));
}

void MainWindow::on_toolButtonSaveDir_clicked()
{
    ui->lineEditSaveDir->setText(QFileDialog::getOpenFileName(this,
                                                              "Open script..." ,
                                                              (operating_system == win32 ? "*.bat" : "*.sh"),
                                                              (operating_system == win32 ? "script (*.bat);;Any (*.*)" : "script (*.sh);Any (*.*)")));
}
