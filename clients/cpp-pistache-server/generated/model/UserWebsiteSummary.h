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
 * UserWebsiteSummary.h
 *
 * 
 */

#ifndef UserWebsiteSummary_H_
#define UserWebsiteSummary_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  UserWebsiteSummary
{
public:
    UserWebsiteSummary();
    virtual ~UserWebsiteSummary() = default;


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

    bool operator==(const UserWebsiteSummary& rhs) const;
    bool operator!=(const UserWebsiteSummary& rhs) const;

    /////////////////////////////////////////////
    /// UserWebsiteSummary members

    /// <summary>
    /// Website with path or domain only
    /// </summary>
    std::string getWebsite() const;
    void setWebsite(std::string const& value);
    bool websiteIsSet() const;
    void unsetWebsite();
    /// <summary>
    /// Status of the verification process
    /// </summary>
    std::string getStatus() const;
    void setStatus(std::string const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// UTC timestamp when the verification happened - sometimes missing
    /// </summary>
    std::string getVerifiedAt() const;
    void setVerifiedAt(std::string const& value);
    bool verifiedAtIsSet() const;
    void unsetVerified_at();

    friend  void to_json(nlohmann::json& j, const UserWebsiteSummary& o);
    friend  void from_json(const nlohmann::json& j, UserWebsiteSummary& o);
protected:
    std::string m_Website;
    bool m_WebsiteIsSet;
    std::string m_Status;
    bool m_StatusIsSet;
    std::string m_Verified_at;
    bool m_Verified_atIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* UserWebsiteSummary_H_ */