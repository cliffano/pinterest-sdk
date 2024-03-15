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
 * OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows.h
 *
 * 
 */

#ifndef OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows_H
#define OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows : public OAIObject {
public:
    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows();
    OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows(QString json);
    ~OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getClickWindowDays() const;
    void setClickWindowDays(const qint32 &click_window_days);
    bool is_click_window_days_Set() const;
    bool is_click_window_days_Valid() const;

    qint32 getEngagementWindowDays() const;
    void setEngagementWindowDays(const qint32 &engagement_window_days);
    bool is_engagement_window_days_Set() const;
    bool is_engagement_window_days_Valid() const;

    qint32 getViewWindowDays() const;
    void setViewWindowDays(const qint32 &view_window_days);
    bool is_view_window_days_Set() const;
    bool is_view_window_days_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_click_window_days;
    bool m_click_window_days_isSet;
    bool m_click_window_days_isValid;

    qint32 m_engagement_window_days;
    bool m_engagement_window_days_isSet;
    bool m_engagement_window_days_isValid;

    qint32 m_view_window_days;
    bool m_view_window_days_isSet;
    bool m_view_window_days_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows)

#endif // OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata_attribution_windows_H
