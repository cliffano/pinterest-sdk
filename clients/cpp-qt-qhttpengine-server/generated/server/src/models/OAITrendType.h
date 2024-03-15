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
 * OAITrendType.h
 *
 * 
 */

#ifndef OAITrendType_H
#define OAITrendType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITrendType : public OAIEnum {
public:
    OAITrendType();
    OAITrendType(QString json);
    ~OAITrendType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAITrendType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        GROWING, 
        MONTHLY, 
        YEARLY, 
        SEASONAL
    };
    OAITrendType::eOAITrendType getValue() const;
    void setValue(const OAITrendType::eOAITrendType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAITrendType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITrendType)

#endif // OAITrendType_H
