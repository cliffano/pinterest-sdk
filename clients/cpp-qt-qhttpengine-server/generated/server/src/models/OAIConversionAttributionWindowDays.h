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
 * OAIConversionAttributionWindowDays.h
 *
 * 
 */

#ifndef OAIConversionAttributionWindowDays_H
#define OAIConversionAttributionWindowDays_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionAttributionWindowDays : public OAIEnum {
public:
    OAIConversionAttributionWindowDays();
    OAIConversionAttributionWindowDays(QString json);
    ~OAIConversionAttributionWindowDays() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIConversionAttributionWindowDays : int {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _1, 
        _7, 
        _30, 
        _60
    };
    OAIConversionAttributionWindowDays::eOAIConversionAttributionWindowDays getValue() const;
    void setValue(const OAIConversionAttributionWindowDays::eOAIConversionAttributionWindowDays& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIConversionAttributionWindowDays m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionAttributionWindowDays)

#endif // OAIConversionAttributionWindowDays_H
