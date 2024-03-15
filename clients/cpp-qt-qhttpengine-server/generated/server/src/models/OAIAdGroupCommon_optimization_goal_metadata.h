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
 * OAIAdGroupCommon_optimization_goal_metadata.h
 *
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;.
 */

#ifndef OAIAdGroupCommon_optimization_goal_metadata_H
#define OAIAdGroupCommon_optimization_goal_metadata_H

#include <QJsonObject>

#include "OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata.h"
#include "OAIOptimizationGoalMetadata_frequency_goal_metadata.h"
#include "OAIOptimizationGoalMetadata_scrollup_goal_metadata.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdGroupCommon_optimization_goal_metadata : public OAIObject {
public:
    OAIAdGroupCommon_optimization_goal_metadata();
    OAIAdGroupCommon_optimization_goal_metadata(QString json);
    ~OAIAdGroupCommon_optimization_goal_metadata() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata getConversionTagV3GoalMetadata() const;
    void setConversionTagV3GoalMetadata(const OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata &conversion_tag_v3_goal_metadata);
    bool is_conversion_tag_v3_goal_metadata_Set() const;
    bool is_conversion_tag_v3_goal_metadata_Valid() const;

    OAIOptimizationGoalMetadata_frequency_goal_metadata getFrequencyGoalMetadata() const;
    void setFrequencyGoalMetadata(const OAIOptimizationGoalMetadata_frequency_goal_metadata &frequency_goal_metadata);
    bool is_frequency_goal_metadata_Set() const;
    bool is_frequency_goal_metadata_Valid() const;

    OAIOptimizationGoalMetadata_scrollup_goal_metadata getScrollupGoalMetadata() const;
    void setScrollupGoalMetadata(const OAIOptimizationGoalMetadata_scrollup_goal_metadata &scrollup_goal_metadata);
    bool is_scrollup_goal_metadata_Set() const;
    bool is_scrollup_goal_metadata_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata conversion_tag_v3_goal_metadata;
    bool m_conversion_tag_v3_goal_metadata_isSet;
    bool m_conversion_tag_v3_goal_metadata_isValid;

    OAIOptimizationGoalMetadata_frequency_goal_metadata frequency_goal_metadata;
    bool m_frequency_goal_metadata_isSet;
    bool m_frequency_goal_metadata_isValid;

    OAIOptimizationGoalMetadata_scrollup_goal_metadata scrollup_goal_metadata;
    bool m_scrollup_goal_metadata_isSet;
    bool m_scrollup_goal_metadata_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdGroupCommon_optimization_goal_metadata)

#endif // OAIAdGroupCommon_optimization_goal_metadata_H
