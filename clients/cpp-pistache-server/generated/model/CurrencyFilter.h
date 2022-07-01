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
 * CurrencyFilter.h
 *
 * 
 */

#ifndef CurrencyFilter_H_
#define CurrencyFilter_H_


#include "CatalogsProductGroupCurrencyCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CurrencyFilter
{
public:
    CurrencyFilter();
    virtual ~CurrencyFilter() = default;


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

    bool operator==(const CurrencyFilter& rhs) const;
    bool operator!=(const CurrencyFilter& rhs) const;

    /////////////////////////////////////////////
    /// CurrencyFilter members

    /// <summary>
    /// 
    /// </summary>
    CatalogsProductGroupCurrencyCriteria getCURRENCY() const;
    void setCURRENCY(CatalogsProductGroupCurrencyCriteria const& value);

    friend void to_json(nlohmann::json& j, const CurrencyFilter& o);
    friend void from_json(const nlohmann::json& j, CurrencyFilter& o);
protected:
    CatalogsProductGroupCurrencyCriteria m_CURRENCY;

    
};

} // namespace org::openapitools::server::model

#endif /* CurrencyFilter_H_ */
