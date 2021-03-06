#pragma once

#include "ISavable.h"
#include "utils/Types.h"

#include <QObject>
#include <QString>

namespace LPP
{
    
    class Settings: public QObject, public ISavable
    {
        Q_OBJECT
        
    public:
        Settings();
        virtual ~Settings();
        
        //virtual void setParam(const QString&, const QString&);
        //virtual QVector<QPair<QString, QString>> getParams();
        
        virtual QJsonObject saveToJson();
        virtual void loadFromJson(const QJsonObject&);
        
    };

    //#define DEBUG 1
}
