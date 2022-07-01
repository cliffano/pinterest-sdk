/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
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
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  OauthAccessTokenRequestRefresh_allOf
{
public:
    OauthAccessTokenRequestRefresh_allOf();
    virtual ~OauthAccessTokenRequestRefresh_allOf() = default;


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

    bool operator==(const OauthAccessTokenRequestRefresh_allOf& rhs) const;
    bool operator!=(const OauthAccessTokenRequestRefresh_allOf& rhs) const;

    /////////////////////////////////////////////
    /// OauthAccessTokenRequestRefresh_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::string getRefreshToken() const;
    void setRefreshToken(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getScope() const;
    void setScope(std::string const& value);
    bool scopeIsSet() const;
    void unsetScope();

    friend void to_json(nlohmann::json& j, const OauthAccessTokenRequestRefresh_allOf& o);
    friend void from_json(const nlohmann::json& j, OauthAccessTokenRequestRefresh_allOf& o);
protected:
    std::string m_Refresh_token;

    std::string m_Scope;
    bool m_ScopeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* OauthAccessTokenRequestRefresh_allOf_H_ */
