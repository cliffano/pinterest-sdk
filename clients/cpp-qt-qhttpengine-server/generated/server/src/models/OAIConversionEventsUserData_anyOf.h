/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIConversionEventsUserData_anyOf.h
 *
 * 
 */

#ifndef OAIConversionEventsUserData_anyOf_H
#define OAIConversionEventsUserData_anyOf_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionEventsUserData_anyOf : public OAIObject {
public:
    OAIConversionEventsUserData_anyOf();
    OAIConversionEventsUserData_anyOf(QString json);
    ~OAIConversionEventsUserData_anyOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getEm() const;
    void setEm(const QList<QString> &em);
    bool is_em_Set() const;
    bool is_em_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> em;
    bool m_em_isSet;
    bool m_em_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionEventsUserData_anyOf)

#endif // OAIConversionEventsUserData_anyOf_H
