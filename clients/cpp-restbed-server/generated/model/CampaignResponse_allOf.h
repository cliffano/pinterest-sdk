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
 * CampaignResponse_allOf.h
 *
 * 
 */

#ifndef CampaignResponse_allOf_H_
#define CampaignResponse_allOf_H_



#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CampaignResponse_allOf 
{
public:
    CampaignResponse_allOf() = default;
    explicit CampaignResponse_allOf(boost::property_tree::ptree const& pt);
    virtual ~CampaignResponse_allOf() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CampaignResponse_allOf members

    /// <summary>
    /// Campaign ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

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
};

std::vector<CampaignResponse_allOf> createCampaignResponse_allOfVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CampaignResponse_allOf_H_ */
