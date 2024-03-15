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
 * UserFollowingFeedType.h
 *
 * Specifies the type of followees to be kept when filtering them.
 */

#ifndef UserFollowingFeedType_H_
#define UserFollowingFeedType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Specifies the type of followees to be kept when filtering them.
/// </summary>
class  UserFollowingFeedType
{
public:
    UserFollowingFeedType();
    virtual ~UserFollowingFeedType() = default;

    enum class eUserFollowingFeedType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ALL, 
    RANKED, 
    CREATOR_ONLY, 
    RANKED_CREATOR_ONLY
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

    bool operator==(const UserFollowingFeedType& rhs) const;
    bool operator!=(const UserFollowingFeedType& rhs) const;

    /////////////////////////////////////////////
    /// UserFollowingFeedType members

    UserFollowingFeedType::eUserFollowingFeedType getValue() const;
    void setValue(UserFollowingFeedType::eUserFollowingFeedType value);
    
    friend  void to_json(nlohmann::json& j, const UserFollowingFeedType& o);
    friend  void from_json(const nlohmann::json& j, UserFollowingFeedType& o);
protected:
    UserFollowingFeedType::eUserFollowingFeedType m_value = UserFollowingFeedType::eUserFollowingFeedType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* UserFollowingFeedType_H_ */
