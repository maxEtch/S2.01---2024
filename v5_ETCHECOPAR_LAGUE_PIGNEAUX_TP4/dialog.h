#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "lecteurvue.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    LecteurVue* getLecteurVue();
    void setLecteurVue(LecteurVue *w);

public slots:
    void reglageVitesse();

private:
    Ui::Dialog *ui;
    LecteurVue* _leLecteurVue; // Pointeur vers le lecteur vue
};

#endif // DIALOG_H
