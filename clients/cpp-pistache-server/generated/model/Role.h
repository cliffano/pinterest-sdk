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
 * Role.h
 *
 * An internal role type used on business access, EMPLOYEE, ADMIN.
 */

#ifndef Role_H_
#define Role_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// An internal role type used on business access, EMPLOYEE, ADMIN.
/// </summary>
class  Role
{
public:
    Role();
    virtual ~Role() = default;

    enum class eRole {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    UNKNOWN, 
    OWNER, 
    ADMIN, 
    ANALYST, 
    SOS_READER, 
    FINANCE_MANAGER, 
    AUDIENCE_MANAGER, 
    CAMPAIGN_MANAGER, 
    CATALOGS_MANAGER, 
    RESTRICTED_OWNER, 
    PROFILE_MANAGER, 
    PROFILE_PUBLISHER, 
    RESOURCE_PINNER_LIST_OWNER, 
    RESOURCE_PINNER_LIST_READER, 
    BIZ_PINNER_LIST_SHARER, 
    RESOURCE_CONVERSION_TAGS_READER
    };

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

    bool operator==(const Role& rhs) const;
    bool operator!=(const Role& rhs) const;

    /////////////////////////////////////////////
    /// Role members

    Role::eRole getValue() const;
    void setValue(Role::eRole value);
    
    friend  void to_json(nlohmann::json& j, const Role& o);
    friend  void from_json(const nlohmann::json& j, Role& o);
protected:
    Role::eRole m_value = Role::eRole::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* Role_H_ */
