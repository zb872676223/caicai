#include "functionwidget.h"
#include "ui_functionwidget.h"
#include <QDebug>
#include "dinnerwidget.h"
#include "vipwidget.h"
#include "checkwidget.h"
#include "orderwidget.h"
#include "tablewidget.h"
#include "statiswidget.h"
FunctionWidget::FunctionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionWidget)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(tableWidget());
    ui->stackedWidget->addWidget(vipWidget());
    ui->stackedWidget->addWidget(checkWidget());
    ui->stackedWidget->addWidget(statisWidget());
    ui->stackedWidget->addWidget(orderWidget());

}

FunctionWidget::~FunctionWidget()
{
    delete ui;
}

void FunctionWidget::changePage(int index)
{
    if(index >= ui->stackedWidget->count())
    {
        return;
    }

    ui->stackedWidget->setCurrentIndex(index);
}

bool FunctionWidget::winEvent(MSG *message, long *result)
{

}
