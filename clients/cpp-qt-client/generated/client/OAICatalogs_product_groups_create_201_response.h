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
 * OAICatalogs_product_groups_create_201_response.h
 *
 * 
 */

#ifndef OAICatalogs_product_groups_create_201_response_H
#define OAICatalogs_product_groups_create_201_response_H

#include <QJsonObject>

#include "OAICatalogsProductGroup.h"
#include "OAICatalogsProductGroupFilters.h"
#include "OAICatalogsProductGroupStatus.h"
#include "OAICatalogsProductGroupType.h"
#include "OAICatalogsVerticalProductGroup.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsProductGroupFilters;

class OAICatalogs_product_groups_create_201_response : public OAIObject {
public:
    OAICatalogs_product_groups_create_201_response();
    OAICatalogs_product_groups_create_201_response(QString json);
    ~OAICatalogs_product_groups_create_201_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAICatalogsProductGroupFilters getFilters() const;
    void setFilters(const OAICatalogsProductGroupFilters &filters);
    bool is_filters_Set() const;
    bool is_filters_Valid() const;

    bool isIsFeatured() const;
    void setIsFeatured(const bool &is_featured);
    bool is_is_featured_Set() const;
    bool is_is_featured_Valid() const;

    OAICatalogsProductGroupType getType() const;
    void setType(const OAICatalogsProductGroupType &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAICatalogsProductGroupStatus getStatus() const;
    void setStatus(const OAICatalogsProductGroupStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    qint32 getCreatedAt() const;
    void setCreatedAt(const qint32 &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    qint32 getUpdatedAt() const;
    void setUpdatedAt(const qint32 &updated_at);
    bool is_updated_at_Set() const;
    bool is_updated_at_Valid() const;

    QString getFeedId() const;
    void setFeedId(const QString &feed_id);
    bool is_feed_id_Set() const;
    bool is_feed_id_Valid() const;

    QString getCatalogType() const;
    void setCatalogType(const QString &catalog_type);
    bool is_catalog_type_Set() const;
    bool is_catalog_type_Valid() const;

    QString getCatalogId() const;
    void setCatalogId(const QString &catalog_id);
    bool is_catalog_id_Set() const;
    bool is_catalog_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAICatalogsProductGroupFilters m_filters;
    bool m_filters_isSet;
    bool m_filters_isValid;

    bool m_is_featured;
    bool m_is_featured_isSet;
    bool m_is_featured_isValid;

    OAICatalogsProductGroupType m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAICatalogsProductGroupStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 m_created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    qint32 m_updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;

    QString m_feed_id;
    bool m_feed_id_isSet;
    bool m_feed_id_isValid;

    QString m_catalog_type;
    bool m_catalog_type_isSet;
    bool m_catalog_type_isValid;

    QString m_catalog_id;
    bool m_catalog_id_isSet;
    bool m_catalog_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogs_product_groups_create_201_response)

#endif // OAICatalogs_product_groups_create_201_response_H