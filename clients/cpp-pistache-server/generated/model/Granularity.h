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
 * Granularity.h
 *
 * 
 */

#ifndef Granularity_H_
#define Granularity_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Granularity
{
public:
    Granularity();
    virtual ~Granularity() = default;

    enum class eGranularity {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    TOTAL, 
    DAY, 
    HOUR, 
    WEEK, 
    MONTH
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

    bool operator==(const Granularity& rhs) const;
    bool operator!=(const Granularity& rhs) const;

    /////////////////////////////////////////////
    /// Granularity members

    Granularity::eGranularity getValue() const;
    void setValue(Granularity::eGranularity value);
    
    friend void to_json(nlohmann::json& j, const Granularity& o);
    friend void from_json(const nlohmann::json& j, Granularity& o);
protected:
    Granularity::eGranularity m_value = Granularity::eGranularity::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* Granularity_H_ */
