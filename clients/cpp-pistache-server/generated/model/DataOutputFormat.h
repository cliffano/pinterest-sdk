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
 * DataOutputFormat.h
 *
 * Format of generated report
 */

#ifndef DataOutputFormat_H_
#define DataOutputFormat_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Format of generated report
/// </summary>
class  DataOutputFormat
{
public:
    DataOutputFormat();
    virtual ~DataOutputFormat() = default;

    enum class eDataOutputFormat {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    JSON, 
    CSV
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

    bool operator==(const DataOutputFormat& rhs) const;
    bool operator!=(const DataOutputFormat& rhs) const;

    /////////////////////////////////////////////
    /// DataOutputFormat members

    DataOutputFormat::eDataOutputFormat getValue() const;
    void setValue(DataOutputFormat::eDataOutputFormat value);
    
    friend  void to_json(nlohmann::json& j, const DataOutputFormat& o);
    friend  void from_json(const nlohmann::json& j, DataOutputFormat& o);
protected:
    DataOutputFormat::eDataOutputFormat m_value = DataOutputFormat::eDataOutputFormat::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* DataOutputFormat_H_ */
