#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QString>
#include <QSqlDatabase>
#include <QCoreApplication>
#include <QDir>

//---- Le variable global qui contient le chemin vers la base des données
static const QString pathToDB = "E:\\e-Coop\\database.db";

class DbManager
{
    public:
        DbManager();
        DbManager(const QString& path);
        ~DbManager();
        bool isOpen() const;

    private:
        QSqlDatabase db;
};

#endif // DBMANAGER_H
