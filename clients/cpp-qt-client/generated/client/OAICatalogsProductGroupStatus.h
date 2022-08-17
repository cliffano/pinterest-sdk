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
 * OAICatalogsProductGroupStatus.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupStatus_H
#define OAICatalogsProductGroupStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupStatus : public OAIEnum {
public:
    OAICatalogsProductGroupStatus();
    OAICatalogsProductGroupStatus(QString json);
    ~OAICatalogsProductGroupStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICatalogsProductGroupStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ACTIVE, 
        INACTIVE
    };
    OAICatalogsProductGroupStatus::eOAICatalogsProductGroupStatus getValue() const;
    void setValue(const OAICatalogsProductGroupStatus::eOAICatalogsProductGroupStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAICatalogsProductGroupStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupStatus)

#endif // OAICatalogsProductGroupStatus_H
