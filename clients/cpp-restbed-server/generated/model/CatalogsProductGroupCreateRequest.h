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
 * CatalogsProductGroupCreateRequest.h
 *
 * Request object for creating a product group.
 */

#ifndef CatalogsProductGroupCreateRequest_H_
#define CatalogsProductGroupCreateRequest_H_



#include <string>
#include "CatalogsProductGroupFilters.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Request object for creating a product group.
/// </summary>
class  CatalogsProductGroupCreateRequest 
{
public:
    CatalogsProductGroupCreateRequest() = default;
    explicit CatalogsProductGroupCreateRequest(boost::property_tree::ptree const& pt);
    virtual ~CatalogsProductGroupCreateRequest() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsProductGroupCreateRequest members

    /// <summary>
    /// Catalog Feed id pertaining to the catalog product group.
    /// </summary>
    std::string getFeedId() const;
    void setFeedId(std::string value);

    /// <summary>
    /// 
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

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Feed_id = "";
    std::string m_Name = "";
    std::string m_Description = "";
    std::shared_ptr<CatalogsProductGroupFilters> m_Filters;
};

std::vector<CatalogsProductGroupCreateRequest> createCatalogsProductGroupCreateRequestVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsProductGroupCreateRequest_H_ */
