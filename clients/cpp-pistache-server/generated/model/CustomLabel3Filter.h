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
 * CustomLabel3Filter.h
 *
 * 
 */

#ifndef CustomLabel3Filter_H_
#define CustomLabel3Filter_H_


#include "CatalogsProductGroupMultipleStringCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CustomLabel3Filter
{
public:
    CustomLabel3Filter();
    virtual ~CustomLabel3Filter() = default;


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

    bool operator==(const CustomLabel3Filter& rhs) const;
    bool operator!=(const CustomLabel3Filter& rhs) const;

    /////////////////////////////////////////////
    /// CustomLabel3Filter members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL3() const;
    void setCUSTOMLABEL3(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value);

    friend void to_json(nlohmann::json& j, const CustomLabel3Filter& o);
    friend void from_json(const nlohmann::json& j, CustomLabel3Filter& o);
protected:
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria m_CUSTOM_LABEL_3;

    
};

} // namespace org::openapitools::server::model

#endif /* CustomLabel3Filter_H_ */
