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
 * ActionType.h
 *
 * Ad group billable event type. For update, only draft ad groups may update billable event.
 */

#ifndef ActionType_H_
#define ActionType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Ad group billable event type. For update, only draft ad groups may update billable event.
/// </summary>
class  ActionType
{
public:
    ActionType();
    virtual ~ActionType() = default;

    enum class eActionType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    CLICKTHROUGH, 
    IMPRESSION, 
    VIDEO_V_50_MRC
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

    bool operator==(const ActionType& rhs) const;
    bool operator!=(const ActionType& rhs) const;

    /////////////////////////////////////////////
    /// ActionType members

    ActionType::eActionType getValue() const;
    void setValue(ActionType::eActionType value);
    
    friend  void to_json(nlohmann::json& j, const ActionType& o);
    friend  void from_json(const nlohmann::json& j, ActionType& o);
protected:
    ActionType::eActionType m_value = ActionType::eActionType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* ActionType_H_ */
