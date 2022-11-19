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
 * OAIAdsAnalyticsTargetingType.h
 *
 * Reporting targeting type
 */

#ifndef OAIAdsAnalyticsTargetingType_H
#define OAIAdsAnalyticsTargetingType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsAnalyticsTargetingType : public OAIEnum {
public:
    OAIAdsAnalyticsTargetingType();
    OAIAdsAnalyticsTargetingType(QString json);
    ~OAIAdsAnalyticsTargetingType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIAdsAnalyticsTargetingType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        KEYWORD, 
        APPTYPE, 
        GENDER, 
        LOCATION, 
        PLACEMENT, 
        COUNTRY, 
        TARGETED_INTEREST, 
        PINNER_INTEREST, 
        AUDIENCE_INCLUDE, 
        AUDIENCE_EXCLUDE, 
        GEO, 
        AGE_BUCKET, 
        REGION
    };
    OAIAdsAnalyticsTargetingType::eOAIAdsAnalyticsTargetingType getValue() const;
    void setValue(const OAIAdsAnalyticsTargetingType::eOAIAdsAnalyticsTargetingType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIAdsAnalyticsTargetingType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsTargetingType)

#endif // OAIAdsAnalyticsTargetingType_H
