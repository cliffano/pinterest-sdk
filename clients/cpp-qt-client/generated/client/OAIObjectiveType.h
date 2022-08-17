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
 * OAIObjectiveType.h
 *
 * Campaign objective type.
 */

#ifndef OAIObjectiveType_H
#define OAIObjectiveType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIObjectiveType : public OAIEnum {
public:
    OAIObjectiveType();
    OAIObjectiveType(QString json);
    ~OAIObjectiveType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIObjectiveType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AWARENESS, 
        CONSIDERATION, 
        VIDEO_VIEW, 
        WEB_CONVERSION, 
        CATALOG_SALES, 
        WEB_SESSIONS, 
        AWARENESS_RESERVED, 
        ENGAGEMENT
    };
    OAIObjectiveType::eOAIObjectiveType getValue() const;
    void setValue(const OAIObjectiveType::eOAIObjectiveType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIObjectiveType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIObjectiveType)

#endif // OAIObjectiveType_H
