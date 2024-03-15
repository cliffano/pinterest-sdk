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
 * CatalogsVerticalProductGroupUpdateRequest.h
 *
 * Request object for updating a hotel product group.
 */

#ifndef CatalogsVerticalProductGroupUpdateRequest_H_
#define CatalogsVerticalProductGroupUpdateRequest_H_


#include "CatalogsHotelProductGroupUpdateRequest.h"
#include <string>
#include "CatalogsHotelProductGroupFilters.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object for updating a hotel product group.
/// </summary>
class  CatalogsVerticalProductGroupUpdateRequest
{
public:
    CatalogsVerticalProductGroupUpdateRequest();
    virtual ~CatalogsVerticalProductGroupUpdateRequest() = default;


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

    bool operator==(const CatalogsVerticalProductGroupUpdateRequest& rhs) const;
    bool operator!=(const CatalogsVerticalProductGroupUpdateRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsVerticalProductGroupUpdateRequest members

    /// <summary>
    /// 
    /// </summary>
    std::string getCatalogType() const;
    void setCatalogType(std::string const& value);
    bool catalogTypeIsSet() const;
    void unsetCatalog_type();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsHotelProductGroupFilters getFilters() const;
    void setFilters(org::openapitools::server::model::CatalogsHotelProductGroupFilters const& value);
    bool filtersIsSet() const;
    void unsetFilters();

    friend  void to_json(nlohmann::json& j, const CatalogsVerticalProductGroupUpdateRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsVerticalProductGroupUpdateRequest& o);
protected:
    std::string m_Catalog_type;
    bool m_Catalog_typeIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    org::openapitools::server::model::CatalogsHotelProductGroupFilters m_Filters;
    bool m_FiltersIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsVerticalProductGroupUpdateRequest_H_ */
