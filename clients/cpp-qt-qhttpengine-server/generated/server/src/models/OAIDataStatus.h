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
 * OAIDataStatus.h
 *
 * Metrics availablity, e.g., \&quot;READY\&quot;.
 */

#ifndef OAIDataStatus_H
#define OAIDataStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDataStatus : public OAIEnum {
public:
    OAIDataStatus();
    OAIDataStatus(QString json);
    ~OAIDataStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIDataStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        PROCESSING, 
        READY, 
        ESTIMATE, 
        BEFORE_BUSINESS_CREATED, 
        BEFORE_DATA_RETENTION_PERIOD, 
        BEFORE_PIN_DATA_RETENTION_PERIOD, 
        BEFORE_METRIC_START_DATE, 
        BEFORE_CORE_METRIC_START_DATE, 
        BEFORE_PIN_FORMAT_METRIC_START_DATE, 
        BEFORE_AUDIENCE_METRIC_START_DATE, 
        BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE, 
        BEFORE_VIDEO_METRIC_START_DATE, 
        BEFORE_CONVERSION_METRIC_START_DATE, 
        PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD, 
        IN_BAD_TAG_DATE, 
        BEFORE_PUBLISHED_METRIC_START_DATE, 
        BEFORE_ASSIST_METRIC_START_DATE, 
        BEFORE_PIN_CREATED, 
        BEFORE_ACCOUNT_CLAIMED, 
        BEFORE_DEMOGRAPHIC_FILTERS_START_DATE, 
        AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD, 
        AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD, 
        BEFORE_PRODUCT_GROUP_FILTER_START_DATE
    };
    OAIDataStatus::eOAIDataStatus getValue() const;
    void setValue(const OAIDataStatus::eOAIDataStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIDataStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDataStatus)

#endif // OAIDataStatus_H
