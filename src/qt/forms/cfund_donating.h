#ifndef CFUND_DONATING_H
#define CFUND_DONATING_H
#include "ui_cfund_donating.h"

#include <QDialog>
#include <QUrl>
#include <QDesktopServices>

namespace Ui {
class CFund_Donating;
}

class CFund_Donating : public QDialog
{
    Q_OBJECT

public:
    explicit CFund_Voting(QWidget *parent = 0, bool fPaymentRequests = false);
    ~CFund_Donating();

    void Refresh();

    QString selected;

public Q_SLOTS:
    void closeDialog();
    void voteYes();
    void voteNo();
    void stopVoting();
    void viewDetails();
    void switchView();
    void selectedFromYes(QListWidgetItem* item);
    void selectedFromNo(QListWidgetItem* item);
    void selectedFromNotVoting(QListWidgetItem* item);
    void enableDisableButtons();
    void setSelection(QString selection);

private:
    Ui::CFund_Donating *ui;
    bool fSettings;
};

#endif // CFUND_DONATING_H
