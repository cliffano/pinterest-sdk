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
 * OAINonNullableProductAvailabilityType.h
 *
 * Product availability.
 */

#ifndef OAINonNullableProductAvailabilityType_H
#define OAINonNullableProductAvailabilityType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINonNullableProductAvailabilityType : public OAIEnum {
public:
    OAINonNullableProductAvailabilityType();
    OAINonNullableProductAvailabilityType(QString json);
    ~OAINonNullableProductAvailabilityType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAINonNullableProductAvailabilityType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        IN_STOCK, 
        OUT_OF_STOCK, 
        PREORDER
    };
    OAINonNullableProductAvailabilityType::eOAINonNullableProductAvailabilityType getValue() const;
    void setValue(const OAINonNullableProductAvailabilityType::eOAINonNullableProductAvailabilityType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAINonNullableProductAvailabilityType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINonNullableProductAvailabilityType)

#endif // OAINonNullableProductAvailabilityType_H
