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
 * OAIAdsAnalyticsResponse_inner.h
 *
 * 
 */

#ifndef OAIAdsAnalyticsResponse_inner_H
#define OAIAdsAnalyticsResponse_inner_H

#include <QJsonObject>

#include "OAIAnyType.h"
#include <QDate>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsAnalyticsResponse_inner : public OAIObject {
public:
    OAIAdsAnalyticsResponse_inner();
    OAIAdsAnalyticsResponse_inner(QString json);
    ~OAIAdsAnalyticsResponse_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdId() const;
    void setAdId(const QString &ad_id);
    bool is_ad_id_Set() const;
    bool is_ad_id_Valid() const;

    QDate getDate() const;
    void setDate(const QDate &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_id;
    bool m_ad_id_isSet;
    bool m_ad_id_isValid;

    QDate date;
    bool m_date_isSet;
    bool m_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsResponse_inner)

#endif // OAIAdsAnalyticsResponse_inner_H
