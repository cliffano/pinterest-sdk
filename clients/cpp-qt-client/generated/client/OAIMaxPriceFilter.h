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
 * OAIMaxPriceFilter.h
 *
 * 
 */

#ifndef OAIMaxPriceFilter_H
#define OAIMaxPriceFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupPricingCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMaxPriceFilter : public OAIObject {
public:
    OAIMaxPriceFilter();
    OAIMaxPriceFilter(QString json);
    ~OAIMaxPriceFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupPricingCriteria getMaxPrice() const;
    void setMaxPrice(const OAICatalogsProductGroupPricingCriteria &max_price);
    bool is_max_price_Set() const;
    bool is_max_price_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupPricingCriteria max_price;
    bool m_max_price_isSet;
    bool m_max_price_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMaxPriceFilter)

#endif // OAIMaxPriceFilter_H
