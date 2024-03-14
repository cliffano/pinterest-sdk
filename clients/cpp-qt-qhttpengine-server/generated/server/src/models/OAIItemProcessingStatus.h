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
 * OAIItemProcessingStatus.h
 *
 * The status of the item processing record
 */

#ifndef OAIItemProcessingStatus_H
#define OAIItemProcessingStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemProcessingStatus : public OAIEnum {
public:
    OAIItemProcessingStatus();
    OAIItemProcessingStatus(QString json);
    ~OAIItemProcessingStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIItemProcessingStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        SUCCESS, 
        FAILURE, 
        PROCESSING
    };
    OAIItemProcessingStatus::eOAIItemProcessingStatus getValue() const;
    void setValue(const OAIItemProcessingStatus::eOAIItemProcessingStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIItemProcessingStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemProcessingStatus)

#endif // OAIItemProcessingStatus_H
