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
 * CatalogsListProductsByFilterRequest.h
 *
 * Request object to list products for a given product group filter.
 */

#ifndef CatalogsListProductsByFilterRequest_H_
#define CatalogsListProductsByFilterRequest_H_


#include "CatalogsListProductsByFilterRequest_oneOf.h"
#include <string>
#include "CatalogsProductGroupFilters.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object to list products for a given product group filter.
/// </summary>
class  CatalogsListProductsByFilterRequest
{
public:
    CatalogsListProductsByFilterRequest();
    virtual ~CatalogsListProductsByFilterRequest() = default;


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

    bool operator==(const CatalogsListProductsByFilterRequest& rhs) const;
    bool operator!=(const CatalogsListProductsByFilterRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsListProductsByFilterRequest members

    /// <summary>
    /// Catalog Feed id pertaining to the catalog product group filter.
    /// </summary>
    std::string getFeedId() const;
    void setFeedId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupFilters getFilters() const;
    void setFilters(org::openapitools::server::model::CatalogsProductGroupFilters const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsListProductsByFilterRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsListProductsByFilterRequest& o);
protected:
    std::string m_Feed_id;

    org::openapitools::server::model::CatalogsProductGroupFilters m_Filters;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsListProductsByFilterRequest_H_ */
