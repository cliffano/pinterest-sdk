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
 * OauthAccessTokenRequestRefresh_allOf.h
 *
 * 
 */

#ifndef OauthAccessTokenRequestRefresh_allOf_H_
#define OauthAccessTokenRequestRefresh_allOf_H_



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
class  OauthAccessTokenRequestRefresh_allOf 
{
public:
    OauthAccessTokenRequestRefresh_allOf() = default;
    explicit OauthAccessTokenRequestRefresh_allOf(boost::property_tree::ptree const& pt);
    virtual ~OauthAccessTokenRequestRefresh_allOf() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// OauthAccessTokenRequestRefresh_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::string getRefreshToken() const;
    void setRefreshToken(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getScope() const;
    void setScope(std::string value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Refresh_token = "";
    std::string m_Scope = "";
};

std::vector<OauthAccessTokenRequestRefresh_allOf> createOauthAccessTokenRequestRefresh_allOfVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* OauthAccessTokenRequestRefresh_allOf_H_ */
