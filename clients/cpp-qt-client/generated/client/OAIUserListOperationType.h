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
 * OAIUserListOperationType.h
 *
 * User list operation type (add or remove)
 */

#ifndef OAIUserListOperationType_H
#define OAIUserListOperationType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserListOperationType : public OAIEnum {
public:
    OAIUserListOperationType();
    OAIUserListOperationType(QString json);
    ~OAIUserListOperationType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIUserListOperationType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ADD, 
        REMOVE
    };
    OAIUserListOperationType::eOAIUserListOperationType getValue() const;
    void setValue(const OAIUserListOperationType::eOAIUserListOperationType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIUserListOperationType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserListOperationType)

#endif // OAIUserListOperationType_H
