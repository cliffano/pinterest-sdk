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
 * OAICurrencyFilter.h
 *
 * 
 */

#ifndef OAICurrencyFilter_H
#define OAICurrencyFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupCurrencyCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICurrencyFilter : public OAIObject {
public:
    OAICurrencyFilter();
    OAICurrencyFilter(QString json);
    ~OAICurrencyFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupCurrencyCriteria getCurrency() const;
    void setCurrency(const OAICatalogsProductGroupCurrencyCriteria &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupCurrencyCriteria m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICurrencyFilter)

#endif // OAICurrencyFilter_H
