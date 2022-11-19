/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * MatchType.h
 *
 * Keyword match type
 */

#ifndef MatchType_H_
#define MatchType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Keyword match type
/// </summary>
class  MatchType
{
public:
    MatchType();
    virtual ~MatchType() = default;

    enum class eMatchType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    BROAD, 
    PHRASE, 
    EXACT, 
    EXACT_NEGATIVE, 
    PHRASE_NEGATIVE
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

    bool operator==(const MatchType& rhs) const;
    bool operator!=(const MatchType& rhs) const;

    /////////////////////////////////////////////
    /// MatchType members

    MatchType::eMatchType getValue() const;
    void setValue(MatchType::eMatchType value);
    
    friend void to_json(nlohmann::json& j, const MatchType& o);
    friend void from_json(const nlohmann::json& j, MatchType& o);
protected:
    MatchType::eMatchType m_value = MatchType::eMatchType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* MatchType_H_ */
