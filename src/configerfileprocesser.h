#ifndef CONFIGERFILEPROCESSER_H
#define CONFIGERFILEPROCESSER_H

#include <QObject>

class ConfigerFileProcesser : public QObject
{
    Q_OBJECT
public:
    explicit ConfigerFileProcesser(QObject *parent = 0);
private:
    /********************�������********************/
    //��ӡ����ǩ��Printer��
    //��ӡ���ɣ�
    QString m_printerIp;
    //��ӡ����д�˿�
    QString m_writerPort;
    //��ӡ��ȡ״̬�˿�
    QString m_statePort;
public:
    bool createInstance();
public:
    QString printerIp();
    QString writerPort();
    QString statePort();
    void setPrinterIp(const QString &data);
    void setWriterPort(const QString &data);
    void setStatePort(const QString &data);
};
ConfigerFileProcesser *getConfigerFileInstance();
#endif // CONFIGERFILEPROCESSER_H