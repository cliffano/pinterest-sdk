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
 * BulkOutputFormat.h
 *
 * Bulk file output format
 */

#ifndef BulkOutputFormat_H_
#define BulkOutputFormat_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Bulk file output format
/// </summary>
class  BulkOutputFormat
{
public:
    BulkOutputFormat();
    virtual ~BulkOutputFormat() = default;

    enum class eBulkOutputFormat {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    CSV, 
    JSON
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

    bool operator==(const BulkOutputFormat& rhs) const;
    bool operator!=(const BulkOutputFormat& rhs) const;

    /////////////////////////////////////////////
    /// BulkOutputFormat members

    BulkOutputFormat::eBulkOutputFormat getValue() const;
    void setValue(BulkOutputFormat::eBulkOutputFormat value);
    
    friend  void to_json(nlohmann::json& j, const BulkOutputFormat& o);
    friend  void from_json(const nlohmann::json& j, BulkOutputFormat& o);
protected:
    BulkOutputFormat::eBulkOutputFormat m_value = BulkOutputFormat::eBulkOutputFormat::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* BulkOutputFormat_H_ */