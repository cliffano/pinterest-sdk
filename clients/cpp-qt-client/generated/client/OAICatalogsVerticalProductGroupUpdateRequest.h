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
 * OAICatalogsVerticalProductGroupUpdateRequest.h
 *
 * Request object for updating a hotel product group.
 */

#ifndef OAICatalogsVerticalProductGroupUpdateRequest_H
#define OAICatalogsVerticalProductGroupUpdateRequest_H

#include <QJsonObject>

#include "OAICatalogsHotelProductGroupFilters.h"
#include "OAICatalogsHotelProductGroupUpdateRequest.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsHotelProductGroupFilters;

class OAICatalogsVerticalProductGroupUpdateRequest : public OAIObject {
public:
    OAICatalogsVerticalProductGroupUpdateRequest();
    OAICatalogsVerticalProductGroupUpdateRequest(QString json);
    ~OAICatalogsVerticalProductGroupUpdateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCatalogType() const;
    void setCatalogType(const QString &catalog_type);
    bool is_catalog_type_Set() const;
    bool is_catalog_type_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAICatalogsHotelProductGroupFilters getFilters() const;
    void setFilters(const OAICatalogsHotelProductGroupFilters &filters);
    bool is_filters_Set() const;
    bool is_filters_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_catalog_type;
    bool m_catalog_type_isSet;
    bool m_catalog_type_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAICatalogsHotelProductGroupFilters m_filters;
    bool m_filters_isSet;
    bool m_filters_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsVerticalProductGroupUpdateRequest)

#endif // OAICatalogsVerticalProductGroupUpdateRequest_H
