/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsProductGroupCreateRequest.h
 *
 * Request object for creating a product group.
 */

#ifndef OAICatalogsProductGroupCreateRequest_H
#define OAICatalogsProductGroupCreateRequest_H

#include <QJsonObject>

#include "OAICatalogsProductGroupFiltersAllOfRequest.h"
#include "OAIProduct_groups_create_request_feed_base_case.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsProductGroupFiltersAllOfRequest;

class OAICatalogsProductGroupCreateRequest : public OAIObject {
public:
    OAICatalogsProductGroupCreateRequest();
    OAICatalogsProductGroupCreateRequest(QString json);
    ~OAICatalogsProductGroupCreateRequest() override;

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

    QString getFeedId() const;
    void setFeedId(const QString &feed_id);
    bool is_feed_id_Set() const;
    bool is_feed_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    bool m_is_featured;
    bool m_is_featured_isSet;
    bool m_is_featured_isValid;

    OAICatalogsProductGroupFiltersAllOfRequest m_filters;
    bool m_filters_isSet;
    bool m_filters_isValid;

    QString m_feed_id;
    bool m_feed_id_isSet;
    bool m_feed_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupCreateRequest)

#endif // OAICatalogsProductGroupCreateRequest_H
