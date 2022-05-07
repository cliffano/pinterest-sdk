package models

type AdsAnalyticsCreateAsyncRequest struct {

	// Metric report start date (UTC). Format: YYYY-MM-DD
	StartDate string `json:"start_date"`

	// Metric report end date (UTC). Format: YYYY-MM-DD
	EndDate string `json:"end_date"`

	// TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
	Granularity Granularity `json:"granularity"`

	// Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	ClickWindowDays ConversionAttributionWindowDays `json:"click_window_days,omitempty"`

	// Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	EngagementWindowDays ConversionAttributionWindowDays `json:"engagement_window_days,omitempty"`

	// Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
	ViewWindowDays ConversionAttributionWindowDays `json:"view_window_days,omitempty"`

	// The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
	ConversionReportTime ConversionReportTimeType `json:"conversion_report_time,omitempty"`

	// List of types of attribution for the conversion report
	AttributionTypes []ConversionReportAttributionType `json:"attribution_types,omitempty"`

	// Metric and entity columns
	Columns []ReportingColumnAsync `json:"columns"`

	// Level of the report
	Level MetricsReportingLevel `json:"level"`

	// Specification for formatting report data
	ReportFormat DataOutputFormat `json:"report_format,omitempty"`

	// List of campaign ids
	CampaignIds []string `json:"campaign_ids,omitempty"`

	// List of status values for filtering
	CampaignStatuses []CampaignSummaryStatus `json:"campaign_statuses,omitempty"`

	// List of values for filtering
	CampaignObjectiveTypes []ObjectiveType `json:"campaign_objective_types,omitempty"`

	// List of ad group ids
	AdGroupIds []string `json:"ad_group_ids,omitempty"`

	// List of values for filtering
	AdGroupStatuses []AdGroupSummaryStatus `json:"ad_group_statuses,omitempty"`

	// List of ad ids
	AdIds []string `json:"ad_ids,omitempty"`

	// List of values for filtering
	AdStatuses []PinPromotionSummaryStatus `json:"ad_statuses,omitempty"`

	// List of product group ids
	ProductGroupIds []string `json:"product_group_ids,omitempty"`

	// List of values for filtering
	ProductGroupStatuses []ProductGroupSummaryStatus `json:"product_group_statuses,omitempty"`

	// List of product item ids
	ProductItemIds []string `json:"product_item_ids,omitempty"`

	// List of targeting types
	TargetingTypes []AdsAnalyticsTargetingType `json:"targeting_types,omitempty"`

	// List of metrics filters
	MetricsFilters []AdsAnalyticsMetricsFilter `json:"metrics_filters,omitempty"`
}
