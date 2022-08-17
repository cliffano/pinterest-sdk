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
 * OAICatalogsProductGroupUpdateRequest.h
 *
 * Request object for updating a product group.
 */

#ifndef OAICatalogsProductGroupUpdateRequest_H
#define OAICatalogsProductGroupUpdateRequest_H

#include <QJsonObject>

#include "OAICatalogsProductGroupFiltersAllOfRequest.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupUpdateRequest : public OAIObject {
public:
    OAICatalogsProductGroupUpdateRequest();
    OAICatalogsProductGroupUpdateRequest(QString json);
    ~OAICatalogsProductGroupUpdateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    bool isIsFeatured() const;
    void setIsFeatured(const bool &is_featured);
    bool is_is_featured_Set() const;
    bool is_is_featured_Valid() const;

    OAICatalogsProductGroupFiltersAllOfRequest getFilters() const;
    void setFilters(const OAICatalogsProductGroupFiltersAllOfRequest &filters);
    bool is_filters_Set() const;
    bool is_filters_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    bool is_featured;
    bool m_is_featured_isSet;
    bool m_is_featured_isValid;

    OAICatalogsProductGroupFiltersAllOfRequest filters;
    bool m_filters_isSet;
    bool m_filters_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupUpdateRequest)

#endif // OAICatalogsProductGroupUpdateRequest_H
