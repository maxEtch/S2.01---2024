/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionVitesse;
    QAction *actionEnlever_diaporama;
    QAction *actionCharger_diaporama;
    QAction *actionAide;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QLabel *lTitre;
    QLabel *lImage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *CBMode;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QPushButton *bPrecedent;
    QPushButton *bLancerDiapo;
    QPushButton *bSuivant;
    QPushButton *bArreterDiapo;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuParam_tres;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(693, 477);
        actionVitesse = new QAction(LecteurVue);
        actionVitesse->setObjectName(QString::fromUtf8("actionVitesse"));
        actionEnlever_diaporama = new QAction(LecteurVue);
        actionEnlever_diaporama->setObjectName(QString::fromUtf8("actionEnlever_diaporama"));
        actionCharger_diaporama = new QAction(LecteurVue);
        actionCharger_diaporama->setObjectName(QString::fromUtf8("actionCharger_diaporama"));
        actionAide = new QAction(LecteurVue);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        lTitre = new QLabel(centralwidget);
        lTitre->setObjectName(QString::fromUtf8("lTitre"));
        lTitre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lTitre);

        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        lImage->setPixmap(QPixmap(QString::fromUtf8(":/v2/cartesDisney/Disney_tapis.png")));
        lImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lImage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        CBMode = new QComboBox(centralwidget);
        CBMode->addItem(QString());
        CBMode->setObjectName(QString::fromUtf8("CBMode"));

        verticalLayout_2->addWidget(CBMode);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));

        gridLayout->addWidget(bPrecedent, 2, 0, 1, 1);

        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName(QString::fromUtf8("bLancerDiapo"));
        bLancerDiapo->setCheckable(false);
        bLancerDiapo->setAutoDefault(false);

        gridLayout->addWidget(bLancerDiapo, 1, 0, 1, 2);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));

        gridLayout->addWidget(bSuivant, 2, 1, 1, 1);

        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName(QString::fromUtf8("bArreterDiapo"));

        gridLayout->addWidget(bArreterDiapo, 3, 0, 1, 2);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 693, 22));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParam_tres->addAction(actionCharger_diaporama);
        menuParam_tres->addAction(actionVitesse);
        menuParam_tres->addAction(actionEnlever_diaporama);
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionAide);

        retranslateUi(LecteurVue);
        QObject::connect(actionQuitter, &QAction::triggered, LecteurVue, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionVitesse->setText(QCoreApplication::translate("LecteurVue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_diaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
        actionCharger_diaporama->setText(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
        actionAide->setText(QCoreApplication::translate("LecteurVue", "\303\200 propos de...", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        lTitre->setText(QCoreApplication::translate("LecteurVue", "Titre photo", nullptr));
        lImage->setText(QString());
        label->setText(QCoreApplication::translate("LecteurVue", "Type de mode :", nullptr));
        CBMode->setItemText(0, QCoreApplication::translate("LecteurVue", "Mode Manuel", nullptr));

        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Lancer diaporama", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter diaporama", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
