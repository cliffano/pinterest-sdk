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
 * OptimizationGoalMetadata_conversion_tag_v3_goal_metadata.h
 *
 * 
 */

#ifndef OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H_
#define OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H_


#include "OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  OptimizationGoalMetadata_conversion_tag_v3_goal_metadata
{
public:
    OptimizationGoalMetadata_conversion_tag_v3_goal_metadata();
    virtual ~OptimizationGoalMetadata_conversion_tag_v3_goal_metadata() = default;


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

    bool operator==(const OptimizationGoalMetadata_conversion_tag_v3_goal_metadata& rhs) const;
    bool operator!=(const OptimizationGoalMetadata_conversion_tag_v3_goal_metadata& rhs) const;

    /////////////////////////////////////////////
    /// OptimizationGoalMetadata_conversion_tag_v3_goal_metadata members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows getAttributionWindows() const;
    void setAttributionWindows(org::openapitools::server::model::OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows const& value);
    bool attributionWindowsIsSet() const;
    void unsetAttribution_windows();
    /// <summary>
    /// 
    /// </summary>
    std::string getConversionEvent() const;
    void setConversionEvent(std::string const& value);
    bool conversionEventIsSet() const;
    void unsetConversion_event();
    /// <summary>
    /// 
    /// </summary>
    std::string getConversionTagId() const;
    void setConversionTagId(std::string const& value);
    bool conversionTagIdIsSet() const;
    void unsetConversion_tag_id();
    /// <summary>
    /// 
    /// </summary>
    std::string getCpaGoalValueInMicroCurrency() const;
    void setCpaGoalValueInMicroCurrency(std::string const& value);
    bool cpaGoalValueInMicroCurrencyIsSet() const;
    void unsetCpa_goal_value_in_micro_currency();
    /// <summary>
    /// Ad group is ROAS optimized
    /// </summary>
    bool isIsRoasOptimized() const;
    void setIsRoasOptimized(bool const value);
    bool isRoasOptimizedIsSet() const;
    void unsetIs_roas_optimized();
    /// <summary>
    /// Conversion learning model type
    /// </summary>
    std::string getLearningModeType() const;
    void setLearningModeType(std::string const& value);
    bool learningModeTypeIsSet() const;
    void unsetLearning_mode_type();

    friend  void to_json(nlohmann::json& j, const OptimizationGoalMetadata_conversion_tag_v3_goal_metadata& o);
    friend  void from_json(const nlohmann::json& j, OptimizationGoalMetadata_conversion_tag_v3_goal_metadata& o);
protected:
    org::openapitools::server::model::OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows m_Attribution_windows;
    bool m_Attribution_windowsIsSet;
    std::string m_Conversion_event;
    bool m_Conversion_eventIsSet;
    std::string m_Conversion_tag_id;
    bool m_Conversion_tag_idIsSet;
    std::string m_Cpa_goal_value_in_micro_currency;
    bool m_Cpa_goal_value_in_micro_currencyIsSet;
    bool m_Is_roas_optimized;
    bool m_Is_roas_optimizedIsSet;
    std::string m_Learning_mode_type;
    bool m_Learning_mode_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* OptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H_ */