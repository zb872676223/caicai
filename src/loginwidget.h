#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QDialog>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QDialog
{
    Q_OBJECT
public:
    enum AuthType
    {
        Login = 0,          //登录
        BackDish = 1,
        ShowReport = 2,      //查看报表
        OperViPCard          //操作会员卡,只需要查看是否有该操作员
    };
public:
    explicit LoginWidget(QWidget *parent = 0);
    void setAuthType(AuthType type)
    {
        m_authType = type;
    }

    ~LoginWidget();
    int authId();
private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginWidget *ui;
    int m_userId;
    AuthType m_authType;
};

#endif // LOGINWIDGET_H
