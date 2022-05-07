/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ConversionReportTimeType.h
 *
 * Conversion report time type
 */

#ifndef ConversionReportTimeType_H_
#define ConversionReportTimeType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Conversion report time type
/// </summary>
class  ConversionReportTimeType
{
public:
    ConversionReportTimeType();
    virtual ~ConversionReportTimeType() = default;

    enum class eConversionReportTimeType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    AD_ACTION, 
    CONVERSION
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

    bool operator==(const ConversionReportTimeType& rhs) const;
    bool operator!=(const ConversionReportTimeType& rhs) const;

    /////////////////////////////////////////////
    /// ConversionReportTimeType members

    ConversionReportTimeType::eConversionReportTimeType getValue() const;
    void setValue(ConversionReportTimeType::eConversionReportTimeType value);
    
    friend void to_json(nlohmann::json& j, const ConversionReportTimeType& o);
    friend void from_json(const nlohmann::json& j, ConversionReportTimeType& o);
protected:
    ConversionReportTimeType::eConversionReportTimeType m_value = ConversionReportTimeType::eConversionReportTimeType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* ConversionReportTimeType_H_ */
