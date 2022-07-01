/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsProductGroup.h
 *
 * catalog product group entity
 */

#ifndef CatalogsProductGroup_H_
#define CatalogsProductGroup_H_



#include "CatalogsProductGroupType.h"
#include <string>
#include "CatalogsProductGroupFilters.h"
#include "CatalogsProductGroupStatus.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// catalog product group entity
/// </summary>
class  CatalogsProductGroup 
{
public:
    CatalogsProductGroup() = default;
    explicit CatalogsProductGroup(boost::property_tree::ptree const& pt);
    virtual ~CatalogsProductGroup() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsProductGroup members

    /// <summary>
    /// ID of the catalog product group.
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

    /// <summary>
    /// Name of catalog product group
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupFilters> getFilters() const;
    void setFilters(std::shared_ptr<CatalogsProductGroupFilters> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupType> getType() const;
    void setType(std::shared_ptr<CatalogsProductGroupType> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupStatus> getStatus() const;
    void setStatus(std::shared_ptr<CatalogsProductGroupStatus> value);

    /// <summary>
    /// id of the catalogs feed belonging to this catalog product group
    /// </summary>
    std::string getFeedId() const;
    void setFeedId(std::string value);

    /// <summary>
    /// Unix timestamp in seconds of when catalog product group was created.
    /// </summary>
    int32_t getCreatedAt() const;
    void setCreatedAt(int32_t value);

    /// <summary>
    /// Unix timestamp in seconds of last time catalog product group was updated.
    /// </summary>
    int32_t getUpdatedAt() const;
    void setUpdatedAt(int32_t value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Id = "";
    std::string m_Name = "";
    std::string m_Description = "";
    std::shared_ptr<CatalogsProductGroupFilters> m_Filters;
    std::shared_ptr<CatalogsProductGroupType> m_Type = std::make_shared<CatalogsProductGroupType>();
    std::shared_ptr<CatalogsProductGroupStatus> m_Status = std::make_shared<CatalogsProductGroupStatus>();
    std::string m_Feed_id = "";
    int32_t m_Created_at = 0;
    int32_t m_Updated_at = 0;
};

std::vector<CatalogsProductGroup> createCatalogsProductGroupVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsProductGroup_H_ */
