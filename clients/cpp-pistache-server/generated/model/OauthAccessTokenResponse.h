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
 * OauthAccessTokenResponse.h
 *
 * A successful OAuth access token response.
 */

#ifndef OauthAccessTokenResponse_H_
#define OauthAccessTokenResponse_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// A successful OAuth access token response.
/// </summary>
class  OauthAccessTokenResponse
{
public:
    OauthAccessTokenResponse();
    virtual ~OauthAccessTokenResponse() = default;


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

    bool operator==(const OauthAccessTokenResponse& rhs) const;
    bool operator!=(const OauthAccessTokenResponse& rhs) const;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponse members

    /// <summary>
    /// 
    /// </summary>
    std::string getResponseType() const;
    void setResponseType(std::string const& value);
    bool responseTypeIsSet() const;
    void unsetResponse_type();
    /// <summary>
    /// 
    /// </summary>
    std::string getAccessToken() const;
    void setAccessToken(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getTokenType() const;
    void setTokenType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getExpiresIn() const;
    void setExpiresIn(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    std::string getScope() const;
    void setScope(std::string const& value);

    friend void to_json(nlohmann::json& j, const OauthAccessTokenResponse& o);
    friend void from_json(const nlohmann::json& j, OauthAccessTokenResponse& o);
protected:
    std::string m_Response_type;
    bool m_Response_typeIsSet;
    std::string m_Access_token;

    std::string m_Token_type;

    int32_t m_Expires_in;

    std::string m_Scope;

    
};

} // namespace org::openapitools::server::model

#endif /* OauthAccessTokenResponse_H_ */
