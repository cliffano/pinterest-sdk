/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * GenderFilter.h
 *
 * 
 */

#ifndef GenderFilter_H_
#define GenderFilter_H_


#include "CatalogsProductGroupMultipleStringCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  GenderFilter
{
public:
    GenderFilter();
    virtual ~GenderFilter() = default;


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

    bool operator==(const GenderFilter& rhs) const;
    bool operator!=(const GenderFilter& rhs) const;

    /////////////////////////////////////////////
    /// GenderFilter members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria getGENDER() const;
    void setGENDER(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value);

    friend void to_json(nlohmann::json& j, const GenderFilter& o);
    friend void from_json(const nlohmann::json& j, GenderFilter& o);
protected:
    org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria m_GENDER;

    
};

} // namespace org::openapitools::server::model

#endif /* GenderFilter_H_ */
