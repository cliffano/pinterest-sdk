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
 * CustomLabel1Filter.h
 *
 * 
 */

#ifndef CustomLabel1Filter_H_
#define CustomLabel1Filter_H_


#include "CatalogsProductGroupMultipleStringCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CustomLabel1Filter
{
public:
    CustomLabel1Filter();
    virtual ~CustomLabel1Filter() = default;


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

    bool operator==(const CustomLabel1Filter& rhs) const;
    bool operator!=(const CustomLabel1Filter& rhs) const;

    /////////////////////////////////////////////
    /// CustomLabel1Filter members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL1() const;
    void setCUSTOMLABEL1(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value);

    friend  void to_json(nlohmann::json& j, const CustomLabel1Filter& o);
    friend  void from_json(const nlohmann::json& j, CustomLabel1Filter& o);
protected:
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria m_CUSTOM_LABEL_1;

    
};

} // namespace org::openapitools::server::model

#endif /* CustomLabel1Filter_H_ */
