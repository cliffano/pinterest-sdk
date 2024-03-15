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
 * OAICountryFilter.h
 *
 * 
 */

#ifndef OAICountryFilter_H
#define OAICountryFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleCountriesCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICountryFilter : public OAIObject {
public:
    OAICountryFilter();
    OAICountryFilter(QString json);
    ~OAICountryFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleCountriesCriteria getCountry() const;
    void setCountry(const OAICatalogsProductGroupMultipleCountriesCriteria &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleCountriesCriteria m_country;
    bool m_country_isSet;
    bool m_country_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICountryFilter)

#endif // OAICountryFilter_H