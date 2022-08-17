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
 * OAICatalogsListProductsByFilterRequest.h
 *
 * Request object to list products for a given product group filter.
 */

#ifndef OAICatalogsListProductsByFilterRequest_H
#define OAICatalogsListProductsByFilterRequest_H

#include <QJsonObject>

#include "OAICatalogsListProductsByFilterRequest_oneOf.h"
#include "OAICatalogsProductGroupFilters.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsListProductsByFilterRequest : public OAIObject {
public:
    OAICatalogsListProductsByFilterRequest();
    OAICatalogsListProductsByFilterRequest(QString json);
    ~OAICatalogsListProductsByFilterRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getFeedId() const;
    void setFeedId(const QString &feed_id);
    bool is_feed_id_Set() const;
    bool is_feed_id_Valid() const;

    OAICatalogsProductGroupFilters getFilters() const;
    void setFilters(const OAICatalogsProductGroupFilters &filters);
    bool is_filters_Set() const;
    bool is_filters_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString feed_id;
    bool m_feed_id_isSet;
    bool m_feed_id_isValid;

    OAICatalogsProductGroupFilters filters;
    bool m_filters_isSet;
    bool m_filters_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsListProductsByFilterRequest)

#endif // OAICatalogsListProductsByFilterRequest_H
