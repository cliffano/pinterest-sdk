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
 * CatalogsHotelProductGroupCreateRequest.h
 *
 * Request object for creating a hotel product group.
 */

#ifndef CatalogsHotelProductGroupCreateRequest_H_
#define CatalogsHotelProductGroupCreateRequest_H_


#include <string>
#include "CatalogsHotelProductGroupFilters.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object for creating a hotel product group.
/// </summary>
class  CatalogsHotelProductGroupCreateRequest
{
public:
    CatalogsHotelProductGroupCreateRequest();
    virtual ~CatalogsHotelProductGroupCreateRequest() = default;


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

    bool operator==(const CatalogsHotelProductGroupCreateRequest& rhs) const;
    bool operator!=(const CatalogsHotelProductGroupCreateRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsHotelProductGroupCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    std::string getCatalogType() const;
    void setCatalogType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
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
    /// <summary>
    /// Catalog id pertaining to the hotel product group.
    /// </summary>
    std::string getCatalogId() const;
    void setCatalogId(std::string const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsHotelProductGroupCreateRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsHotelProductGroupCreateRequest& o);
protected:
    std::string m_Catalog_type;

    std::string m_Name;

    std::string m_Description;
    bool m_DescriptionIsSet;
    org::openapitools::server::model::CatalogsHotelProductGroupFilters m_Filters;

    std::string m_Catalog_id;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsHotelProductGroupCreateRequest_H_ */