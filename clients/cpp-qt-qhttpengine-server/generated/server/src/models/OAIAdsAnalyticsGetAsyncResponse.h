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
 * OAIAdsAnalyticsGetAsyncResponse.h
 *
 * 
 */

#ifndef OAIAdsAnalyticsGetAsyncResponse_H
#define OAIAdsAnalyticsGetAsyncResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsAnalyticsGetAsyncResponse : public OAIObject {
public:
    OAIAdsAnalyticsGetAsyncResponse();
    OAIAdsAnalyticsGetAsyncResponse(QString json);
    ~OAIAdsAnalyticsGetAsyncResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getReportStatus() const;
    void setReportStatus(const QString &report_status);
    bool is_report_status_Set() const;
    bool is_report_status_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    double getSize() const;
    void setSize(const double &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString report_status;
    bool m_report_status_isSet;
    bool m_report_status_isValid;

    QString url;
    bool m_url_isSet;
    bool m_url_isValid;

    double size;
    bool m_size_isSet;
    bool m_size_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsGetAsyncResponse)

#endif // OAIAdsAnalyticsGetAsyncResponse_H
