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
 * OAIBatchOperationStatus.h
 *
 * The status of the operation performed by the batch
 */

#ifndef OAIBatchOperationStatus_H
#define OAIBatchOperationStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBatchOperationStatus : public OAIEnum {
public:
    OAIBatchOperationStatus();
    OAIBatchOperationStatus(QString json);
    ~OAIBatchOperationStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIBatchOperationStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        PROCESSING, 
        COMPLETED
    };
    OAIBatchOperationStatus::eOAIBatchOperationStatus getValue() const;
    void setValue(const OAIBatchOperationStatus::eOAIBatchOperationStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIBatchOperationStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBatchOperationStatus)

#endif // OAIBatchOperationStatus_H
