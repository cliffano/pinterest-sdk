/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAdsAnalyticsCreateAsyncRequest.h
 *
 * 
 */

#ifndef OAIAdsAnalyticsCreateAsyncRequest_H
#define OAIAdsAnalyticsCreateAsyncRequest_H

#include <QJsonObject>

#include "OAIAdGroupSummaryStatus.h"
#include "OAIAdsAnalyticsCreateAsyncRequest_allOf.h"
#include "OAIAdsAnalyticsCreateAsyncRequest_allOf_1.h"
#include "OAIAdsAnalyticsMetricsFilter.h"
#include "OAIAdsAnalyticsTargetingType.h"
#include "OAICampaignSummaryStatus.h"
#include "OAIConversionAttributionWindowDays.h"
#include "OAIConversionReportAttributionType.h"
#include "OAIConversionReportTimeType.h"
#include "OAIDataOutputFormat.h"
#include "OAIGranularity.h"
#include "OAIMetricsReportingLevel.h"
#include "OAIObjectiveType.h"
#include "OAIPinPromotionSummaryStatus.h"
#include "OAIProductGroupSummaryStatus.h"
#include "OAIReportingColumnAsync.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAdsAnalyticsMetricsFilter;

class OAIAdsAnalyticsCreateAsyncRequest : public OAIObject {
public:
    OAIAdsAnalyticsCreateAsyncRequest();
    OAIAdsAnalyticsCreateAsyncRequest(QString json);
    ~OAIAdsAnalyticsCreateAsyncRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStartDate() const;
    void setStartDate(const QString &start_date);
    bool is_start_date_Set() const;
    bool is_start_date_Valid() const;

    QString getEndDate() const;
    void setEndDate(const QString &end_date);
    bool is_end_date_Set() const;
    bool is_end_date_Valid() const;

    OAIGranularity getGranularity() const;
    void setGranularity(const OAIGranularity &granularity);
    bool is_granularity_Set() const;
    bool is_granularity_Valid() const;

    OAIConversionAttributionWindowDays getClickWindowDays() const;
    void setClickWindowDays(const OAIConversionAttributionWindowDays &click_window_days);
    bool is_click_window_days_Set() const;
    bool is_click_window_days_Valid() const;

    OAIConversionAttributionWindowDays getEngagementWindowDays() const;
    void setEngagementWindowDays(const OAIConversionAttributionWindowDays &engagement_window_days);
    bool is_engagement_window_days_Set() const;
    bool is_engagement_window_days_Valid() const;

    OAIConversionAttributionWindowDays getViewWindowDays() const;
    void setViewWindowDays(const OAIConversionAttributionWindowDays &view_window_days);
    bool is_view_window_days_Set() const;
    bool is_view_window_days_Valid() const;

    OAIConversionReportTimeType getConversionReportTime() const;
    void setConversionReportTime(const OAIConversionReportTimeType &conversion_report_time);
    bool is_conversion_report_time_Set() const;
    bool is_conversion_report_time_Valid() const;

    QList<OAIConversionReportAttributionType> getAttributionTypes() const;
    void setAttributionTypes(const QList<OAIConversionReportAttributionType> &attribution_types);
    bool is_attribution_types_Set() const;
    bool is_attribution_types_Valid() const;

    QList<OAIReportingColumnAsync> getColumns() const;
    void setColumns(const QList<OAIReportingColumnAsync> &columns);
    bool is_columns_Set() const;
    bool is_columns_Valid() const;

    OAIMetricsReportingLevel getLevel() const;
    void setLevel(const OAIMetricsReportingLevel &level);
    bool is_level_Set() const;
    bool is_level_Valid() const;

    OAIDataOutputFormat getReportFormat() const;
    void setReportFormat(const OAIDataOutputFormat &report_format);
    bool is_report_format_Set() const;
    bool is_report_format_Valid() const;

    QList<QString> getCampaignIds() const;
    void setCampaignIds(const QList<QString> &campaign_ids);
    bool is_campaign_ids_Set() const;
    bool is_campaign_ids_Valid() const;

    QList<OAICampaignSummaryStatus> getCampaignStatuses() const;
    void setCampaignStatuses(const QList<OAICampaignSummaryStatus> &campaign_statuses);
    bool is_campaign_statuses_Set() const;
    bool is_campaign_statuses_Valid() const;

    QList<OAIObjectiveType> getCampaignObjectiveTypes() const;
    void setCampaignObjectiveTypes(const QList<OAIObjectiveType> &campaign_objective_types);
    bool is_campaign_objective_types_Set() const;
    bool is_campaign_objective_types_Valid() const;

    QList<QString> getAdGroupIds() const;
    void setAdGroupIds(const QList<QString> &ad_group_ids);
    bool is_ad_group_ids_Set() const;
    bool is_ad_group_ids_Valid() const;

    QList<OAIAdGroupSummaryStatus> getAdGroupStatuses() const;
    void setAdGroupStatuses(const QList<OAIAdGroupSummaryStatus> &ad_group_statuses);
    bool is_ad_group_statuses_Set() const;
    bool is_ad_group_statuses_Valid() const;

