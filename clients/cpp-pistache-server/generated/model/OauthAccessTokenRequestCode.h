/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
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
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// A request to exchange an authorization code for an access token.
/// </summary>
class  OauthAccessTokenRequestCode
{
public:
    OauthAccessTokenRequestCode();
    virtual ~OauthAccessTokenRequestCode() = default;


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

    bool operator==(const OauthAccessTokenRequestCode& rhs) const;
    bool operator!=(const OauthAccessTokenRequestCode& rhs) const;

    /////////////////////////////////////////////
    /// OauthAccessTokenRequestCode members

    /// <summary>
    /// 
    /// </summary>
    std::string getGrantType() const;
    void setGrantType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getCode() const;
    void setCode(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getRedirectUri() const;
    void setRedirectUri(std::string const& value);

    friend  void to_json(nlohmann::json& j, const OauthAccessTokenRequestCode& o);
    friend  void from_json(const nlohmann::json& j, OauthAccessTokenRequestCode& o);
protected:
    std::string m_Grant_type;

    std::string m_Code;

    std::string m_Redirect_uri;

    
};

} // namespace org::openapitools::server::model

#endif /* OauthAccessTokenRequestCode_H_ */
