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
 * OAIPlacementGroupType.h
 *
 * Campaign placement group type
 */

#ifndef OAIPlacementGroupType_H
#define OAIPlacementGroupType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPlacementGroupType : public OAIEnum {
public:
    OAIPlacementGroupType();
    OAIPlacementGroupType(QString json);
    ~OAIPlacementGroupType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIPlacementGroupType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ALL, 
        SEARCH, 
        BROWSE, 
        OTHER
    };
    OAIPlacementGroupType::eOAIPlacementGroupType getValue() const;
    void setValue(const OAIPlacementGroupType::eOAIPlacementGroupType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIPlacementGroupType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPlacementGroupType)

#endif // OAIPlacementGroupType_H
