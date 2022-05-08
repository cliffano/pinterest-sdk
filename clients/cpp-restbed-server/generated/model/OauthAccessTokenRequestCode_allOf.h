/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OauthAccessTokenRequestCode_allOf.h
 *
 * 
 */

#ifndef OauthAccessTokenRequestCode_allOf_H_
#define OauthAccessTokenRequestCode_allOf_H_



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
class  OauthAccessTokenRequestCode_allOf 
{
public:
    OauthAccessTokenRequestCode_allOf() = default;
    explicit OauthAccessTokenRequestCode_allOf(boost::property_tree::ptree const& pt);
    virtual ~OauthAccessTokenRequestCode_allOf() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// OauthAccessTokenRequestCode_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::string getCode() const;
    void setCode(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getRedirectUri() const;
    void setRedirectUri(std::string value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Code = "";
    std::string m_Redirect_uri = "";
};

std::vector<OauthAccessTokenRequestCode_allOf> createOauthAccessTokenRequestCode_allOfVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* OauthAccessTokenRequestCode_allOf_H_ */
