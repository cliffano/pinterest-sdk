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
 * AdsAnalyticsMetricsFilter.h
 *
 * 
 */

#ifndef AdsAnalyticsMetricsFilter_H_
#define AdsAnalyticsMetricsFilter_H_


#include "AdsAnalyticsFilterColumn.h"
#include "AdsAnalyticsFilterOperator.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdsAnalyticsMetricsFilter
{
public:
    AdsAnalyticsMetricsFilter();
    virtual ~AdsAnalyticsMetricsFilter() = default;


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

    bool operator==(const AdsAnalyticsMetricsFilter& rhs) const;
    bool operator!=(const AdsAnalyticsMetricsFilter& rhs) const;

    /////////////////////////////////////////////
    /// AdsAnalyticsMetricsFilter members

    /// <summary>
    /// 
    /// </summary>
    AdsAnalyticsFilterColumn getField() const;
    void setField(AdsAnalyticsFilterColumn const& value);
    bool fieldIsSet() const;
    void unsetField();
    /// <summary>
    /// 
    /// </summary>
    AdsAnalyticsFilterOperator getROperator() const;
    void setROperator(AdsAnalyticsFilterOperator const& value);
    bool rOperatorIsSet() const;
    void unsetr_operator();
    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<double> getValues() const;
    void setValues(std::vector<double> const value);
    bool valuesIsSet() const;
    void unsetValues();

    friend void to_json(nlohmann::json& j, const AdsAnalyticsMetricsFilter& o);
    friend void from_json(const nlohmann::json& j, AdsAnalyticsMetricsFilter& o);
protected:
    AdsAnalyticsFilterColumn m_Field;
    bool m_FieldIsSet;
    AdsAnalyticsFilterOperator m_r_operator;
    bool m_r_operatorIsSet;
    std::vector<double> m_Values;
    bool m_ValuesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdsAnalyticsMetricsFilter_H_ */
