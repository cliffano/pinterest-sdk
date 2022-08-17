/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsProductGroupFiltersAllOfRequest_anyOf.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupFiltersAllOfRequest_anyOf_H
#define OAICatalogsProductGroupFiltersAllOfRequest_anyOf_H

#include <QJsonObject>

#include "OAICatalogsProductGroupFilterKeys.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupFiltersAllOfRequest_anyOf : public OAIObject {
public:
    OAICatalogsProductGroupFiltersAllOfRequest_anyOf();
    OAICatalogsProductGroupFiltersAllOfRequest_anyOf(QString json);
    ~OAICatalogsProductGroupFiltersAllOfRequest_anyOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsProductGroupFilterKeys> getAnyOf() const;
    void setAnyOf(const QList<OAICatalogsProductGroupFilterKeys> &any_of);
    bool is_any_of_Set() const;
    bool is_any_of_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsProductGroupFilterKeys> any_of;
    bool m_any_of_isSet;
    bool m_any_of_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupFiltersAllOfRequest_anyOf)

#endif // OAICatalogsProductGroupFiltersAllOfRequest_anyOf_H
