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
 * OAIIntegrationLog.h
 *
 * Schema for log sent from an integration application.
 */

#ifndef OAIIntegrationLog_H
#define OAIIntegrationLog_H

#include <QJsonObject>

#include "OAIIntegrationLogClientError.h"
#include "OAIIntegrationLogClientRequest.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIIntegrationLog : public OAIObject {
public:
    OAIIntegrationLog();
    OAIIntegrationLog(QString json);
    ~OAIIntegrationLog() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getClientTimestamp() const;
    void setClientTimestamp(const qint32 &client_timestamp);
    bool is_client_timestamp_Set() const;
    bool is_client_timestamp_Valid() const;

    QString getEventType() const;
    void setEventType(const QString &event_type);
    bool is_event_type_Set() const;
    bool is_event_type_Valid() const;

    QString getLogLevel() const;
    void setLogLevel(const QString &log_level);
    bool is_log_level_Set() const;
    bool is_log_level_Valid() const;

    QString getExternalBusinessId() const;
    void setExternalBusinessId(const QString &external_business_id);
    bool is_external_business_id_Set() const;
    bool is_external_business_id_Valid() const;

    QString getAdvertiserId() const;
    void setAdvertiserId(const QString &advertiser_id);
    bool is_advertiser_id_Set() const;
    bool is_advertiser_id_Valid() const;

    QString getMerchantId() const;
    void setMerchantId(const QString &merchant_id);
    bool is_merchant_id_Set() const;
    bool is_merchant_id_Valid() const;

    QString getTagId() const;
    void setTagId(const QString &tag_id);
    bool is_tag_id_Set() const;
    bool is_tag_id_Valid() const;

    QString getFeedProfileId() const;
    void setFeedProfileId(const QString &feed_profile_id);
    bool is_feed_profile_id_Set() const;
    bool is_feed_profile_id_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    QString getAppVersionNumber() const;
    void setAppVersionNumber(const QString &app_version_number);
    bool is_app_version_number_Set() const;
    bool is_app_version_number_Valid() const;

    QString getPlatformVersionNumber() const;
    void setPlatformVersionNumber(const QString &platform_version_number);
    bool is_platform_version_number_Set() const;
    bool is_platform_version_number_Valid() const;

    OAIIntegrationLogClientError getError() const;
    void setError(const OAIIntegrationLogClientError &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    OAIIntegrationLogClientRequest getRequest() const;
    void setRequest(const OAIIntegrationLogClientRequest &request);
    bool is_request_Set() const;
    bool is_request_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 client_timestamp;
    bool m_client_timestamp_isSet;
    bool m_client_timestamp_isValid;

    QString event_type;
    bool m_event_type_isSet;
    bool m_event_type_isValid;

    QString log_level;
    bool m_log_level_isSet;
    bool m_log_level_isValid;

    QString external_business_id;
    bool m_external_business_id_isSet;
    bool m_external_business_id_isValid;

    QString advertiser_id;
    bool m_advertiser_id_isSet;
    bool m_advertiser_id_isValid;

    QString merchant_id;
    bool m_merchant_id_isSet;
    bool m_merchant_id_isValid;

    QString tag_id;
    bool m_tag_id_isSet;
    bool m_tag_id_isValid;

    QString feed_profile_id;
    bool m_feed_profile_id_isSet;
    bool m_feed_profile_id_isValid;

    QString message;
    bool m_message_isSet;
    bool m_message_isValid;

    QString app_version_number;
    bool m_app_version_number_isSet;
    bool m_app_version_number_isValid;

    QString platform_version_number;
    bool m_platform_version_number_isSet;
    bool m_platform_version_number_isValid;

    OAIIntegrationLogClientError error;
    bool m_error_isSet;
    bool m_error_isValid;

    OAIIntegrationLogClientRequest request;
    bool m_request_isSet;
    bool m_request_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIIntegrationLog)

#endif // OAIIntegrationLog_H
