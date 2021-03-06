#ifndef DATABASE_H
#define DATABASE_H
#include <QObject>
#include <QString>
#include <QSettings>
#include <QSqlDatabase>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QSettings *setings, QObject *parent = nullptr);
    bool openDatabase();
private:
    QSqlDatabase db;
    QSettings *dbSet;
};

#endif // DATABASE_H
