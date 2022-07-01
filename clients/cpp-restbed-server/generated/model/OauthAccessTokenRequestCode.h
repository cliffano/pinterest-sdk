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
 * OauthAccessTokenRequestCode.h
 *
 * A request to exchange an authorization code for an access token.
 */

#ifndef OauthAccessTokenRequestCode_H_
#define OauthAccessTokenRequestCode_H_



#include "OauthAccessTokenRequest.h"
#include "OauthAccessTokenRequestCode_allOf.h"
#include <string>
#include <vector>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A request to exchange an authorization code for an access token.
/// </summary>
class  OauthAccessTokenRequestCode : public OauthAccessTokenRequest, public OauthAccessTokenRequestCode_allOf
{
public:
    OauthAccessTokenRequestCode() = default;
    explicit OauthAccessTokenRequestCode(boost::property_tree::ptree const& pt);
    virtual ~OauthAccessTokenRequestCode() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// OauthAccessTokenRequestCode members

    /// <summary>
    /// 
    /// </summary>
    std::string getGrantType() const;
    void setGrantType(std::string value);

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
    std::string m_Grant_type = "";
    std::string m_Code = "";
    std::string m_Redirect_uri = "";
    const std::array<std::string, 2> m_Grant_typeEnum = {
          "authorization_code","refresh_token"
    };

};

std::vector<OauthAccessTokenRequestCode> createOauthAccessTokenRequestCodeVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* OauthAccessTokenRequestCode_H_ */
