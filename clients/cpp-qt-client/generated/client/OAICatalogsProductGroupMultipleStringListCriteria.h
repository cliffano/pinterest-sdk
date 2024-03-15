/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsProductGroupMultipleStringListCriteria.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupMultipleStringListCriteria_H
#define OAICatalogsProductGroupMultipleStringListCriteria_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupMultipleStringListCriteria : public OAIObject {
public:
    OAICatalogsProductGroupMultipleStringListCriteria();
    OAICatalogsProductGroupMultipleStringListCriteria(QString json);
    ~OAICatalogsProductGroupMultipleStringListCriteria() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QList<QString>> getValues() const;
    void setValues(const QList<QList<QString>> &values);
    bool is_values_Set() const;
    bool is_values_Valid() const;

    bool isNegated() const;
    void setNegated(const bool &negated);
    bool is_negated_Set() const;
    bool is_negated_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QList<QString>> m_values;
    bool m_values_isSet;
    bool m_values_isValid;

    bool m_negated;
    bool m_negated_isSet;
    bool m_negated_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupMultipleStringListCriteria)

#endif // OAICatalogsProductGroupMultipleStringListCriteria_H
