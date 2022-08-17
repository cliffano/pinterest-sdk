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
 * Catalogs_product_group_feed_based_case.h
 *
 * 
 */

#ifndef Catalogs_product_group_feed_based_case_H_
#define Catalogs_product_group_feed_based_case_H_


#include "CatalogsProductGroupType.h"
#include <string>
#include "CatalogsProductGroupFilters.h"
#include "CatalogsProductGroupStatus.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Catalogs_product_group_feed_based_case
{
public:
    Catalogs_product_group_feed_based_case();
    virtual ~Catalogs_product_group_feed_based_case() = default;


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

    bool operator==(const Catalogs_product_group_feed_based_case& rhs) const;
    bool operator!=(const Catalogs_product_group_feed_based_case& rhs) const;

    /////////////////////////////////////////////
    /// Catalogs_product_group_feed_based_case members

    /// <summary>
    /// ID of the catalog product group.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    /// <summary>
    /// Name of catalog product group
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
    org::openapitools::server::model::CatalogsProductGroupFilters getFilters() const;
    void setFilters(org::openapitools::server::model::CatalogsProductGroupFilters const& value);
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
    org::openapitools::server::model::CatalogsProductGroupType getType() const;
    void setType(org::openapitools::server::model::CatalogsProductGroupType const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupStatus getStatus() const;
    void setStatus(org::openapitools::server::model::CatalogsProductGroupStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Unix timestamp in seconds of when catalog product group was created.
    /// </summary>
    int32_t getCreatedAt() const;
    void setCreatedAt(int32_t const value);
    bool createdAtIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// Unix timestamp in seconds of last time catalog product group was updated.
    /// </summary>
    int32_t getUpdatedAt() const;
    void setUpdatedAt(int32_t const value);
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    /// <summary>
    /// id of the catalogs feed belonging to this catalog product group
    /// </summary>
    std::string getFeedId() const;
    void setFeedId(std::string const& value);

    friend void to_json(nlohmann::json& j, const Catalogs_product_group_feed_based_case& o);
    friend void from_json(const nlohmann::json& j, Catalogs_product_group_feed_based_case& o);
protected:
    std::string m_Id;

    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    org::openapitools::server::model::CatalogsProductGroupFilters m_Filters;

    bool m_Is_featured;
    bool m_Is_featuredIsSet;
    org::openapitools::server::model::CatalogsProductGroupType m_Type;
    bool m_TypeIsSet;
    org::openapitools::server::model::CatalogsProductGroupStatus m_Status;
    bool m_StatusIsSet;
    int32_t m_Created_at;
    bool m_Created_atIsSet;
    int32_t m_Updated_at;
    bool m_Updated_atIsSet;
    std::string m_Feed_id;

    
};

} // namespace org::openapitools::server::model

#endif /* Catalogs_product_group_feed_based_case_H_ */
