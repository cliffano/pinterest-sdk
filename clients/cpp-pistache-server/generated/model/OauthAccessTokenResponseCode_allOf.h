/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * OauthAccessTokenResponseCode_allOf.h
 *
 * 
 */

#ifndef OauthAccessTokenResponseCode_allOf_H_
#define OauthAccessTokenResponseCode_allOf_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  OauthAccessTokenResponseCode_allOf
{
public:
    OauthAccessTokenResponseCode_allOf();
    virtual ~OauthAccessTokenResponseCode_allOf() = default;


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

    bool operator==(const OauthAccessTokenResponseCode_allOf& rhs) const;
    bool operator!=(const OauthAccessTokenResponseCode_allOf& rhs) const;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponseCode_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::string getRefreshToken() const;
    void setRefreshToken(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getRefreshTokenExpiresIn() const;
    void setRefreshTokenExpiresIn(int32_t const value);

    friend void to_json(nlohmann::json& j, const OauthAccessTokenResponseCode_allOf& o);
    friend void from_json(const nlohmann::json& j, OauthAccessTokenResponseCode_allOf& o);
protected:
    std::string m_Refresh_token;

    int32_t m_Refresh_token_expires_in;

    
};

} // namespace org::openapitools::server::model

#endif /* OauthAccessTokenResponseCode_allOf_H_ */
