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
 * ConversionAttributionWindowDays.h
 *
 * 
 */

#ifndef ConversionAttributionWindowDays_H_
#define ConversionAttributionWindowDays_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ConversionAttributionWindowDays
{
public:
    ConversionAttributionWindowDays();
    virtual ~ConversionAttributionWindowDays() = default;

    enum class eConversionAttributionWindowDays {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    _1, 
    _7, 
    _30, 
    _60
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

    bool operator==(const ConversionAttributionWindowDays& rhs) const;
    bool operator!=(const ConversionAttributionWindowDays& rhs) const;

    /////////////////////////////////////////////
    /// ConversionAttributionWindowDays members

    ConversionAttributionWindowDays::eConversionAttributionWindowDays getValue() const;
    void setValue(ConversionAttributionWindowDays::eConversionAttributionWindowDays value);
    
    friend void to_json(nlohmann::json& j, const ConversionAttributionWindowDays& o);
    friend void from_json(const nlohmann::json& j, ConversionAttributionWindowDays& o);
protected:
    ConversionAttributionWindowDays::eConversionAttributionWindowDays m_value = ConversionAttributionWindowDays::eConversionAttributionWindowDays::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* ConversionAttributionWindowDays_H_ */
