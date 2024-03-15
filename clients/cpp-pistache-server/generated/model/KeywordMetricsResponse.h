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
 * KeywordMetricsResponse.h
 *
 * 
 */

#ifndef KeywordMetricsResponse_H_
#define KeywordMetricsResponse_H_


#include <string>
#include "KeywordMetrics.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  KeywordMetricsResponse
{
public:
    KeywordMetricsResponse();
    virtual ~KeywordMetricsResponse() = default;


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

    bool operator==(const KeywordMetricsResponse& rhs) const;
    bool operator!=(const KeywordMetricsResponse& rhs) const;

    /////////////////////////////////////////////
    /// KeywordMetricsResponse members

    /// <summary>
    /// Keyword name, e.g., \&quot;keyword\&quot;:\&quot;fashion outfits\&quot;
    /// </summary>
    std::string getKeyword() const;
    void setKeyword(std::string const& value);
    bool keywordIsSet() const;
    void unsetKeyword();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::KeywordMetrics getMetrics() const;
    void setMetrics(org::openapitools::server::model::KeywordMetrics const& value);
    bool metricsIsSet() const;
    void unsetMetrics();

    friend  void to_json(nlohmann::json& j, const KeywordMetricsResponse& o);
    friend  void from_json(const nlohmann::json& j, KeywordMetricsResponse& o);
protected:
    std::string m_Keyword;
    bool m_KeywordIsSet;
    org::openapitools::server::model::KeywordMetrics m_Metrics;
    bool m_MetricsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* KeywordMetricsResponse_H_ */
