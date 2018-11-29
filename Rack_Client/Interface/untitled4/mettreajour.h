#ifndef METTREAJOUR_H
#define METTREAJOUR_H

#include <QDialog>

namespace Ui {
class MettreAJour;
}

class MettreAJour : public QDialog
{
    Q_OBJECT

public:
    explicit MettreAJour(QWidget *parent = nullptr);
    ~MettreAJour();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MettreAJour *ui;
};

#endif // METTREAJOUR_H
