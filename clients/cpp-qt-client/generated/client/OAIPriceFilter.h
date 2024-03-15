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
 * OAIPriceFilter.h
 *
 * 
 */

#ifndef OAIPriceFilter_H
#define OAIPriceFilter_H

#include <QJsonObject>

#include "OAICatalogs_product_group_pricing_currency_criteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogs_product_group_pricing_currency_criteria;

class OAIPriceFilter : public OAIObject {
public:
    OAIPriceFilter();
    OAIPriceFilter(QString json);
    ~OAIPriceFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogs_product_group_pricing_currency_criteria getPrice() const;
    void setPrice(const OAICatalogs_product_group_pricing_currency_criteria &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogs_product_group_pricing_currency_criteria m_price;
    bool m_price_isSet;
    bool m_price_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPriceFilter)

#endif // OAIPriceFilter_H
