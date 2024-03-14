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
 * OAIAdsAnalyticsCreateAsyncResponse.h
 *
 * 
 */

#ifndef OAIAdsAnalyticsCreateAsyncResponse_H
#define OAIAdsAnalyticsCreateAsyncResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsAnalyticsCreateAsyncResponse : public OAIObject {
public:
    OAIAdsAnalyticsCreateAsyncResponse();
    OAIAdsAnalyticsCreateAsyncResponse(QString json);
    ~OAIAdsAnalyticsCreateAsyncResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getReportStatus() const;
    void setReportStatus(const QString &report_status);
    bool is_report_status_Set() const;
    bool is_report_status_Valid() const;

    QString getToken() const;
    void setToken(const QString &token);
    bool is_token_Set() const;
    bool is_token_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_report_status;
    bool m_report_status_isSet;
    bool m_report_status_isValid;

    QString m_token;
    bool m_token_isSet;
    bool m_token_isValid;

    QString m_message;
    bool m_message_isSet;
    bool m_message_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsCreateAsyncResponse)

#endif // OAIAdsAnalyticsCreateAsyncResponse_H
