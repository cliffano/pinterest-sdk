/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsProductGroupType.h
 *
 * Catalog product group type
 */

#ifndef OAICatalogsProductGroupType_H
#define OAICatalogsProductGroupType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupType : public OAIEnum {
public:
    OAICatalogsProductGroupType();
    OAICatalogsProductGroupType(QString json);
    ~OAICatalogsProductGroupType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICatalogsProductGroupType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        MERCHANT_CREATED, 
        ALL_PRODUCTS, 
        BEST_DEALS, 
        PINNER_FAVORITES, 
        TOP_SELLERS, 
        BACK_IN_STOCK, 
        NEW_ARRIVALS
    };
    OAICatalogsProductGroupType::eOAICatalogsProductGroupType getValue() const;
    void setValue(const OAICatalogsProductGroupType::eOAICatalogsProductGroupType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAICatalogsProductGroupType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupType)

#endif // OAICatalogsProductGroupType_H
