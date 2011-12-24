#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include <QLineEdit>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>

class LoginForm : public QDialog
{
    Q_OBJECT
    
public:
    LoginForm();
    ~LoginForm();
    
private:
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QGroupBox *groupBoxIdentifiants;
    QVBoxLayout *layout;
    QGridLayout *layoutButtonsLogin;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonQuit;
};

#endif // LOGINFORM_H