    QList<QString> getAdIds() const;
    void setAdIds(const QList<QString> &ad_ids);
    bool is_ad_ids_Set() const;
    bool is_ad_ids_Valid() const;

    QList<OAIPinPromotionSummaryStatus> getAdStatuses() const;
    void setAdStatuses(const QList<OAIPinPromotionSummaryStatus> &ad_statuses);
    bool is_ad_statuses_Set() const;
    bool is_ad_statuses_Valid() const;

    QList<QString> getProductGroupIds() const;
    void setProductGroupIds(const QList<QString> &product_group_ids);
    bool is_product_group_ids_Set() const;
    bool is_product_group_ids_Valid() const;

    QList<OAIProductGroupSummaryStatus> getProductGroupStatuses() const;
    void setProductGroupStatuses(const QList<OAIProductGroupSummaryStatus> &product_group_statuses);
    bool is_product_group_statuses_Set() const;
    bool is_product_group_statuses_Valid() const;

    QList<QString> getProductItemIds() const;
    void setProductItemIds(const QList<QString> &product_item_ids);
    bool is_product_item_ids_Set() const;
    bool is_product_item_ids_Valid() const;

    QList<OAIAdsAnalyticsTargetingType> getTargetingTypes() const;
    void setTargetingTypes(const QList<OAIAdsAnalyticsTargetingType> &targeting_types);
    bool is_targeting_types_Set() const;
    bool is_targeting_types_Valid() const;

    QList<OAIAdsAnalyticsMetricsFilter> getMetricsFilters() const;
    void setMetricsFilters(const QList<OAIAdsAnalyticsMetricsFilter> &metrics_filters);
    bool is_metrics_filters_Set() const;
    bool is_metrics_filters_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString start_date;
    bool m_start_date_isSet;
    bool m_start_date_isValid;

    QString end_date;
    bool m_end_date_isSet;
    bool m_end_date_isValid;

    OAIGranularity granularity;
    bool m_granularity_isSet;
    bool m_granularity_isValid;

    OAIConversionAttributionWindowDays click_window_days;
    bool m_click_window_days_isSet;
    bool m_click_window_days_isValid;

    OAIConversionAttributionWindowDays engagement_window_days;
    bool m_engagement_window_days_isSet;
    bool m_engagement_window_days_isValid;

    OAIConversionAttributionWindowDays view_window_days;
    bool m_view_window_days_isSet;
    bool m_view_window_days_isValid;

    OAIConversionReportTimeType conversion_report_time;
    bool m_conversion_report_time_isSet;
    bool m_conversion_report_time_isValid;

    QList<OAIConversionReportAttributionType> attribution_types;
    bool m_attribution_types_isSet;
    bool m_attribution_types_isValid;

    QList<OAIReportingColumnAsync> columns;
    bool m_columns_isSet;
    bool m_columns_isValid;

    OAIMetricsReportingLevel level;
    bool m_level_isSet;
    bool m_level_isValid;

    OAIDataOutputFormat report_format;
    bool m_report_format_isSet;
    bool m_report_format_isValid;

    QList<QString> campaign_ids;
    bool m_campaign_ids_isSet;
    bool m_campaign_ids_isValid;

    QList<OAICampaignSummaryStatus> campaign_statuses;
    bool m_campaign_statuses_isSet;
    bool m_campaign_statuses_isValid;

    QList<OAIObjectiveType> campaign_objective_types;
    bool m_campaign_objective_types_isSet;
    bool m_campaign_objective_types_isValid;

    QList<QString> ad_group_ids;
    bool m_ad_group_ids_isSet;
    bool m_ad_group_ids_isValid;

    QList<OAIAdGroupSummaryStatus> ad_group_statuses;
    bool m_ad_group_statuses_isSet;
    bool m_ad_group_statuses_isValid;

    QList<QString> ad_ids;
    bool m_ad_ids_isSet;
    bool m_ad_ids_isValid;

    QList<OAIPinPromotionSummaryStatus> ad_statuses;
    bool m_ad_statuses_isSet;
    bool m_ad_statuses_isValid;

    QList<QString> product_group_ids;
    bool m_product_group_ids_isSet;
    bool m_product_group_ids_isValid;

    QList<OAIProductGroupSummaryStatus> product_group_statuses;
    bool m_product_group_statuses_isSet;
    bool m_product_group_statuses_isValid;

    QList<QString> product_item_ids;
    bool m_product_item_ids_isSet;
    bool m_product_item_ids_isValid;

    QList<OAIAdsAnalyticsTargetingType> targeting_types;
    bool m_targeting_types_isSet;
    bool m_targeting_types_isValid;

    QList<OAIAdsAnalyticsMetricsFilter> metrics_filters;
    bool m_metrics_filters_isSet;
    bool m_metrics_filters_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsCreateAsyncRequest)

#endif // OAIAdsAnalyticsCreateAsyncRequest_H
