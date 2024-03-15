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
 * OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata.h
 *
 * 
 */

#ifndef OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H
#define OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H

#include <QJsonObject>

#include "OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows;

class OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata : public OAIObject {
public:
    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata();
    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata(QString json);
    ~OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows getAttributionWindows() const;
    void setAttributionWindows(const OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows &attribution_windows);
    bool is_attribution_windows_Set() const;
    bool is_attribution_windows_Valid() const;

    QString getConversionEvent() const;
    void setConversionEvent(const QString &conversion_event);
    bool is_conversion_event_Set() const;
    bool is_conversion_event_Valid() const;

    QString getConversionTagId() const;
    void setConversionTagId(const QString &conversion_tag_id);
    bool is_conversion_tag_id_Set() const;
    bool is_conversion_tag_id_Valid() const;

    QString getCpaGoalValueInMicroCurrency() const;
    void setCpaGoalValueInMicroCurrency(const QString &cpa_goal_value_in_micro_currency);
    bool is_cpa_goal_value_in_micro_currency_Set() const;
    bool is_cpa_goal_value_in_micro_currency_Valid() const;

    bool isIsRoasOptimized() const;
    void setIsRoasOptimized(const bool &is_roas_optimized);
    bool is_is_roas_optimized_Set() const;
    bool is_is_roas_optimized_Valid() const;

    QString getLearningModeType() const;
    void setLearningModeType(const QString &learning_mode_type);
    bool is_learning_mode_type_Set() const;
    bool is_learning_mode_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows m_attribution_windows;
    bool m_attribution_windows_isSet;
    bool m_attribution_windows_isValid;

    QString m_conversion_event;
    bool m_conversion_event_isSet;
    bool m_conversion_event_isValid;

    QString m_conversion_tag_id;
    bool m_conversion_tag_id_isSet;
    bool m_conversion_tag_id_isValid;

    QString m_cpa_goal_value_in_micro_currency;
    bool m_cpa_goal_value_in_micro_currency_isSet;
    bool m_cpa_goal_value_in_micro_currency_isValid;

    bool m_is_roas_optimized;
    bool m_is_roas_optimized_isSet;
    bool m_is_roas_optimized_isValid;

    QString m_learning_mode_type;
    bool m_learning_mode_type_isSet;
    bool m_learning_mode_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata)

#endif // OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_H
