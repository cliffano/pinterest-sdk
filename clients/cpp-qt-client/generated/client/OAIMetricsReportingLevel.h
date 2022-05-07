/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIMetricsReportingLevel.h
 *
 * Level of the reporting request
 */

#ifndef OAIMetricsReportingLevel_H
#define OAIMetricsReportingLevel_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMetricsReportingLevel : public OAIEnum {
public:
    OAIMetricsReportingLevel();
    OAIMetricsReportingLevel(QString json);
    ~OAIMetricsReportingLevel() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIMetricsReportingLevel {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ADVERTISER, 
        ADVERTISER_TARGETING, 
        CAMPAIGN, 
        CAMPAIGN_TARGETING, 
        AD_GROUP, 
        AD_GROUP_TARGETING, 
        PIN_PROMOTION, 
        PIN_PROMOTION_TARGETING, 
        KEYWORD, 
        PRODUCT_GROUP, 
        PRODUCT_GROUP_TARGETING, 
        PRODUCT_ITEM
    };
    OAIMetricsReportingLevel::eOAIMetricsReportingLevel getValue() const;
    void setValue(const OAIMetricsReportingLevel::eOAIMetricsReportingLevel& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIMetricsReportingLevel m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMetricsReportingLevel)

#endif // OAIMetricsReportingLevel_H
