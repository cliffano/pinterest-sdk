/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * UserListOperationType.h
 *
 * User list operation type (add or remove)
 */

#ifndef UserListOperationType_H_
#define UserListOperationType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// User list operation type (add or remove)
/// </summary>
class  UserListOperationType
{
public:
    UserListOperationType();
    virtual ~UserListOperationType() = default;

    enum class eUserListOperationType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ADD, 
    REMOVE
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

    bool operator==(const UserListOperationType& rhs) const;
    bool operator!=(const UserListOperationType& rhs) const;

    /////////////////////////////////////////////
    /// UserListOperationType members

    UserListOperationType::eUserListOperationType getValue() const;
    void setValue(UserListOperationType::eUserListOperationType value);
    
    friend  void to_json(nlohmann::json& j, const UserListOperationType& o);
    friend  void from_json(const nlohmann::json& j, UserListOperationType& o);
protected:
    UserListOperationType::eUserListOperationType m_value = UserListOperationType::eUserListOperationType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* UserListOperationType_H_ */
