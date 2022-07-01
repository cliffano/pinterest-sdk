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
 * OauthAccessTokenResponseCode.h
 *
 * A successful OAuth access token response for the authorization code flow.
 */

#ifndef OauthAccessTokenResponseCode_H_
#define OauthAccessTokenResponseCode_H_



#include "OauthAccessTokenResponse.h"
#include <string>
#include "OauthAccessTokenResponseCode_allOf.h"
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
/// A successful OAuth access token response for the authorization code flow.
/// </summary>
class  OauthAccessTokenResponseCode : public OauthAccessTokenResponse, public OauthAccessTokenResponseCode_allOf
{
public:
    OauthAccessTokenResponseCode() = default;
    explicit OauthAccessTokenResponseCode(boost::property_tree::ptree const& pt);
    virtual ~OauthAccessTokenResponseCode() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// OauthAccessTokenResponseCode members

    /// <summary>
    /// 
    /// </summary>
    std::string getResponseType() const;
    void setResponseType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getAccessToken() const;
    void setAccessToken(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getTokenType() const;
    void setTokenType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getExpiresIn() const;
    void setExpiresIn(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::string getScope() const;
    void setScope(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getRefreshToken() const;
    void setRefreshToken(std::string value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getRefreshTokenExpiresIn() const;
    void setRefreshTokenExpiresIn(int32_t value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Response_type = "";
    std::string m_Access_token = "";
    std::string m_Token_type = "bearer";
    int32_t m_Expires_in = 0;
    std::string m_Scope = "";
    std::string m_Refresh_token = "";
    int32_t m_Refresh_token_expires_in = 0;
    const std::array<std::string, 2> m_Response_typeEnum = {
          "authorization_code","refresh_token"
    };

};

std::vector<OauthAccessTokenResponseCode> createOauthAccessTokenResponseCodeVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* OauthAccessTokenResponseCode_H_ */
