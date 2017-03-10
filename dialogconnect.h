#ifndef DIALOGCONNECT_H
#define DIALOGCONNECT_H
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QVector>
#include <QDebug>
#include <QTableWidgetItem>
#include <QTextStream>
#include <QSqlRecord>
 #include <QFileDialog>

namespace Ui {
class DialogConnect;
}

class DialogConnect : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConnect(QWidget *parent = 0);

    ~DialogConnect();
    /**
     * @brief getMdp
     * Allow to get the password entered in window connection
     * @return the password
     */
    QString getMdp();
    /**
     * @brief getId
     * allow to get the login entered in window connection
     * @return the id(login)
     */
    QString getId();
    /**
     * @brief setMessage
     * allow to set the message to show
     */
    void setMessage();
private:
    Ui::DialogConnect *ui;
};

#endif // DIALOGCONNECT_H
