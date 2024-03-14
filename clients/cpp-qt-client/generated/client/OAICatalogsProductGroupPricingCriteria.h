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
 * OAICatalogsProductGroupPricingCriteria.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupPricingCriteria_H
#define OAICatalogsProductGroupPricingCriteria_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupPricingCriteria : public OAIObject {
public:
    OAICatalogsProductGroupPricingCriteria();
    OAICatalogsProductGroupPricingCriteria(QString json);
    ~OAICatalogsProductGroupPricingCriteria() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isInclusion() const;
    void setInclusion(const bool &inclusion);
    bool is_inclusion_Set() const;
    bool is_inclusion_Valid() const;

    double getValues() const;
    void setValues(const double &values);
    bool is_values_Set() const;
    bool is_values_Valid() const;

    bool isNegated() const;
    void setNegated(const bool &negated);
    bool is_negated_Set() const;
    bool is_negated_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_inclusion;
    bool m_inclusion_isSet;
    bool m_inclusion_isValid;

    double m_values;
    bool m_values_isSet;
    bool m_values_isValid;

    bool m_negated;
    bool m_negated_isSet;
    bool m_negated_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupPricingCriteria)

#endif // OAICatalogsProductGroupPricingCriteria_H
