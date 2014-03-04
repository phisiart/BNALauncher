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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkCUCorMat;
    QLabel *label;
    QLabel *labelCUCorMat_input_dir;
    QLineEdit *lineEditCUCorMat_input_dir;
    QToolButton *toolButtonCUCorMat_input_dir;
    QLabel *labelCUCorMat_mask_threshold;
    QLineEdit *lineEditCUCorMat_mask_threshold;
    QLabel *labelCUCorMat_average_flag;
    QLineEdit *lineEditCUCorMat_average_flag;
    QLabel *labelCUCorMat_binary_thresholds;
    QLineEdit *lineEditCUCorMat_binary_thresholds;
    QCheckBox *checkCUBFW_Lp;
    QLabel *label_2;
    QLabel *labelCUBFW_Lp_input_dir;
    QLineEdit *lineEditCUBFW_Lp_input_dir;
    QToolButton *toolButtonCUBFW_Lp_input_dir;
    QLabel *labelCUBFW_Lp_num_of_random_networks;
    QLineEdit *lineEditCUBFW_Lp_num_of_random_networks;
    QCheckBox *checkCUBFS_Lp;
    QLabel *label_3;
    QLabel *labelCUBFS_Lp_input_dir;
    QLineEdit *lineEditCUBFS_Lp_input_dir;
    QToolButton *toolButtonCUBFS_Lp_input_dir;
    QLabel *labelCUBFS_Lp_num_of_random_networks;
    QLineEdit *lineEditCUBFS_Lp_num_of_random_networks;
    QCheckBox *checkCP;
    QLabel *label_4;
    QLabel *labelCp_input_dir;
    QLineEdit *lineEditCp_input_dir;
    QToolButton *toolButtonCp_input_dir;
    QLabel *labelCp_num_of_random_networks;
    QLineEdit *lineEditCp_num_of_random_networks;
    QCheckBox *checkDegree;
    QLabel *label_5;
    QLabel *labelDegree_input_dir;
    QLineEdit *lineEditDegree_input_dir;
    QToolButton *toolButtonDegree_input_dir;
    QCheckBox *checkCUBC;
    QLabel *label_6;
    QLabel *labelCUBC_input_dir;
    QLineEdit *lineEditCUBC_input_dir;
    QToolButton *toolButtonCUBC_input_dir;
    QCheckBox *checkMaslov;
    QLabel *label_7;
    QLabel *labelMaslov_input_csr_file;
    QLineEdit *lineEditMaslov_input_csr_file;
    QToolButton *toolButtonMaslov_input_csr_file;
    QCheckBox *checkConvertNII;
    QLabel *label_8;
    QLabel *labelConvertNII_input_file;
    QLineEdit *lineEditConvertNII_input_file;
    QToolButton *toolButtonConvertNII_input_file;
    QLabel *labelConvertNII_mask_nii;
    QLineEdit *lineEditConvertNII_mask_nii;
    QToolButton *toolButtonConvertNII_mask_nii;
    QLabel *labelConvertNII_mask_threshold;
    QLineEdit *lineEditConvertNII_mask_threshold;
    QPushButton *pushButtonCreate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(715, 703);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 691, 681));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkCUCorMat = new QCheckBox(layoutWidget);
        checkCUCorMat->setObjectName(QStringLiteral("checkCUCorMat"));

        gridLayout->addWidget(checkCUCorMat, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setUnderline(false);
        label->setFont(font);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 1, 1, 6);

        labelCUCorMat_input_dir = new QLabel(layoutWidget);
        labelCUCorMat_input_dir->setObjectName(QStringLiteral("labelCUCorMat_input_dir"));

        gridLayout->addWidget(labelCUCorMat_input_dir, 1, 1, 1, 1);

        lineEditCUCorMat_input_dir = new QLineEdit(layoutWidget);
        lineEditCUCorMat_input_dir->setObjectName(QStringLiteral("lineEditCUCorMat_input_dir"));
        lineEditCUCorMat_input_dir->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEditCUCorMat_input_dir, 1, 6, 1, 1);

        toolButtonCUCorMat_input_dir = new QToolButton(layoutWidget);
        toolButtonCUCorMat_input_dir->setObjectName(QStringLiteral("toolButtonCUCorMat_input_dir"));

        gridLayout->addWidget(toolButtonCUCorMat_input_dir, 1, 7, 1, 1);

        labelCUCorMat_mask_threshold = new QLabel(layoutWidget);
        labelCUCorMat_mask_threshold->setObjectName(QStringLiteral("labelCUCorMat_mask_threshold"));

        gridLayout->addWidget(labelCUCorMat_mask_threshold, 2, 1, 1, 3);

        lineEditCUCorMat_mask_threshold = new QLineEdit(layoutWidget);
        lineEditCUCorMat_mask_threshold->setObjectName(QStringLiteral("lineEditCUCorMat_mask_threshold"));

        gridLayout->addWidget(lineEditCUCorMat_mask_threshold, 2, 6, 1, 1);

        labelCUCorMat_average_flag = new QLabel(layoutWidget);
        labelCUCorMat_average_flag->setObjectName(QStringLiteral("labelCUCorMat_average_flag"));

        gridLayout->addWidget(labelCUCorMat_average_flag, 3, 1, 1, 2);

        lineEditCUCorMat_average_flag = new QLineEdit(layoutWidget);
        lineEditCUCorMat_average_flag->setObjectName(QStringLiteral("lineEditCUCorMat_average_flag"));

        gridLayout->addWidget(lineEditCUCorMat_average_flag, 3, 6, 1, 1);

        labelCUCorMat_binary_thresholds = new QLabel(layoutWidget);
        labelCUCorMat_binary_thresholds->setObjectName(QStringLiteral("labelCUCorMat_binary_thresholds"));

        gridLayout->addWidget(labelCUCorMat_binary_thresholds, 4, 1, 1, 4);

        lineEditCUCorMat_binary_thresholds = new QLineEdit(layoutWidget);
        lineEditCUCorMat_binary_thresholds->setObjectName(QStringLiteral("lineEditCUCorMat_binary_thresholds"));

        gridLayout->addWidget(lineEditCUCorMat_binary_thresholds, 4, 6, 1, 1);

        checkCUBFW_Lp = new QCheckBox(layoutWidget);
        checkCUBFW_Lp->setObjectName(QStringLiteral("checkCUBFW_Lp"));

        gridLayout->addWidget(checkCUBFW_Lp, 5, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 5, 1, 1, 7);

        labelCUBFW_Lp_input_dir = new QLabel(layoutWidget);
        labelCUBFW_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFW_Lp_input_dir"));

        gridLayout->addWidget(labelCUBFW_Lp_input_dir, 6, 1, 1, 1);

        lineEditCUBFW_Lp_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBFW_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFW_Lp_input_dir"));

        gridLayout->addWidget(lineEditCUBFW_Lp_input_dir, 6, 6, 1, 1);

        toolButtonCUBFW_Lp_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBFW_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFW_Lp_input_dir"));

        gridLayout->addWidget(toolButtonCUBFW_Lp_input_dir, 6, 7, 1, 1);

        labelCUBFW_Lp_num_of_random_networks = new QLabel(layoutWidget);
        labelCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFW_Lp_num_of_random_networks"));

        gridLayout->addWidget(labelCUBFW_Lp_num_of_random_networks, 7, 1, 1, 5);

        lineEditCUBFW_Lp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFW_Lp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCUBFW_Lp_num_of_random_networks, 7, 6, 1, 1);

        checkCUBFS_Lp = new QCheckBox(layoutWidget);
        checkCUBFS_Lp->setObjectName(QStringLiteral("checkCUBFS_Lp"));

        gridLayout->addWidget(checkCUBFS_Lp, 8, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 8, 1, 1, 7);

        labelCUBFS_Lp_input_dir = new QLabel(layoutWidget);
        labelCUBFS_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFS_Lp_input_dir"));

        gridLayout->addWidget(labelCUBFS_Lp_input_dir, 9, 1, 1, 1);

        lineEditCUBFS_Lp_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBFS_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFS_Lp_input_dir"));

        gridLayout->addWidget(lineEditCUBFS_Lp_input_dir, 9, 6, 1, 1);

        toolButtonCUBFS_Lp_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBFS_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFS_Lp_input_dir"));

        gridLayout->addWidget(toolButtonCUBFS_Lp_input_dir, 9, 7, 1, 1);

        labelCUBFS_Lp_num_of_random_networks = new QLabel(layoutWidget);
        labelCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFS_Lp_num_of_random_networks"));

        gridLayout->addWidget(labelCUBFS_Lp_num_of_random_networks, 10, 1, 1, 5);

        lineEditCUBFS_Lp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFS_Lp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCUBFS_Lp_num_of_random_networks, 10, 6, 1, 1);

        checkCP = new QCheckBox(layoutWidget);
        checkCP->setObjectName(QStringLiteral("checkCP"));

        gridLayout->addWidget(checkCP, 11, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 11, 1, 1, 6);

        labelCp_input_dir = new QLabel(layoutWidget);
        labelCp_input_dir->setObjectName(QStringLiteral("labelCp_input_dir"));

        gridLayout->addWidget(labelCp_input_dir, 12, 1, 1, 1);

        lineEditCp_input_dir = new QLineEdit(layoutWidget);
        lineEditCp_input_dir->setObjectName(QStringLiteral("lineEditCp_input_dir"));

        gridLayout->addWidget(lineEditCp_input_dir, 12, 6, 1, 1);

        toolButtonCp_input_dir = new QToolButton(layoutWidget);
        toolButtonCp_input_dir->setObjectName(QStringLiteral("toolButtonCp_input_dir"));

        gridLayout->addWidget(toolButtonCp_input_dir, 12, 7, 1, 1);

        labelCp_num_of_random_networks = new QLabel(layoutWidget);
        labelCp_num_of_random_networks->setObjectName(QStringLiteral("labelCp_num_of_random_networks"));

        gridLayout->addWidget(labelCp_num_of_random_networks, 13, 1, 1, 5);

        lineEditCp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCp_num_of_random_networks, 13, 6, 1, 1);

        checkDegree = new QCheckBox(layoutWidget);
        checkDegree->setObjectName(QStringLiteral("checkDegree"));

        gridLayout->addWidget(checkDegree, 14, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 14, 1, 1, 6);

        labelDegree_input_dir = new QLabel(layoutWidget);
        labelDegree_input_dir->setObjectName(QStringLiteral("labelDegree_input_dir"));

        gridLayout->addWidget(labelDegree_input_dir, 15, 1, 1, 1);

        lineEditDegree_input_dir = new QLineEdit(layoutWidget);
        lineEditDegree_input_dir->setObjectName(QStringLiteral("lineEditDegree_input_dir"));

        gridLayout->addWidget(lineEditDegree_input_dir, 15, 6, 1, 1);

        toolButtonDegree_input_dir = new QToolButton(layoutWidget);
        toolButtonDegree_input_dir->setObjectName(QStringLiteral("toolButtonDegree_input_dir"));

        gridLayout->addWidget(toolButtonDegree_input_dir, 15, 7, 1, 1);

        checkCUBC = new QCheckBox(layoutWidget);
        checkCUBC->setObjectName(QStringLiteral("checkCUBC"));

        gridLayout->addWidget(checkCUBC, 16, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 16, 1, 1, 6);

        labelCUBC_input_dir = new QLabel(layoutWidget);
        labelCUBC_input_dir->setObjectName(QStringLiteral("labelCUBC_input_dir"));

        gridLayout->addWidget(labelCUBC_input_dir, 17, 1, 1, 1);

        lineEditCUBC_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBC_input_dir->setObjectName(QStringLiteral("lineEditCUBC_input_dir"));

        gridLayout->addWidget(lineEditCUBC_input_dir, 17, 6, 1, 1);

        toolButtonCUBC_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBC_input_dir->setObjectName(QStringLiteral("toolButtonCUBC_input_dir"));

        gridLayout->addWidget(toolButtonCUBC_input_dir, 17, 7, 1, 1);

        checkMaslov = new QCheckBox(layoutWidget);
        checkMaslov->setObjectName(QStringLiteral("checkMaslov"));

        gridLayout->addWidget(checkMaslov, 18, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 18, 1, 1, 7);

        labelMaslov_input_csr_file = new QLabel(layoutWidget);
        labelMaslov_input_csr_file->setObjectName(QStringLiteral("labelMaslov_input_csr_file"));

        gridLayout->addWidget(labelMaslov_input_csr_file, 19, 1, 1, 2);

        lineEditMaslov_input_csr_file = new QLineEdit(layoutWidget);
        lineEditMaslov_input_csr_file->setObjectName(QStringLiteral("lineEditMaslov_input_csr_file"));

        gridLayout->addWidget(lineEditMaslov_input_csr_file, 19, 6, 1, 1);

        toolButtonMaslov_input_csr_file = new QToolButton(layoutWidget);
        toolButtonMaslov_input_csr_file->setObjectName(QStringLiteral("toolButtonMaslov_input_csr_file"));

        gridLayout->addWidget(toolButtonMaslov_input_csr_file, 19, 7, 1, 1);

        checkConvertNII = new QCheckBox(layoutWidget);
        checkConvertNII->setObjectName(QStringLiteral("checkConvertNII"));

        gridLayout->addWidget(checkConvertNII, 20, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 20, 1, 1, 6);

        labelConvertNII_input_file = new QLabel(layoutWidget);
        labelConvertNII_input_file->setObjectName(QStringLiteral("labelConvertNII_input_file"));

        gridLayout->addWidget(labelConvertNII_input_file, 21, 1, 1, 1);

        lineEditConvertNII_input_file = new QLineEdit(layoutWidget);
        lineEditConvertNII_input_file->setObjectName(QStringLiteral("lineEditConvertNII_input_file"));

        gridLayout->addWidget(lineEditConvertNII_input_file, 21, 6, 1, 1);

        toolButtonConvertNII_input_file = new QToolButton(layoutWidget);
        toolButtonConvertNII_input_file->setObjectName(QStringLiteral("toolButtonConvertNII_input_file"));

        gridLayout->addWidget(toolButtonConvertNII_input_file, 21, 7, 1, 1);

        labelConvertNII_mask_nii = new QLabel(layoutWidget);
        labelConvertNII_mask_nii->setObjectName(QStringLiteral("labelConvertNII_mask_nii"));

        gridLayout->addWidget(labelConvertNII_mask_nii, 22, 1, 1, 1);

        lineEditConvertNII_mask_nii = new QLineEdit(layoutWidget);
        lineEditConvertNII_mask_nii->setObjectName(QStringLiteral("lineEditConvertNII_mask_nii"));

        gridLayout->addWidget(lineEditConvertNII_mask_nii, 22, 6, 1, 1);

        toolButtonConvertNII_mask_nii = new QToolButton(layoutWidget);
        toolButtonConvertNII_mask_nii->setObjectName(QStringLiteral("toolButtonConvertNII_mask_nii"));

        gridLayout->addWidget(toolButtonConvertNII_mask_nii, 22, 7, 1, 1);

        labelConvertNII_mask_threshold = new QLabel(layoutWidget);
        labelConvertNII_mask_threshold->setObjectName(QStringLiteral("labelConvertNII_mask_threshold"));

        gridLayout->addWidget(labelConvertNII_mask_threshold, 23, 1, 1, 3);

        lineEditConvertNII_mask_threshold = new QLineEdit(layoutWidget);
        lineEditConvertNII_mask_threshold->setObjectName(QStringLiteral("lineEditConvertNII_mask_threshold"));

        gridLayout->addWidget(lineEditConvertNII_mask_threshold, 23, 6, 1, 1);

        pushButtonCreate = new QPushButton(layoutWidget);
        pushButtonCreate->setObjectName(QStringLiteral("pushButtonCreate"));

        gridLayout->addWidget(pushButtonCreate, 24, 6, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BNA Launcher", 0));
        checkCUCorMat->setText(QApplication::translate("MainWindow", "CUCorMat", 0));
        label->setText(QApplication::translate("MainWindow", "Construct correlation matrices from BOLD signals.", 0));
        labelCUCorMat_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonCUCorMat_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCUCorMat_mask_threshold->setText(QApplication::translate("MainWindow", "mask_threshold", 0));
        labelCUCorMat_average_flag->setText(QApplication::translate("MainWindow", "average_flag", 0));
        labelCUCorMat_binary_thresholds->setText(QApplication::translate("MainWindow", "binary_threshold(s)", 0));
        checkCUBFW_Lp->setText(QApplication::translate("MainWindow", "CUBFW_Lp", 0));
        label_2->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on blocked Floyd-Warshall algorithm (BFW).", 0));
        labelCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCUBFW_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        checkCUBFS_Lp->setText(QApplication::translate("MainWindow", "CUBFS_Lp", 0));
        label_3->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on Breadth  First  Search (BFW).", 0));
        labelCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCUBFS_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        checkCP->setText(QApplication::translate("MainWindow", "Cp", 0));
        label_4->setText(QApplication::translate("MainWindow", "Calculate clustering coefficient (Cp) of the network and compare the results with  K  (user specified) random networks.", 0));
        labelCp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonCp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        checkDegree->setText(QApplication::translate("MainWindow", "Degree", 0));
        label_5->setText(QApplication::translate("MainWindow", "Calculate the degree centrality of the network.", 0));
        labelDegree_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonDegree_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        checkCUBC->setText(QApplication::translate("MainWindow", "CUBC", 0));
        label_6->setText(QApplication::translate("MainWindow", "Calculate the betweenness centrality of the network.", 0));
        labelCUBC_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonCUBC_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        checkMaslov->setText(QApplication::translate("MainWindow", "Maslov", 0));
        label_7->setText(QApplication::translate("MainWindow", "Generate a random network that has exactly the same nodal degree with the original network, using the Maslov rewiring method.", 0));
        labelMaslov_input_csr_file->setText(QApplication::translate("MainWindow", "input_csr_file", 0));
        toolButtonMaslov_input_csr_file->setText(QApplication::translate("MainWindow", "...", 0));
        checkConvertNII->setText(QApplication::translate("MainWindow", "ConvertNII", 0));
        label_8->setText(QApplication::translate("MainWindow", "Put the .cp .eloc .deg .bc results back to the 3-D matrix and converts these files to the standard NII format.", 0));
        labelConvertNII_input_file->setText(QApplication::translate("MainWindow", "input_file", 0));
        toolButtonConvertNII_input_file->setText(QApplication::translate("MainWindow", "...", 0));
        labelConvertNII_mask_nii->setText(QApplication::translate("MainWindow", "mask.nii", 0));
        toolButtonConvertNII_mask_nii->setText(QApplication::translate("MainWindow", "...", 0));
        labelConvertNII_mask_threshold->setText(QApplication::translate("MainWindow", "mask_threshold", 0));
        pushButtonCreate->setText(QApplication::translate("MainWindow", "Create Script", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
