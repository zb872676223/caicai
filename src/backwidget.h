#ifndef BACKWIDGET_H
#define BACKWIDGET_H

#include <QWidget>
#include <QSqlQueryModel>
namespace Ui {
class BackWidget;
}

class BackWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit BackWidget(QWidget *parent = 0);
    ~BackWidget();
    void showData(const QString &tableId);
private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::BackWidget *ui;
    QSqlQueryModel m_model;
};


inline BackWidget *backWidget()
{
    static BackWidget *w = NULL;
    if(w == NULL)
    {
        w = new BackWidget();
    }
    return w;
}

#endif // BACKWIDGET_H