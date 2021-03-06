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
 * AdGroupResponse_allOf_1.h
 *
 * 
 */

#ifndef AdGroupResponse_allOf_1_H_
#define AdGroupResponse_allOf_1_H_



#include <string>
#include "ActionType.h"
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
class  AdGroupResponse_allOf_1 
{
public:
    AdGroupResponse_allOf_1() = default;
    explicit AdGroupResponse_allOf_1(boost::property_tree::ptree const& pt);
    virtual ~AdGroupResponse_allOf_1() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// AdGroupResponse_allOf_1 members

    /// <summary>
    /// Campaign ID of the ad group.
    /// </summary>
    std::string getCampaignId() const;
    void setCampaignId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ActionType> getBillableEvent() const;
    void setBillableEvent(std::shared_ptr<ActionType> value);

    /// <summary>
    /// Ad group ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

    /// <summary>
    /// Always \&quot;adgroup\&quot;.
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

    /// <summary>
    /// Advertiser ID.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string value);

    /// <summary>
    /// Ad group creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    void setCreatedTime(int32_t value);

    /// <summary>
    /// Ad group last update time. Unix timestamp in seconds.
    /// </summary>
    int32_t getUpdatedTime() const;
    void setUpdatedTime(int32_t value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Campaign_id = "";
    std::shared_ptr<ActionType> m_Billable_event = std::make_shared<ActionType>();
    std::string m_Id = "";
    std::string m_Type = "";
    std::string m_Ad_account_id = "";
    int32_t m_Created_time = 0;
    int32_t m_Updated_time = 0;
};

std::vector<AdGroupResponse_allOf_1> createAdGroupResponse_allOf_1VectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* AdGroupResponse_allOf_1_H_ */
