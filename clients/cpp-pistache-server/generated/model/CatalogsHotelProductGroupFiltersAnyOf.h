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
 * CatalogsHotelProductGroupFiltersAnyOf.h
 *
 * 
 */

#ifndef CatalogsHotelProductGroupFiltersAnyOf_H_
#define CatalogsHotelProductGroupFiltersAnyOf_H_


#include "CatalogsHotelProductGroupFilterKeys.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsHotelProductGroupFiltersAnyOf
{
public:
    CatalogsHotelProductGroupFiltersAnyOf();
    virtual ~CatalogsHotelProductGroupFiltersAnyOf() = default;


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

    bool operator==(const CatalogsHotelProductGroupFiltersAnyOf& rhs) const;
    bool operator!=(const CatalogsHotelProductGroupFiltersAnyOf& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsHotelProductGroupFiltersAnyOf members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::CatalogsHotelProductGroupFilterKeys> getAnyOf() const;
    void setAnyOf(std::vector<org::openapitools::server::model::CatalogsHotelProductGroupFilterKeys> const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsHotelProductGroupFiltersAnyOf& o);
    friend  void from_json(const nlohmann::json& j, CatalogsHotelProductGroupFiltersAnyOf& o);
protected:
    std::vector<org::openapitools::server::model::CatalogsHotelProductGroupFilterKeys> m_Any_of;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsHotelProductGroupFiltersAnyOf_H_ */
