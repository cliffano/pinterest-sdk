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
 * OAICatalogsProductGroupFiltersRequest.h
 *
 * Object holding a group of filters for request on catalog product group. This is a distinct schema It is not possible to create or update a Product Group with empty filters. But some automatically generated Product Groups might have empty filters.
 */

#ifndef OAICatalogsProductGroupFiltersRequest_H
#define OAICatalogsProductGroupFiltersRequest_H

#include <QJsonObject>

#include "OAICatalogsProductGroupFilterKeys.h"
#include "OAICatalogsProductGroupFiltersRequest_anyOf.h"
#include "OAICatalogsProductGroupFiltersRequest_anyOf_1.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsProductGroupFilterKeys;

class OAICatalogsProductGroupFiltersRequest : public OAIObject {
public:
    OAICatalogsProductGroupFiltersRequest();
    OAICatalogsProductGroupFiltersRequest(QString json);
    ~OAICatalogsProductGroupFiltersRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsProductGroupFilterKeys> getAnyOf() const;
    void setAnyOf(const QList<OAICatalogsProductGroupFilterKeys> &any_of);
    bool is_any_of_Set() const;
    bool is_any_of_Valid() const;

    QList<OAICatalogsProductGroupFilterKeys> getAllOf() const;
    void setAllOf(const QList<OAICatalogsProductGroupFilterKeys> &all_of);
    bool is_all_of_Set() const;
    bool is_all_of_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsProductGroupFilterKeys> m_any_of;
    bool m_any_of_isSet;
    bool m_any_of_isValid;

    QList<OAICatalogsProductGroupFilterKeys> m_all_of;
    bool m_all_of_isSet;
    bool m_all_of_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupFiltersRequest)

#endif // OAICatalogsProductGroupFiltersRequest_H
