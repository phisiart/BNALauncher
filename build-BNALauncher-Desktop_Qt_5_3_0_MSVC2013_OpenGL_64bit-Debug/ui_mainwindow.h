/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
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
#include <QtWidgets/QComboBox>
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
    QLineEdit *lineEditConvertNII_input_file;
    QLabel *labelCUCorMat_Dir_for_BOLD;
    QCheckBox *checkCUCorMat;
    QLabel *label;
    QToolButton *toolButtonCUCorMat_Dir_for_BOLD;
    QLineEdit *lineEditCUCorMat_Dir_for_BOLD;
    QLabel *labelCUCorMat_to_average;
    QToolButton *toolButtonCUBFW_Lp_input_dir;
    QLabel *labelCUCorMat_threshold_for_mask;
    QLineEdit *lineEditCUCorMat_threshold_for_mask;
    QLabel *labelCUCorMat_to_save_cormatrix;
    QCheckBox *checkCUBFW_Lp;
    QLineEdit *lineEditCUBFW_Lp_input_dir;
    QLabel *label_2;
    QLabel *labelCUBFW_Lp_num_of_random_networks;
    QLabel *label_3;
    QLabel *labelCUBFW_Lp_input_dir;
    QLabel *labelCUBFS_Lp_input_dir;
    QLabel *labelCUBFS_Lp_num_of_random_networks;
    QCheckBox *checkCUBFS_Lp;
    QLineEdit *lineEditCUBFW_Lp_num_of_random_networks;
    QLabel *labelCp_num_of_random_networks;
    QToolButton *toolButtonCp_input_dir;
    QLabel *labelCp_input_dir;
    QToolButton *toolButtonDegree_input_dir;
    QLineEdit *lineEditCp_input_dir;
    QLabel *labelDegree_input_dir;
    QCheckBox *checkDegree;
    QLabel *labelCUBC_input_dir;
    QLabel *label_5;
    QLineEdit *lineEditDegree_input_dir;
    QLineEdit *lineEditCUBFS_Lp_num_of_random_networks;
    QLineEdit *lineEditCUBFS_Lp_input_dir;
    QCheckBox *checkCP;
    QLabel *label_4;
    QToolButton *toolButtonCUBFS_Lp_input_dir;
    QLineEdit *lineEditCp_num_of_random_networks;
    QToolButton *toolButtonCUBC_input_dir;
    QLabel *label_6;
    QLineEdit *lineEditCUBC_input_dir;
    QLabel *labelConvertNII_mask_threshold;
    QCheckBox *checkCUBC;
    QLineEdit *lineEditConvertNII_mask_file;
    QLabel *labelConvertNII_mask_file;
    QLabel *labelConvertNII_input_file;
    QLineEdit *lineEditCUCorMat_threshold_for_correlation_coefficient;
    QPushButton *pushButtonSave;
    QLabel *labelCUCorMat_threshold_type;
    QLineEdit *lineEditConvertNII_mask_threshold;
    QPushButton *pushButtonLoad;
    QCheckBox *checkBFS_MulCPU;
    QLabel *labelCUCorMat_threshold_for_correlation_coefficient;
    QToolButton *toolButtonSaveDir;
    QCheckBox *checkConvertNII;
    QLabel *label_8;
    QCheckBox *checkL_Modularity;
    QLabel *label_9;
    QLineEdit *lineEditL_Modularity_dir_for_csr;
    QLineEdit *lineEditL_Modularity_num_of_random_networks;
    QLabel *labelL_Modularity_num_of_random_networks;
    QLabel *labelL_Modularity_dir_for_csr;
    QLineEdit *lineEditBFS_MulCPU_num_of_random_networks;
    QLineEdit *lineEditBFS_MulCPU_input_dir;
    QLabel *labelBFS_MulCPU_num_of_random_networks;
    QLabel *labelBFS_MulCPU_input_dir;
    QLabel *label_7;
    QToolButton *toolButtonL_Modularity_dir_for_csr;
    QToolButton *toolButtonBFS_MulCPU_input_dir;
    QToolButton *toolButtonConvertNII_mask_file;
    QToolButton *toolButtonConvertNII_input_file;
    QLineEdit *lineEditSaveDir;
    QComboBox *comboBoxCUCorMat_to_average;
    QComboBox *comboBoxCUCorMat_to_save_cormatrix;
    QComboBox *comboBoxCUCorMat_threshold_type;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(715, 815);
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
        layoutWidget->setGeometry(QRect(10, 10, 691, 801));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditConvertNII_input_file = new QLineEdit(layoutWidget);
        lineEditConvertNII_input_file->setObjectName(QStringLiteral("lineEditConvertNII_input_file"));

        gridLayout->addWidget(lineEditConvertNII_input_file, 24, 6, 1, 1);

        labelCUCorMat_Dir_for_BOLD = new QLabel(layoutWidget);
        labelCUCorMat_Dir_for_BOLD->setObjectName(QStringLiteral("labelCUCorMat_Dir_for_BOLD"));

        gridLayout->addWidget(labelCUCorMat_Dir_for_BOLD, 1, 1, 1, 1);

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

        toolButtonCUCorMat_Dir_for_BOLD = new QToolButton(layoutWidget);
        toolButtonCUCorMat_Dir_for_BOLD->setObjectName(QStringLiteral("toolButtonCUCorMat_Dir_for_BOLD"));

        gridLayout->addWidget(toolButtonCUCorMat_Dir_for_BOLD, 1, 7, 1, 1);

        lineEditCUCorMat_Dir_for_BOLD = new QLineEdit(layoutWidget);
        lineEditCUCorMat_Dir_for_BOLD->setObjectName(QStringLiteral("lineEditCUCorMat_Dir_for_BOLD"));
        lineEditCUCorMat_Dir_for_BOLD->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEditCUCorMat_Dir_for_BOLD, 1, 6, 1, 1);

        labelCUCorMat_to_average = new QLabel(layoutWidget);
        labelCUCorMat_to_average->setObjectName(QStringLiteral("labelCUCorMat_to_average"));

        gridLayout->addWidget(labelCUCorMat_to_average, 3, 1, 1, 2);

        toolButtonCUBFW_Lp_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBFW_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFW_Lp_input_dir"));

        gridLayout->addWidget(toolButtonCUBFW_Lp_input_dir, 8, 7, 1, 1);

        labelCUCorMat_threshold_for_mask = new QLabel(layoutWidget);
        labelCUCorMat_threshold_for_mask->setObjectName(QStringLiteral("labelCUCorMat_threshold_for_mask"));

        gridLayout->addWidget(labelCUCorMat_threshold_for_mask, 2, 1, 1, 3);

        lineEditCUCorMat_threshold_for_mask = new QLineEdit(layoutWidget);
        lineEditCUCorMat_threshold_for_mask->setObjectName(QStringLiteral("lineEditCUCorMat_threshold_for_mask"));

        gridLayout->addWidget(lineEditCUCorMat_threshold_for_mask, 2, 6, 1, 1);

        labelCUCorMat_to_save_cormatrix = new QLabel(layoutWidget);
        labelCUCorMat_to_save_cormatrix->setObjectName(QStringLiteral("labelCUCorMat_to_save_cormatrix"));

        gridLayout->addWidget(labelCUCorMat_to_save_cormatrix, 4, 1, 1, 4);

        checkCUBFW_Lp = new QCheckBox(layoutWidget);
        checkCUBFW_Lp->setObjectName(QStringLiteral("checkCUBFW_Lp"));

        gridLayout->addWidget(checkCUBFW_Lp, 7, 0, 1, 1);

        lineEditCUBFW_Lp_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBFW_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFW_Lp_input_dir"));

        gridLayout->addWidget(lineEditCUBFW_Lp_input_dir, 8, 6, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 7, 1, 1, 7);

        labelCUBFW_Lp_num_of_random_networks = new QLabel(layoutWidget);
        labelCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFW_Lp_num_of_random_networks"));

        gridLayout->addWidget(labelCUBFW_Lp_num_of_random_networks, 9, 1, 1, 5);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 10, 1, 1, 7);

        labelCUBFW_Lp_input_dir = new QLabel(layoutWidget);
        labelCUBFW_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFW_Lp_input_dir"));

        gridLayout->addWidget(labelCUBFW_Lp_input_dir, 8, 1, 1, 1);

        labelCUBFS_Lp_input_dir = new QLabel(layoutWidget);
        labelCUBFS_Lp_input_dir->setObjectName(QStringLiteral("labelCUBFS_Lp_input_dir"));

        gridLayout->addWidget(labelCUBFS_Lp_input_dir, 11, 1, 1, 1);

        labelCUBFS_Lp_num_of_random_networks = new QLabel(layoutWidget);
        labelCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("labelCUBFS_Lp_num_of_random_networks"));

        gridLayout->addWidget(labelCUBFS_Lp_num_of_random_networks, 12, 1, 1, 5);

        checkCUBFS_Lp = new QCheckBox(layoutWidget);
        checkCUBFS_Lp->setObjectName(QStringLiteral("checkCUBFS_Lp"));

        gridLayout->addWidget(checkCUBFS_Lp, 10, 0, 1, 1);

        lineEditCUBFW_Lp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCUBFW_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFW_Lp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCUBFW_Lp_num_of_random_networks, 9, 6, 1, 1);

        labelCp_num_of_random_networks = new QLabel(layoutWidget);
        labelCp_num_of_random_networks->setObjectName(QStringLiteral("labelCp_num_of_random_networks"));

        gridLayout->addWidget(labelCp_num_of_random_networks, 18, 1, 1, 5);

        toolButtonCp_input_dir = new QToolButton(layoutWidget);
        toolButtonCp_input_dir->setObjectName(QStringLiteral("toolButtonCp_input_dir"));

        gridLayout->addWidget(toolButtonCp_input_dir, 17, 7, 1, 1);

        labelCp_input_dir = new QLabel(layoutWidget);
        labelCp_input_dir->setObjectName(QStringLiteral("labelCp_input_dir"));

        gridLayout->addWidget(labelCp_input_dir, 17, 1, 1, 1);

        toolButtonDegree_input_dir = new QToolButton(layoutWidget);
        toolButtonDegree_input_dir->setObjectName(QStringLiteral("toolButtonDegree_input_dir"));

        gridLayout->addWidget(toolButtonDegree_input_dir, 20, 7, 1, 1);

        lineEditCp_input_dir = new QLineEdit(layoutWidget);
        lineEditCp_input_dir->setObjectName(QStringLiteral("lineEditCp_input_dir"));

        gridLayout->addWidget(lineEditCp_input_dir, 17, 6, 1, 1);

        labelDegree_input_dir = new QLabel(layoutWidget);
        labelDegree_input_dir->setObjectName(QStringLiteral("labelDegree_input_dir"));

        gridLayout->addWidget(labelDegree_input_dir, 20, 1, 1, 1);

        checkDegree = new QCheckBox(layoutWidget);
        checkDegree->setObjectName(QStringLiteral("checkDegree"));

        gridLayout->addWidget(checkDegree, 19, 0, 1, 1);

        labelCUBC_input_dir = new QLabel(layoutWidget);
        labelCUBC_input_dir->setObjectName(QStringLiteral("labelCUBC_input_dir"));

        gridLayout->addWidget(labelCUBC_input_dir, 22, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 19, 1, 1, 6);

        lineEditDegree_input_dir = new QLineEdit(layoutWidget);
        lineEditDegree_input_dir->setObjectName(QStringLiteral("lineEditDegree_input_dir"));

        gridLayout->addWidget(lineEditDegree_input_dir, 20, 6, 1, 1);

        lineEditCUBFS_Lp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCUBFS_Lp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCUBFS_Lp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCUBFS_Lp_num_of_random_networks, 12, 6, 1, 1);

        lineEditCUBFS_Lp_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBFS_Lp_input_dir->setObjectName(QStringLiteral("lineEditCUBFS_Lp_input_dir"));

        gridLayout->addWidget(lineEditCUBFS_Lp_input_dir, 11, 6, 1, 1);

        checkCP = new QCheckBox(layoutWidget);
        checkCP->setObjectName(QStringLiteral("checkCP"));

        gridLayout->addWidget(checkCP, 16, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 16, 1, 1, 6);

        toolButtonCUBFS_Lp_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBFS_Lp_input_dir->setObjectName(QStringLiteral("toolButtonCUBFS_Lp_input_dir"));

        gridLayout->addWidget(toolButtonCUBFS_Lp_input_dir, 11, 7, 1, 1);

        lineEditCp_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditCp_num_of_random_networks->setObjectName(QStringLiteral("lineEditCp_num_of_random_networks"));

        gridLayout->addWidget(lineEditCp_num_of_random_networks, 18, 6, 1, 1);

        toolButtonCUBC_input_dir = new QToolButton(layoutWidget);
        toolButtonCUBC_input_dir->setObjectName(QStringLiteral("toolButtonCUBC_input_dir"));

        gridLayout->addWidget(toolButtonCUBC_input_dir, 22, 7, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 21, 1, 1, 6);

        lineEditCUBC_input_dir = new QLineEdit(layoutWidget);
        lineEditCUBC_input_dir->setObjectName(QStringLiteral("lineEditCUBC_input_dir"));

        gridLayout->addWidget(lineEditCUBC_input_dir, 22, 6, 1, 1);

        labelConvertNII_mask_threshold = new QLabel(layoutWidget);
        labelConvertNII_mask_threshold->setObjectName(QStringLiteral("labelConvertNII_mask_threshold"));

        gridLayout->addWidget(labelConvertNII_mask_threshold, 26, 1, 1, 3);

        checkCUBC = new QCheckBox(layoutWidget);
        checkCUBC->setObjectName(QStringLiteral("checkCUBC"));

        gridLayout->addWidget(checkCUBC, 21, 0, 1, 1);

        lineEditConvertNII_mask_file = new QLineEdit(layoutWidget);
        lineEditConvertNII_mask_file->setObjectName(QStringLiteral("lineEditConvertNII_mask_file"));

        gridLayout->addWidget(lineEditConvertNII_mask_file, 25, 6, 1, 1);

        labelConvertNII_mask_file = new QLabel(layoutWidget);
        labelConvertNII_mask_file->setObjectName(QStringLiteral("labelConvertNII_mask_file"));

        gridLayout->addWidget(labelConvertNII_mask_file, 25, 1, 1, 1);

        labelConvertNII_input_file = new QLabel(layoutWidget);
        labelConvertNII_input_file->setObjectName(QStringLiteral("labelConvertNII_input_file"));

        gridLayout->addWidget(labelConvertNII_input_file, 24, 1, 1, 1);

        lineEditCUCorMat_threshold_for_correlation_coefficient = new QLineEdit(layoutWidget);
        lineEditCUCorMat_threshold_for_correlation_coefficient->setObjectName(QStringLiteral("lineEditCUCorMat_threshold_for_correlation_coefficient"));

        gridLayout->addWidget(lineEditCUCorMat_threshold_for_correlation_coefficient, 6, 6, 1, 1);

        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        gridLayout->addWidget(pushButtonSave, 30, 0, 1, 1);

        labelCUCorMat_threshold_type = new QLabel(layoutWidget);
        labelCUCorMat_threshold_type->setObjectName(QStringLiteral("labelCUCorMat_threshold_type"));

        gridLayout->addWidget(labelCUCorMat_threshold_type, 5, 1, 1, 1);

        lineEditConvertNII_mask_threshold = new QLineEdit(layoutWidget);
        lineEditConvertNII_mask_threshold->setObjectName(QStringLiteral("lineEditConvertNII_mask_threshold"));

        gridLayout->addWidget(lineEditConvertNII_mask_threshold, 26, 6, 1, 1);

        pushButtonLoad = new QPushButton(layoutWidget);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));

        gridLayout->addWidget(pushButtonLoad, 30, 1, 1, 1);

        checkBFS_MulCPU = new QCheckBox(layoutWidget);
        checkBFS_MulCPU->setObjectName(QStringLiteral("checkBFS_MulCPU"));

        gridLayout->addWidget(checkBFS_MulCPU, 13, 0, 1, 1);

        labelCUCorMat_threshold_for_correlation_coefficient = new QLabel(layoutWidget);
        labelCUCorMat_threshold_for_correlation_coefficient->setObjectName(QStringLiteral("labelCUCorMat_threshold_for_correlation_coefficient"));

        gridLayout->addWidget(labelCUCorMat_threshold_for_correlation_coefficient, 6, 1, 1, 5);

        toolButtonSaveDir = new QToolButton(layoutWidget);
        toolButtonSaveDir->setObjectName(QStringLiteral("toolButtonSaveDir"));

        gridLayout->addWidget(toolButtonSaveDir, 30, 7, 1, 1);

        checkConvertNII = new QCheckBox(layoutWidget);
        checkConvertNII->setObjectName(QStringLiteral("checkConvertNII"));

        gridLayout->addWidget(checkConvertNII, 23, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 23, 1, 1, 6);

        checkL_Modularity = new QCheckBox(layoutWidget);
        checkL_Modularity->setObjectName(QStringLiteral("checkL_Modularity"));

        gridLayout->addWidget(checkL_Modularity, 27, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        gridLayout->addWidget(label_9, 27, 1, 1, 6);

        lineEditL_Modularity_dir_for_csr = new QLineEdit(layoutWidget);
        lineEditL_Modularity_dir_for_csr->setObjectName(QStringLiteral("lineEditL_Modularity_dir_for_csr"));

        gridLayout->addWidget(lineEditL_Modularity_dir_for_csr, 28, 6, 1, 1);

        lineEditL_Modularity_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditL_Modularity_num_of_random_networks->setObjectName(QStringLiteral("lineEditL_Modularity_num_of_random_networks"));

        gridLayout->addWidget(lineEditL_Modularity_num_of_random_networks, 29, 6, 1, 1);

        labelL_Modularity_num_of_random_networks = new QLabel(layoutWidget);
        labelL_Modularity_num_of_random_networks->setObjectName(QStringLiteral("labelL_Modularity_num_of_random_networks"));

        gridLayout->addWidget(labelL_Modularity_num_of_random_networks, 29, 1, 1, 1);

        labelL_Modularity_dir_for_csr = new QLabel(layoutWidget);
        labelL_Modularity_dir_for_csr->setObjectName(QStringLiteral("labelL_Modularity_dir_for_csr"));

        gridLayout->addWidget(labelL_Modularity_dir_for_csr, 28, 1, 1, 1);

        lineEditBFS_MulCPU_num_of_random_networks = new QLineEdit(layoutWidget);
        lineEditBFS_MulCPU_num_of_random_networks->setObjectName(QStringLiteral("lineEditBFS_MulCPU_num_of_random_networks"));

        gridLayout->addWidget(lineEditBFS_MulCPU_num_of_random_networks, 15, 6, 1, 1);

        lineEditBFS_MulCPU_input_dir = new QLineEdit(layoutWidget);
        lineEditBFS_MulCPU_input_dir->setObjectName(QStringLiteral("lineEditBFS_MulCPU_input_dir"));

        gridLayout->addWidget(lineEditBFS_MulCPU_input_dir, 14, 6, 1, 1);

        labelBFS_MulCPU_num_of_random_networks = new QLabel(layoutWidget);
        labelBFS_MulCPU_num_of_random_networks->setObjectName(QStringLiteral("labelBFS_MulCPU_num_of_random_networks"));

        gridLayout->addWidget(labelBFS_MulCPU_num_of_random_networks, 15, 1, 1, 1);

        labelBFS_MulCPU_input_dir = new QLabel(layoutWidget);
        labelBFS_MulCPU_input_dir->setObjectName(QStringLiteral("labelBFS_MulCPU_input_dir"));

        gridLayout->addWidget(labelBFS_MulCPU_input_dir, 14, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 13, 1, 1, 6);

        toolButtonL_Modularity_dir_for_csr = new QToolButton(layoutWidget);
        toolButtonL_Modularity_dir_for_csr->setObjectName(QStringLiteral("toolButtonL_Modularity_dir_for_csr"));

        gridLayout->addWidget(toolButtonL_Modularity_dir_for_csr, 28, 7, 1, 1);

        toolButtonBFS_MulCPU_input_dir = new QToolButton(layoutWidget);
        toolButtonBFS_MulCPU_input_dir->setObjectName(QStringLiteral("toolButtonBFS_MulCPU_input_dir"));

        gridLayout->addWidget(toolButtonBFS_MulCPU_input_dir, 14, 7, 1, 1);

        toolButtonConvertNII_mask_file = new QToolButton(layoutWidget);
        toolButtonConvertNII_mask_file->setObjectName(QStringLiteral("toolButtonConvertNII_mask_file"));

        gridLayout->addWidget(toolButtonConvertNII_mask_file, 25, 7, 1, 1);

        toolButtonConvertNII_input_file = new QToolButton(layoutWidget);
        toolButtonConvertNII_input_file->setObjectName(QStringLiteral("toolButtonConvertNII_input_file"));

        gridLayout->addWidget(toolButtonConvertNII_input_file, 24, 7, 1, 1);

        lineEditSaveDir = new QLineEdit(layoutWidget);
        lineEditSaveDir->setObjectName(QStringLiteral("lineEditSaveDir"));

        gridLayout->addWidget(lineEditSaveDir, 30, 6, 1, 1);

        comboBoxCUCorMat_to_average = new QComboBox(layoutWidget);
        comboBoxCUCorMat_to_average->setObjectName(QStringLiteral("comboBoxCUCorMat_to_average"));
        comboBoxCUCorMat_to_average->setEditable(false);

        gridLayout->addWidget(comboBoxCUCorMat_to_average, 3, 6, 1, 1);

        comboBoxCUCorMat_to_save_cormatrix = new QComboBox(layoutWidget);
        comboBoxCUCorMat_to_save_cormatrix->setObjectName(QStringLiteral("comboBoxCUCorMat_to_save_cormatrix"));
        comboBoxCUCorMat_to_save_cormatrix->setEditable(false);

        gridLayout->addWidget(comboBoxCUCorMat_to_save_cormatrix, 4, 6, 1, 1);

        comboBoxCUCorMat_threshold_type = new QComboBox(layoutWidget);
        comboBoxCUCorMat_threshold_type->setObjectName(QStringLiteral("comboBoxCUCorMat_threshold_type"));
        comboBoxCUCorMat_threshold_type->setEditable(false);

        gridLayout->addWidget(comboBoxCUCorMat_threshold_type, 5, 6, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BNA Launcher", 0));
        labelCUCorMat_Dir_for_BOLD->setText(QApplication::translate("MainWindow", "Dir_for_BOLD", 0));
        checkCUCorMat->setText(QApplication::translate("MainWindow", "CUCorMat", 0));
        label->setText(QApplication::translate("MainWindow", "Construct correlation matrices from BOLD signals on GPU.", 0));
        toolButtonCUCorMat_Dir_for_BOLD->setText(QApplication::translate("MainWindow", "...", 0));
        labelCUCorMat_to_average->setText(QApplication::translate("MainWindow", "to_average(y/n)", 0));
        toolButtonCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCUCorMat_threshold_for_mask->setText(QApplication::translate("MainWindow", "threshold_for_mask", 0));
        labelCUCorMat_to_save_cormatrix->setText(QApplication::translate("MainWindow", "to_save_cormatrix(y/n)", 0));
        checkCUBFW_Lp->setText(QApplication::translate("MainWindow", "CUBFW_Lp", 0));
        label_2->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on blocked Floyd-Warshall algorithm (BFW).", 0));
        labelCUBFW_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        label_3->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on Breadth  First  Search (BFS).", 0));
        labelCUBFW_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        labelCUBFS_Lp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        checkCUBFS_Lp->setText(QApplication::translate("MainWindow", "CUBFS_Lp", 0));
        labelCp_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        toolButtonCp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelCp_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        toolButtonDegree_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        labelDegree_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        checkDegree->setText(QApplication::translate("MainWindow", "Degree", 0));
        labelCUBC_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        label_5->setText(QApplication::translate("MainWindow", "Calculate the degree centrality of the network.", 0));
        checkCP->setText(QApplication::translate("MainWindow", "Cp", 0));
        label_4->setText(QApplication::translate("MainWindow", "Calculate clustering coefficient (Cp) of the network and compare the results with  K  (user specified) random networks.", 0));
        toolButtonCUBFS_Lp_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonCUBC_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        label_6->setText(QApplication::translate("MainWindow", "Calculate the betweenness centrality of the network.", 0));
        labelConvertNII_mask_threshold->setText(QApplication::translate("MainWindow", "mask_threshold", 0));
        checkCUBC->setText(QApplication::translate("MainWindow", "CUBC", 0));
        labelConvertNII_mask_file->setText(QApplication::translate("MainWindow", "mask_file", 0));
        labelConvertNII_input_file->setText(QApplication::translate("MainWindow", "input_file", 0));
        pushButtonSave->setText(QApplication::translate("MainWindow", "Save script", 0));
        labelCUCorMat_threshold_type->setText(QApplication::translate("MainWindow", "threshold_type(r/s)", 0));
        pushButtonLoad->setText(QApplication::translate("MainWindow", "Load script", 0));
        checkBFS_MulCPU->setText(QApplication::translate("MainWindow", "BFS_MulCPU", 0));
        labelCUCorMat_threshold_for_correlation_coefficient->setText(QApplication::translate("MainWindow", "threshold_for_correlation_coefficient", 0));
        toolButtonSaveDir->setText(QApplication::translate("MainWindow", "...", 0));
        checkConvertNII->setText(QApplication::translate("MainWindow", "ConvertNII", 0));
        label_8->setText(QApplication::translate("MainWindow", "Put the .cp .eloc .deg .bc results back to the 3-D matrix and converts these files to the standard NII format.", 0));
        checkL_Modularity->setText(QApplication::translate("MainWindow", "Louvain_Modularity", 0));
        label_9->setText(QApplication::translate("MainWindow", "Calculate Louvain Modularity for each of the .csr files in the given directory and compare with random networks.", 0));
        labelL_Modularity_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        labelL_Modularity_dir_for_csr->setText(QApplication::translate("MainWindow", "dir_for_csr", 0));
        labelBFS_MulCPU_num_of_random_networks->setText(QApplication::translate("MainWindow", "num_of_random_networks", 0));
        labelBFS_MulCPU_input_dir->setText(QApplication::translate("MainWindow", "input_dir", 0));
        label_7->setText(QApplication::translate("MainWindow", "Calculate the characteristic path length of the network and compare with K (user specified) random networks. Based on Breadth  First  Search (BFS) on multi-core CPU.", 0));
        toolButtonL_Modularity_dir_for_csr->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonBFS_MulCPU_input_dir->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonConvertNII_mask_file->setText(QApplication::translate("MainWindow", "...", 0));
        toolButtonConvertNII_input_file->setText(QApplication::translate("MainWindow", "...", 0));
        comboBoxCUCorMat_to_average->clear();
        comboBoxCUCorMat_to_average->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "y", 0)
         << QApplication::translate("MainWindow", "n", 0)
        );
        comboBoxCUCorMat_to_save_cormatrix->clear();
        comboBoxCUCorMat_to_save_cormatrix->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "y", 0)
         << QApplication::translate("MainWindow", "n", 0)
        );
        comboBoxCUCorMat_threshold_type->clear();
        comboBoxCUCorMat_threshold_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "r", 0)
         << QApplication::translate("MainWindow", "s", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
