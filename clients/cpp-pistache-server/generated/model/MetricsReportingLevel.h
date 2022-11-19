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
 * MetricsReportingLevel.h
 *
 * Level of the reporting request
 */

#ifndef MetricsReportingLevel_H_
#define MetricsReportingLevel_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Level of the reporting request
/// </summary>
class  MetricsReportingLevel
{
public:
    MetricsReportingLevel();
    virtual ~MetricsReportingLevel() = default;

    enum class eMetricsReportingLevel {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ADVERTISER, 
    ADVERTISER_TARGETING, 
    CAMPAIGN, 
    CAMPAIGN_TARGETING, 
    AD_GROUP, 
    AD_GROUP_TARGETING, 
    PIN_PROMOTION, 
    PIN_PROMOTION_TARGETING, 
    KEYWORD, 
    PRODUCT_GROUP, 
    PRODUCT_GROUP_TARGETING, 
    PRODUCT_ITEM
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

    bool operator==(const MetricsReportingLevel& rhs) const;
    bool operator!=(const MetricsReportingLevel& rhs) const;

    /////////////////////////////////////////////
    /// MetricsReportingLevel members

    MetricsReportingLevel::eMetricsReportingLevel getValue() const;
    void setValue(MetricsReportingLevel::eMetricsReportingLevel value);
    
    friend void to_json(nlohmann::json& j, const MetricsReportingLevel& o);
    friend void from_json(const nlohmann::json& j, MetricsReportingLevel& o);
protected:
    MetricsReportingLevel::eMetricsReportingLevel m_value = MetricsReportingLevel::eMetricsReportingLevel::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* MetricsReportingLevel_H_ */
