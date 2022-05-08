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
 * OAIPacingDeliveryType.h
 *
 * Ad group pacing delivery type
 */

#ifndef OAIPacingDeliveryType_H
#define OAIPacingDeliveryType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPacingDeliveryType : public OAIEnum {
public:
    OAIPacingDeliveryType();
    OAIPacingDeliveryType(QString json);
    ~OAIPacingDeliveryType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIPacingDeliveryType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        STANDARD, 
        ACCELERATED
    };
    OAIPacingDeliveryType::eOAIPacingDeliveryType getValue() const;
    void setValue(const OAIPacingDeliveryType::eOAIPacingDeliveryType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIPacingDeliveryType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPacingDeliveryType)

#endif // OAIPacingDeliveryType_H