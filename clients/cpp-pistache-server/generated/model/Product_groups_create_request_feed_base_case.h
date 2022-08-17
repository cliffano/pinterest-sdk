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
 * Product_groups_create_request_feed_base_case.h
 *
 * 
 */

#ifndef Product_groups_create_request_feed_base_case_H_
#define Product_groups_create_request_feed_base_case_H_


#include "CatalogsProductGroupFiltersAllOfRequest.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Product_groups_create_request_feed_base_case
{
public:
    Product_groups_create_request_feed_base_case();
    virtual ~Product_groups_create_request_feed_base_case() = default;


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

    bool operator==(const Product_groups_create_request_feed_base_case& rhs) const;
    bool operator!=(const Product_groups_create_request_feed_base_case& rhs) const;

    /////////////////////////////////////////////
    /// Product_groups_create_request_feed_base_case members

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
    /// boolean indicator of whether the product group is being featured or not
    /// </summary>
    bool isIsFeatured() const;
    void setIsFeatured(bool const value);
    bool isFeaturedIsSet() const;
    void unsetIs_featured();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupFiltersAllOfRequest getFilters() const;
    void setFilters(org::openapitools::server::model::CatalogsProductGroupFiltersAllOfRequest const& value);
    /// <summary>
    /// Catalog Feed id pertaining to the catalog product group.
    /// </summary>
    std::string getFeedId() const;
    void setFeedId(std::string const& value);

    friend void to_json(nlohmann::json& j, const Product_groups_create_request_feed_base_case& o);
    friend void from_json(const nlohmann::json& j, Product_groups_create_request_feed_base_case& o);
protected:
    std::string m_Name;

    std::string m_Description;
    bool m_DescriptionIsSet;
    bool m_Is_featured;
    bool m_Is_featuredIsSet;
    org::openapitools::server::model::CatalogsProductGroupFiltersAllOfRequest m_Filters;

    std::string m_Feed_id;

    
};

} // namespace org::openapitools::server::model

#endif /* Product_groups_create_request_feed_base_case_H_ */
