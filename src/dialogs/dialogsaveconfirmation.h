//======================================================
// Name        : dialogsaveconfirmation.h
// Author      : Michael Louie
// Description : Header for the save confirmation dialog
//======================================================
#ifndef DIALOGSAVECONFIRMATION_H
#define DIALOGSAVECONFIRMATION_H
#include <QDialog>

namespace Ui {
    class DialogSaveConfirmation;
}

class DialogSaveConfirmation : public QDialog
{
    Q_OBJECT

    public:
        explicit DialogSaveConfirmation(QWidget *parent = 0);
        ~DialogSaveConfirmation();
        int saveAction;
        int getSaveAction();

    private slots:
        void on_pushButtonSave_clicked();
        void on_pushButtonSaveAs_clicked();
        void on_pushButtonDoNotSave_clicked();
        void on_pushButtonCancel_clicked();

    private:
        Ui::DialogSaveConfirmation *ui;
    };

#endif // DIALOGSAVECONFIRMATION_H
