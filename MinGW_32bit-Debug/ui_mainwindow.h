/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkCUCorMat;
    QCheckBox *checkCUBFW_Lp;
    QCheckBox *checkCUBFS_Lp;
    QCheckBox *checkCP;
    QCheckBox *checkDegree;
    QCheckBox *checkCUBC;
    QCheckBox *checkMaslov;
    QCheckBox *checkConvertNII;
    QLineEdit *lineEditCUCorMat_input_dir;
    QLabel *labelCUCorMat_input_dir;
    QLineEdit *lineEditCUCorMat_mask_threshold;
    QLabel *labelCUCorMat_mask_threshold;
    QLineEdit *lineEditCUCorMat_average_flag;
    QLabel *labelCUCorMat_average_flag;
    QLineEdit *lineEditCUCorMat_binary_thresholds;
    QLabel *labelCUCorMat_binary_thresholds;
    QLabel *labelCUBFW_Lp_input_dir;
    QLineEdit *lineEditCUBFW_Lp_input_dir;
    QLineEdit *lineEditCUBFW_Lp_num_of_random_networks;
    QLineEdit *lineEditCUBFS_Lp_input_dir;
    QLabel *labelCUBFW_Lp_num_of_random_networks;
    QLabel *labelCUBFS_Lp_num_of_random_networks;
    QLineEdit *lineEditCUBFS_Lp_num_of_random_networks;
    QLabel *labelCUBFS_Lp_input_dir;
    QLabel *labelCp_input_dir;
    QLineEdit *lineEditCp_input_dir;
    QLabel *labelCp_num_of_random_networks;
    QLineEdit *lineEditCp_num_of_random_networks;
    QLabel *labelDegree_input_dir;
    QLineEdit *lineEditDegree_input_dir;
    QLabel *labelCUBC_input_dir;
    QLineEdit *lineEditCUBC_input_dir;
    QLabel *labelMaslov_input_csr_file;
    QLineEdit *lineEditMaslov_input_csr_file;
    QLabel *labelConvertNII_input_file;
    QLineEdit *lineEditConvertNII_input_file;
    QLineEdit *lineEditConvertNII_mask_nii;
    QLabel *labelConvertNII_mask_nii;
    QLineEdit *lineEditConvertNII_mask_threshold;
    QLabel *labelConvertNII_mask_threshold;
    QPushButton *pushButtonCreate;
    QToolButton *toolButtonCUCorMat_input_dir;
    QToolButton *toolButtonCUBFW_Lp_input_dir;
    QToolButton *toolButtonCUBFS_Lp_input_dir;
    QToolButton *toolButtonCp_input_dir;
    QToolButton *toolButtonDegree_input_dir;
    QToolButton *toolButtonCUBC_input_dir;
    QToolButton *toolButtonMaslov_input_csr_file;
    QToolButton *toolButtonConvertNII_input_file;
    QToolButton *toolButtonConvertNII_mask_nii;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(715, 911);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkCUCorMat = new QCheckBox(centralWidget);
        checkCUCorMat->setObjectName(QStringLiteral("checkCUCorMat"));
        checkCUCorMat->setGeometry(QRect(10, 10, 91, 17));
        checkCUBFW_Lp = new QCheckBox(centralWidget);
        checkCUBFW_Lp->setObjectName(QStringLiteral("checkCUBFW_Lp"));
        checkCUBFW_Lp->setGeometry(QRect(10, 170, 81, 17));
        checkCUBFS_Lp = new QCheckBox(centralWidget);
        checkCUBFS_Lp->setObjectName(QStringLiteral("checkCUBFS_Lp"));
        checkCUBFS_Lp->setGeometry(QRect(10, 280, 81, 17));
        checkCP = new QCheckBox(centralWidget);
        checkCP->setObjectName(QStringLiteral("checkCP"));
        checkCP->setGeometry(QRect(10, 390, 70, 17));
        checkDegree = new QCheckBox(centralWidget);
        checkDegree->setObjectName(QStringLiteral("checkDegree"));
        checkDegree->setGeometry(QRect(10, 490, 70, 17));
        checkCUBC = new QCheckBox(centralWidget);
        checkCUBC->setObjectName(QStringLiteral("checkCUBC"));
        checkCUBC->setGeometry(QRect(10, 560, 70, 17));
        checkMaslov = new QCheckBox(centralWidget);
        checkMaslov->setObjectName(QStringLiteral("checkMaslov"));
        checkMaslov->setGeometry(QRect(10, 630, 70, 17));
        checkConvertNII = new QCheckBox(centralWidget);
        checkConvertNII->setObjectName(QStringLiteral("checkConvertNII"));
        checkConvertNII->setGeometry(QRect(10, 710, 81, 17));
        lineEditCUCorMat_input_dir = new QLineEdit(centralWidget);
        lineEditCUCorMat_input_dir->setObjectName(QStringLiteral("lineEditCUCorMat_input_dir"));
        lineEditCUCorMat_input_dir->setGeometry(QRect(240, 40, 421, 20));
        lineEditCUCorMat_input_dir->setClearButtonEnabled(false);
        labelCUCorMat_input_dir = new QLabel(centralWidget);
        labelCUCorMat_input_dir->setObjectName(QStringLiteral("labelCUCorMat_input_dir"));
        labelCUCorMat_input_dir->setGeometry(QRect(100, 40, 51, 16));
        lineEditCUCorMat_mask_threshold = new QLineEdit(centralWidget);
        lineEditCUCorMat_mask_threshold->setObjectName(QStringLiteral("lineEditCUCorMat_mask_threshold"));
        lineEditCUCorMat_mask_threshold->setGeometry(QRect(240, 70, 421, 20));
        labelCUCorMat_mask_threshold = new QLabel(centralWidget);
        labelCUCorMat_mask_threshold->setObjectName(QStringLiteral("labelCUCorMat_mask_threshold"));
        labelCUCorMat_mask_threshold->setGeometry(QRect(100, 70, 81, 16));
        lineEditCUCorMat_average_flag = new QLineEdit(centralWidget);
        lineEditCUCorMat_average_flag->setObjectName(QStringLiteral("lineEditCUCorMat_average_flag"));
        lineEditCUCorMat_average_flag->setGeometry(QRect(240, 100, 421, 20));
        labelCUCorMat_average_flag = new QLabel(centralWidget);
        labelCUCorMat_average_flag->setObjectName(QStringLiteral("labelCUCorMat_average_flag"));
        labelCUCorMat_average_flag->setGeometry(QRect(100, 100, 71, 16));
        lineEditCUCorMat_binary_thresholds = new QLineEdit(centralWidget);
        lineEditCUCorMat_binary_thresholds->setObjectName(QStringLiteral("lineEditCUCorMat_binary_thresholds"));
        lineEditCUCorMat_binary_thresholds->setGeometry(QRect(240, 130, 421, 20));
        labelCUCorMat_binary_thresholds = new QLabel(centralWidget);
        labelCUCorMat_binary_thresholds->setObjectName(QStringLiteral("labelCUCorMat_binary_thresholds"));
        labelCUCorMat_binary_thresholds->setGeometry(QRect(100, 130, 101, 16));
        labelCUBFW_Lp_input_dir = new QLabel(centralWidget);
        labelCUBFW_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFW_Lp_input_dir"));
        labelCUBFW_Lp_input_dir->setGeometry(QRect(100, 210, 51, 16));
        lineEditCUBFW_Lp_input_dir = new QLineEdit(centralWidget);
        lineEditCUBFW_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFW_Lp_input_dir"));
        lineEditCUBFW_Lp_input_dir->setGeometry(QRect(240, 210, 421, 20));
        lineEditCUBFW_Lp_num_of_random_networks = new QLineEdit(centralWidget);
        lineEditCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFW_Lp_num_of_random_networks"));
        lineEditCUBFW_Lp_num_of_random_networks->setGeometry(QRect(240, 240, 421, 20));
        lineEditCUBFS_Lp_input_dir = new QLineEdit(centralWidget);
        lineEditCUBFS_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFS_Lp_input_dir"));
        lineEditCUBFS_Lp_input_dir->setGeometry(QRect(240, 320, 421, 20));
        labelCUBFW_Lp_num_of_random_networks = new QLabel(centralWidget);
        labelCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFW_Lp_num_of_random_networks"));
        labelCUBFW_Lp_num_of_random_networks->setGeometry(QRect(100, 240, 131, 16));
        labelCUBFS_Lp_num_of_random_networks = new QLabel(centralWidget);
        labelCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFS_Lp_num_of_random_networks"));
        labelCUBFS_Lp_num_of_random_networks->setGeometry(QRect(100, 350, 131, 16));
        lineEditCUBFS_Lp_num_of_random_networks = new QLineEdit(centralWidget);
        lineEditCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFS_Lp_num_of_random_networks"));
        lineEditCUBFS_Lp_num_of_random_networks->setGeometry(QRect(240, 350, 421, 20));
        labelCUBFS_Lp_input_dir = new QLabel(centralWidget);
        labelCUBFS_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFS_Lp_input_dir"));
        labelCUBFS_Lp_input_dir->setGeometry(QRect(100, 320, 51, 16));
        labelCp_input_dir = new QLabel(centralWidget);
        labelCp_input_dir->setObjectName(QStringLiteral("labelCp_input_dir"));
        labelCp_input_dir->setGeometry(QRect(100, 420, 51, 16));
        lineEditCp_input_dir = new QLineEdit(centralWidget);
        lineEditCp_input_dir->setObjectName(QStringLiteral("lineEditCp_input_dir"));
        lineEditCp_input_dir->setGeometry(QRect(240, 420, 421, 20));
        labelCp_num_of_random_networks = new QLabel(centralWidget);
        labelCp_num_of_random_networks->setObjectName(QStringLiteral("labelCp_num_of_random_networks"));
        labelCp_num_of_random_networks->setGeometry(QRect(100, 450, 131, 16));
        lineEditCp_num_of_random_networks = new QLineEdit(centralWidget);
        lineEditCp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCp_num_of_random_networks"));
        lineEditCp_num_of_random_networks->setGeometry(QRect(240, 450, 421, 20));
        labelDegree_input_dir = new QLabel(centralWidget);
        labelDegree_input_dir->setObjectName(QStringLiteral("labelDegree_input_dir"));
        labelDegree_input_dir->setGeometry(QRect(100, 520, 51, 16));
        lineEditDegree_input_dir = new QLineEdit(centralWidget);
        lineEditDegree_input_dir->setObjectName(QStringLiteral("lineEditDegree_input_dir"));
        lineEditDegree_input_dir->setGeometry(QRect(240, 520, 421, 20));
        labelCUBC_input_dir = new QLabel(centralWidget);
        labelCUBC_input_dir->setObjectName(QStringLiteral("labelCUBC_input_dir"));
        labelCUBC_input_dir->setGeometry(QRect(100, 590, 51, 16));
        lineEditCUBC_input_dir = new QLineEdit(centralWidget);
        lineEditCUBC_input_dir->setObjectName(QStringLiteral("lineEditCUBC_input_dir"));
        lineEditCUBC_input_dir->setGeometry(QRect(240, 590, 421, 20));
        labelMaslov_input_csr_file = new QLabel(centralWidget);
        labelMaslov_input_csr_file->setObjectName(QStringLiteral("labelMaslov_input_csr_file"));
        labelMaslov_input_csr_file->setGeometry(QRect(100, 670, 71, 16));
        lineEditMaslov_input_csr_file = new QLineEdit(centralWidget);
        lineEditMaslov_input_csr_file->setObjectName(QStringLiteral("lineEditMaslov_input_csr_file"));
        lineEditMaslov_input_csr_file->setGeometry(QRect(240, 670, 421, 20));
        labelConvertNII_input_file = new QLabel(centralWidget);
        labelConvertNII_input_file->setObjectName(QStringLiteral("labelConvertNII_input_file"));
        labelConvertNII_input_file->setGeometry(QRect(100, 740, 71, 16));
        lineEditConvertNII_input_file = new QLineEdit(centralWidget);
        lineEditConvertNII_input_file->setObjectName(QStringLiteral("lineEditConvertNII_input_file"));
        lineEditConvertNII_input_file->setGeometry(QRect(240, 740, 421, 20));
        lineEditConvertNII_mask_nii = new QLineEdit(centralWidget);
        lineEditConvertNII_mask_nii->setObjectName(QStringLiteral("lineEditConvertNII_mask_nii"));
        lineEditConvertNII_mask_nii->setGeometry(QRect(240, 770, 421, 20));
        labelConvertNII_mask_nii = new QLabel(centralWidget);
        labelConvertNII_mask_nii->setObjectName(QStringLiteral("labelConvertNII_mask_nii"));
        labelConvertNII_mask_nii->setGeometry(QRect(100, 770, 71, 16));
        lineEditConvertNII_mask_threshold = new QLineEdit(centralWidget);
        lineEditConvertNII_mask_threshold->setObjectName(QStringLiteral("lineEditConvertNII_mask_threshold"));
        lineEditConvertNII_mask_threshold->setGeometry(QRect(240, 800, 421, 20));
        labelConvertNII_mask_threshold = new QLabel(centralWidget);
        labelConvertNII_mask_threshold->setObjectName(QStringLiteral("labelConvertNII_mask_threshold"));
        labelConvertNII_mask_threshold->setGeometry(QRect(100, 800, 81, 16));
        pushButtonCreate = new QPushButton(centralWidget);
        pushButtonCreate->setObjectName(QStringLiteral("pushButtonCreate"));
        pushButtonCreate->setGeometry(QRect(600, 830, 91, 23));
        toolButtonCUCorMat_input_dir = new QToolButton(centralWidget);
        toolButtonCUCorMat_input_dir->setObjectName(QStringLiteral("toolButtonCUCorMat_input_dir"));
        toolButtonCUCorMat_input_dir->setGeometry(QRect(670, 40, 25, 19));
        toolButtonCUBFW_Lp_input_dir = new QToolButton(centralWidget);
        toolButtonCUBFW_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFW_Lp_input_dir"));
        toolButtonCUBFW_Lp_input_dir->setGeometry(QRect(670, 210, 25, 19));
        toolButtonCUBFS_Lp_input_dir = new QToolButton(centralWidget);
        toolButtonCUBFS_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFS_Lp_input_dir"));
        toolButtonCUBFS_Lp_input_dir->setGeometry(QRect(670, 310, 25, 19));
        toolButtonCp_input_dir = new QToolButton(centralWidget);
        toolButtonCp_input_dir->setObjectName(QStringLiteral("toolButtonCp_input_dir"));
        toolButtonCp_input_dir->setGeometry(QRect(670, 420, 25, 19));
        toolButtonDegree_input_dir = new QToolButton(centralWidget);
        toolButtonDegree_input_dir->setObjectName(QStringLiteral("toolButtonDegree_input_dir"));
        toolButtonDegree_input_dir->setGeometry(QRect(670, 520, 25, 19));
        toolButtonCUBC_input_dir = new QToolButton(centralWidget);
        toolButtonCUBC_input_dir->setObjectName(QStringLiteral("toolButtonCUBC_input_dir"));
        toolButtonCUBC_input_dir->setGeometry(QRect(670, 590, 25, 19));
        toolButtonMaslov_input_csr_file = new QToolButton(centralWidget);
        toolButtonMaslov_input_csr_file->setObjectName(QStringLiteral("toolButtonMaslov_input_csr_file"));
        toolButtonMaslov_input_csr_file->setGeometry(QRect(670, 670, 25, 19));
        toolButtonConvertNII_input_file = new QToolButton(centralWidget);
        toolButtonConvertNII_input_file->setObjectName(QStringLiteral("toolButtonConvertNII_input_file"));
        toolButtonConvertNII_input_file->setGeometry(QRect(670, 740, 25, 19));
        toolButtonConvertNII_mask_nii = new QToolButton(centralWidget);
        toolButtonConvertNII_mask_nii->setObjectName(QStringLiteral("toolButtonConvertNII_mask_nii"));
        toolButtonConvertNII_mask_nii->setGeometry(QRect(670, 770, 25, 19));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 491, 16));
        QFont font;
        font.setUnderline(false);
        label->setFont(font);
        label->setWordWrap(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 170, 601, 31));
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 280, 601, 31));
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 390, 601, 16));
        label_4->setWordWrap(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 490, 601, 16));
        label_5->setWordWrap(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 560, 601, 16));
        label_6->setWordWrap(true);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 630, 601, 31));
        label_7->setWordWrap(true);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 710, 601, 16));
        label_8->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BNA Launcher", 0));
        checkCUCorMat->setText(QApplication::translate("MainWindow", "CUCorMat", 0));
        checkCUBFW_Lp->setText(QApplication::translate("MainWindow", "CUBFW_Lp", 0));
        checkCUBFS_Lp->setText(QApplication::translate("MainWindow", "CUBFS_Lp", 0));
        checkCP->setText(QApplication::translate("MainWindow", "Cp", 0));
        checkDegree->setText(QApplication::translate("MainWindow", "Degree", 0));
        checkCUBC->setText(QApplication::translate("MainWindow", "CUBC", 0));
        checkMaslov->setText(QApplication::translate("MainWindow", "Maslov", 0));
        checkConvertNII->setText(QApplication::translate("MainWindow", "ConvertNII", 0));
        labelCUCorMat_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCUCorMat_mask_threshold->setText(QApplication::translate("MainWindow", "mask_threshold", 0));
        labelCUCorMat_average_flag->setText(QApplication::translate("MainWindow", "average_flag", 0));
        labelCUCorMat_binary_thresholds->setText(QApplication::translate("MainWindow", "binary_threshold(s)", 0));
        labelCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCUBFW_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        labelCUBFS_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        labelCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        labelDegree_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCUBC_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelMaslov_input_csr_file->setText(QApplication::translate("MainWindow", "input_csr_file", 0));
        labelConvertNII_input_file->setText(QApplication::translate("MainWindow", "input_file", 0));
        labelConvertNII_mask_nii->setText(QApplication::translate("MainWindow", "mask.nii", 0));
        labelConvertNII_mask_threshold->setText(QApplication::translate("MainWindow", "mask_threshold", 0));
        pushButtonCreate->setText(QApplication::translate("MainWindow", "Create Script", 0));
        toolButtonCUCorMat_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonCp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonDegree_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonCUBC_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonMaslov_input_csr_file->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonConvertNII_input_file->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonConvertNII_mask_nii->setText(QApplication::translate("MainWindow", "...", 0));
        label->setText(QApplication::translate("MainWindow", "Construct correlation matrices from BOLD signals.", 0));
        label_2->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on blocked Floyd-Warshall algorithm (BFW).", 0));
        label_3->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on Breadth  First  Search (BFW).", 0));
        label_4->setText(QApplication::translate("MainWindow", "Calculate clustering coefficient (Cp) of the network and compare the results with  K  (user specified) random networks.", 0));
        label_5->setText(QApplication::translate("MainWindow", "Calculate the degree centrality of the network.", 0));
        label_6->setText(QApplication::translate("MainWindow", "Calculate the betweenness centrality of the network.", 0));
        label_7->setText(QApplication::translate("MainWindow", "Generate a random network that has exactly the same nodal degree with the original network, using the Maslov rewiring method.", 0));
        label_8->setText(QApplication::translate("MainWindow", "Put the .cp .eloc .deg .bc results back to the 3-D matrix and converts these files to the standard NII format.", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
