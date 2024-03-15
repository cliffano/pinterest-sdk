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
 * AdAccountCreateRequest.h
 *
 * 
 */

#ifndef AdAccountCreateRequest_H_
#define AdAccountCreateRequest_H_


#include "Country.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdAccountCreateRequest
{
public:
    AdAccountCreateRequest();
    virtual ~AdAccountCreateRequest() = default;


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

    bool operator==(const AdAccountCreateRequest& rhs) const;
    bool operator!=(const AdAccountCreateRequest& rhs) const;

    /////////////////////////////////////////////
    /// AdAccountCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Country getCountry() const;
    void setCountry(org::openapitools::server::model::Country const& value);
    bool countryIsSet() const;
    void unsetCountry();
    /// <summary>
    /// Ad Account name.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// Advertiser&#39;s owning user ID.
    /// </summary>
    std::string getOwnerUserId() const;
    void setOwnerUserId(std::string const& value);
    bool ownerUserIdIsSet() const;
    void unsetOwner_user_id();

    friend  void to_json(nlohmann::json& j, const AdAccountCreateRequest& o);
    friend  void from_json(const nlohmann::json& j, AdAccountCreateRequest& o);
protected:
    org::openapitools::server::model::Country m_Country;
    bool m_CountryIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Owner_user_id;
    bool m_Owner_user_idIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdAccountCreateRequest_H_ */
