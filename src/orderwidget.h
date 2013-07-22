#ifndef ORDERWIDGET_H
#define ORDERWIDGET_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QMap>
#include "dishescountwidget.h"
#include "orderhelper.h"
namespace Ui {
class OrderWidget;
}

class OrderWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit OrderWidget(QWidget *parent = 0);
    ~OrderWidget();
protected:
    void showEvent(QShowEvent *);
private slots:
    void on_disheTypeList_doubleClicked(const QModelIndex &index);

    void on_dishesList_doubleClicked(const QModelIndex &index);

    void on_toolButton_clicked();

    void on_toolButton_5_clicked();
    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_comboBox_2_activated(int index);

private:
    void showTotal();
private:
    Ui::OrderWidget *ui;
    QSqlQueryModel *m_dishesTypeModel;
    QSqlQueryModel *m_dishesModel;
    DishesCountWidget m_countWidget;
    QMap<int, DishesInfo> m_dishesInfo;
};

inline OrderWidget *orderWidget()
{
    static OrderWidget *w = NULL;
    if(w == NULL)
    {
        w = new OrderWidget();
    }
    return w;
}

#endif // ORDERWIDGET_H
