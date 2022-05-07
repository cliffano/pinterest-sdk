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
 * CatalogsProductGroupPricingCriteria.h
 *
 * 
 */

#ifndef CatalogsProductGroupPricingCriteria_H_
#define CatalogsProductGroupPricingCriteria_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupPricingCriteria
{
public:
    CatalogsProductGroupPricingCriteria();
    virtual ~CatalogsProductGroupPricingCriteria() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const CatalogsProductGroupPricingCriteria& rhs) const;
    bool operator!=(const CatalogsProductGroupPricingCriteria& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsProductGroupPricingCriteria members

    /// <summary>
    /// 
    /// </summary>
    bool isInclusion() const;
    void setInclusion(bool const value);
    /// <summary>
    /// 
    /// </summary>
    double getValues() const;
    void setValues(double const value);
    /// <summary>
    /// 
    /// </summary>
    bool isNegated() const;
    void setNegated(bool const value);

    friend void to_json(nlohmann::json& j, const CatalogsProductGroupPricingCriteria& o);
    friend void from_json(const nlohmann::json& j, CatalogsProductGroupPricingCriteria& o);
protected:
    bool m_Inclusion;

    double m_Values;

    bool m_Negated;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsProductGroupPricingCriteria_H_ */
