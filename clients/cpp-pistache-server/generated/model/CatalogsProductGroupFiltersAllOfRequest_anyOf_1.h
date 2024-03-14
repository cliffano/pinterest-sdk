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
 * CatalogsProductGroupFiltersAllOfRequest_anyOf_1.h
 *
 * 
 */

#ifndef CatalogsProductGroupFiltersAllOfRequest_anyOf_1_H_
#define CatalogsProductGroupFiltersAllOfRequest_anyOf_1_H_


#include "CatalogsProductGroupFilterKeys.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupFiltersAllOfRequest_anyOf_1
{
public:
    CatalogsProductGroupFiltersAllOfRequest_anyOf_1();
    virtual ~CatalogsProductGroupFiltersAllOfRequest_anyOf_1() = default;


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

    bool operator==(const CatalogsProductGroupFiltersAllOfRequest_anyOf_1& rhs) const;
    bool operator!=(const CatalogsProductGroupFiltersAllOfRequest_anyOf_1& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsProductGroupFiltersAllOfRequest_anyOf_1 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> getAllOf() const;
    void setAllOf(std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsProductGroupFiltersAllOfRequest_anyOf_1& o);
    friend  void from_json(const nlohmann::json& j, CatalogsProductGroupFiltersAllOfRequest_anyOf_1& o);
protected:
    std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> m_All_of;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsProductGroupFiltersAllOfRequest_anyOf_1_H_ */
