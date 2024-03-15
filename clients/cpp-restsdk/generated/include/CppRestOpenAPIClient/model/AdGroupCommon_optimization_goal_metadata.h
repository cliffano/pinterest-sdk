/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdGroupCommon_optimization_goal_metadata.h
 *
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCommon_optimization_goal_metadata_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCommon_optimization_goal_metadata_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/OptimizationGoalMetadata_scrollup_goal_metadata.h"
#include "CppRestOpenAPIClient/model/OptimizationGoalMetadata_conversion_tag_v3_goal_metadata.h"
#include "CppRestOpenAPIClient/model/OptimizationGoalMetadata_frequency_goal_metadata.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class OptimizationGoalMetadata_conversion_tag_v3_goal_metadata;
class OptimizationGoalMetadata_frequency_goal_metadata;
class OptimizationGoalMetadata_scrollup_goal_metadata;

/// <summary>
/// Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;.
/// </summary>
class  AdGroupCommon_optimization_goal_metadata
    : public ModelBase
{
public:
    AdGroupCommon_optimization_goal_metadata();
    virtual ~AdGroupCommon_optimization_goal_metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdGroupCommon_optimization_goal_metadata members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OptimizationGoalMetadata_conversion_tag_v3_goal_metadata> getConversionTagV3GoalMetadata() const;
    bool conversionTagV3GoalMetadataIsSet() const;
    void unsetConversion_tag_v3_goal_metadata();

    void setConversionTagV3GoalMetadata(const std::shared_ptr<OptimizationGoalMetadata_conversion_tag_v3_goal_metadata>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OptimizationGoalMetadata_frequency_goal_metadata> getFrequencyGoalMetadata() const;
    bool frequencyGoalMetadataIsSet() const;
    void unsetFrequency_goal_metadata();

    void setFrequencyGoalMetadata(const std::shared_ptr<OptimizationGoalMetadata_frequency_goal_metadata>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OptimizationGoalMetadata_scrollup_goal_metadata> getScrollupGoalMetadata() const;
    bool scrollupGoalMetadataIsSet() const;
    void unsetScrollup_goal_metadata();

    void setScrollupGoalMetadata(const std::shared_ptr<OptimizationGoalMetadata_scrollup_goal_metadata>& value);


protected:
    std::shared_ptr<OptimizationGoalMetadata_conversion_tag_v3_goal_metadata> m_Conversion_tag_v3_goal_metadata;
    bool m_Conversion_tag_v3_goal_metadataIsSet;
    std::shared_ptr<OptimizationGoalMetadata_frequency_goal_metadata> m_Frequency_goal_metadata;
    bool m_Frequency_goal_metadataIsSet;
    std::shared_ptr<OptimizationGoalMetadata_scrollup_goal_metadata> m_Scrollup_goal_metadata;
    bool m_Scrollup_goal_metadataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCommon_optimization_goal_metadata_H_ */
