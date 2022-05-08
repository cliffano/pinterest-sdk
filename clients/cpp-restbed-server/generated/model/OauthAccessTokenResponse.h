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
 * OauthAccessTokenResponse.h
 *
 * A successful OAuth access token response.
 */

#ifndef OauthAccessTokenResponse_H_
#define OauthAccessTokenResponse_H_



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
/// A successful OAuth access token response.
/// </summary>
class  OauthAccessTokenResponse 
{
public:
    OauthAccessTokenResponse() = default;
    explicit OauthAccessTokenResponse(boost::property_tree::ptree const& pt);
    virtual ~OauthAccessTokenResponse() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// OauthAccessTokenResponse members

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
    const std::array<std::string, 2> m_Response_typeEnum = {
          "authorization_code","refresh_token"
    };

};

std::vector<OauthAccessTokenResponse> createOauthAccessTokenResponseVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* OauthAccessTokenResponse_H_ */
