/*
Pinterest REST API

Pinterest's REST API

API version: 5.12.0
Contact: blah+oapicf@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"bytes"
	"fmt"
)

// checks if the AdsAnalyticsCreateAsyncRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdsAnalyticsCreateAsyncRequest{}

// AdsAnalyticsCreateAsyncRequest struct for AdsAnalyticsCreateAsyncRequest
type AdsAnalyticsCreateAsyncRequest struct {
	// Metric report start date (UTC). Format: YYYY-MM-DD
	StartDate string `json:"start_date"`
	// Metric report end date (UTC). Format: YYYY-MM-DD
	EndDate string `json:"end_date"`
	// TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
	Granularity Granularity `json:"granularity"`
	// Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	ClickWindowDays *ConversionAttributionWindowDays `json:"click_window_days,omitempty"`
	// Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	EngagementWindowDays *ConversionAttributionWindowDays `json:"engagement_window_days,omitempty"`
	// Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
	ViewWindowDays *ConversionAttributionWindowDays `json:"view_window_days,omitempty"`
	// The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
	ConversionReportTime *ConversionReportTimeType `json:"conversion_report_time,omitempty"`
	// List of types of attribution for the conversion report
	AttributionTypes []ConversionReportAttributionType `json:"attribution_types,omitempty"`
	// List of campaign ids
	CampaignIds []string `json:"campaign_ids,omitempty"`
	// List of status values for filtering
	CampaignStatuses []CampaignSummaryStatus `json:"campaign_statuses,omitempty"`
	// List of values for filtering. [\"WEB_SESSIONS\"] in BETA.
	CampaignObjectiveTypes []ObjectiveType `json:"campaign_objective_types,omitempty"`
	// List of ad group ids
	AdGroupIds []string `json:"ad_group_ids,omitempty"`
	// List of values for filtering
	AdGroupStatuses []AdGroupSummaryStatus `json:"ad_group_statuses,omitempty"`
	// List of ad ids [This parameter is no supported for Product Item Level Reports]
	AdIds []string `json:"ad_ids,omitempty"`
	// List of values for filtering [This parameter is not supported for Product Item Level Reports]
	AdStatuses []PinPromotionSummaryStatus `json:"ad_statuses,omitempty"`
	// List of product group ids
	ProductGroupIds []string `json:"product_group_ids,omitempty"`
	// List of values for filtering
	ProductGroupStatuses []ProductGroupSummaryStatus `json:"product_group_statuses,omitempty"`
	// List of product item ids
	ProductItemIds []string `json:"product_item_ids,omitempty"`
	// List of targeting types. Requires `level` to be a value ending in `_TARGETING`.
	TargetingTypes []AdsAnalyticsTargetingType `json:"targeting_types,omitempty"`
	// List of metrics filters
	MetricsFilters []AdsAnalyticsMetricsFilter `json:"metrics_filters,omitempty"`
	// Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports.
	Columns []ReportingColumnAsync `json:"columns"`
	// Level of the report
	Level MetricsReportingLevel `json:"level"`
	// Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0.
	ReportFormat *DataOutputFormat `json:"report_format,omitempty"`
}

type _AdsAnalyticsCreateAsyncRequest AdsAnalyticsCreateAsyncRequest

// NewAdsAnalyticsCreateAsyncRequest instantiates a new AdsAnalyticsCreateAsyncRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdsAnalyticsCreateAsyncRequest(startDate string, endDate string, granularity Granularity, columns []ReportingColumnAsync, level MetricsReportingLevel) *AdsAnalyticsCreateAsyncRequest {
	this := AdsAnalyticsCreateAsyncRequest{}
	this.StartDate = startDate
	this.EndDate = endDate
	this.Granularity = granularity
	var clickWindowDays ConversionAttributionWindowDays = _30
	this.ClickWindowDays = &clickWindowDays
	var engagementWindowDays ConversionAttributionWindowDays = _30
	this.EngagementWindowDays = &engagementWindowDays
	var viewWindowDays ConversionAttributionWindowDays = _1
	this.ViewWindowDays = &viewWindowDays
	var conversionReportTime ConversionReportTimeType = AD_ACTION
	this.ConversionReportTime = &conversionReportTime
	this.Columns = columns
	this.Level = level
	var reportFormat DataOutputFormat = JSON
	this.ReportFormat = &reportFormat
	return &this
}

// NewAdsAnalyticsCreateAsyncRequestWithDefaults instantiates a new AdsAnalyticsCreateAsyncRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdsAnalyticsCreateAsyncRequestWithDefaults() *AdsAnalyticsCreateAsyncRequest {
	this := AdsAnalyticsCreateAsyncRequest{}
	var clickWindowDays ConversionAttributionWindowDays = _30
	this.ClickWindowDays = &clickWindowDays
	var engagementWindowDays ConversionAttributionWindowDays = _30
	this.EngagementWindowDays = &engagementWindowDays
	var viewWindowDays ConversionAttributionWindowDays = _1
	this.ViewWindowDays = &viewWindowDays
	var conversionReportTime ConversionReportTimeType = AD_ACTION
	this.ConversionReportTime = &conversionReportTime
	var reportFormat DataOutputFormat = JSON
	this.ReportFormat = &reportFormat
	return &this
}

// GetStartDate returns the StartDate field value
func (o *AdsAnalyticsCreateAsyncRequest) GetStartDate() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.StartDate
}

// GetStartDateOk returns a tuple with the StartDate field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetStartDateOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.StartDate, true
}

// SetStartDate sets field value
func (o *AdsAnalyticsCreateAsyncRequest) SetStartDate(v string) {
	o.StartDate = v
}

// GetEndDate returns the EndDate field value
func (o *AdsAnalyticsCreateAsyncRequest) GetEndDate() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.EndDate
}

// GetEndDateOk returns a tuple with the EndDate field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetEndDateOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.EndDate, true
}

// SetEndDate sets field value
func (o *AdsAnalyticsCreateAsyncRequest) SetEndDate(v string) {
	o.EndDate = v
}

// GetGranularity returns the Granularity field value
func (o *AdsAnalyticsCreateAsyncRequest) GetGranularity() Granularity {
	if o == nil {
		var ret Granularity
		return ret
	}

	return o.Granularity
}

// GetGranularityOk returns a tuple with the Granularity field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetGranularityOk() (*Granularity, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Granularity, true
}

// SetGranularity sets field value
func (o *AdsAnalyticsCreateAsyncRequest) SetGranularity(v Granularity) {
	o.Granularity = v
}

// GetClickWindowDays returns the ClickWindowDays field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetClickWindowDays() ConversionAttributionWindowDays {
	if o == nil || IsNil(o.ClickWindowDays) {
		var ret ConversionAttributionWindowDays
		return ret
	}
	return *o.ClickWindowDays
}

// GetClickWindowDaysOk returns a tuple with the ClickWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetClickWindowDaysOk() (*ConversionAttributionWindowDays, bool) {
	if o == nil || IsNil(o.ClickWindowDays) {
		return nil, false
	}
	return o.ClickWindowDays, true
}

// HasClickWindowDays returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasClickWindowDays() bool {
	if o != nil && !IsNil(o.ClickWindowDays) {
		return true
	}

	return false
}

// SetClickWindowDays gets a reference to the given ConversionAttributionWindowDays and assigns it to the ClickWindowDays field.
func (o *AdsAnalyticsCreateAsyncRequest) SetClickWindowDays(v ConversionAttributionWindowDays) {
	o.ClickWindowDays = &v
}

// GetEngagementWindowDays returns the EngagementWindowDays field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetEngagementWindowDays() ConversionAttributionWindowDays {
	if o == nil || IsNil(o.EngagementWindowDays) {
		var ret ConversionAttributionWindowDays
		return ret
	}
	return *o.EngagementWindowDays
}

// GetEngagementWindowDaysOk returns a tuple with the EngagementWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetEngagementWindowDaysOk() (*ConversionAttributionWindowDays, bool) {
	if o == nil || IsNil(o.EngagementWindowDays) {
		return nil, false
	}
	return o.EngagementWindowDays, true
}

// HasEngagementWindowDays returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasEngagementWindowDays() bool {
	if o != nil && !IsNil(o.EngagementWindowDays) {
		return true
	}

	return false
}

// SetEngagementWindowDays gets a reference to the given ConversionAttributionWindowDays and assigns it to the EngagementWindowDays field.
func (o *AdsAnalyticsCreateAsyncRequest) SetEngagementWindowDays(v ConversionAttributionWindowDays) {
	o.EngagementWindowDays = &v
}

// GetViewWindowDays returns the ViewWindowDays field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetViewWindowDays() ConversionAttributionWindowDays {
	if o == nil || IsNil(o.ViewWindowDays) {
		var ret ConversionAttributionWindowDays
		return ret
	}
	return *o.ViewWindowDays
}

// GetViewWindowDaysOk returns a tuple with the ViewWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetViewWindowDaysOk() (*ConversionAttributionWindowDays, bool) {
	if o == nil || IsNil(o.ViewWindowDays) {
		return nil, false
	}
	return o.ViewWindowDays, true
}

// HasViewWindowDays returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasViewWindowDays() bool {
	if o != nil && !IsNil(o.ViewWindowDays) {
		return true
	}

	return false
}

// SetViewWindowDays gets a reference to the given ConversionAttributionWindowDays and assigns it to the ViewWindowDays field.
func (o *AdsAnalyticsCreateAsyncRequest) SetViewWindowDays(v ConversionAttributionWindowDays) {
	o.ViewWindowDays = &v
}

// GetConversionReportTime returns the ConversionReportTime field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetConversionReportTime() ConversionReportTimeType {
	if o == nil || IsNil(o.ConversionReportTime) {
		var ret ConversionReportTimeType
		return ret
	}
	return *o.ConversionReportTime
}

// GetConversionReportTimeOk returns a tuple with the ConversionReportTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetConversionReportTimeOk() (*ConversionReportTimeType, bool) {
	if o == nil || IsNil(o.ConversionReportTime) {
		return nil, false
	}
	return o.ConversionReportTime, true
}

// HasConversionReportTime returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasConversionReportTime() bool {
	if o != nil && !IsNil(o.ConversionReportTime) {
		return true
	}

	return false
}

// SetConversionReportTime gets a reference to the given ConversionReportTimeType and assigns it to the ConversionReportTime field.
func (o *AdsAnalyticsCreateAsyncRequest) SetConversionReportTime(v ConversionReportTimeType) {
	o.ConversionReportTime = &v
}

// GetAttributionTypes returns the AttributionTypes field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetAttributionTypes() []ConversionReportAttributionType {
	if o == nil || IsNil(o.AttributionTypes) {
		var ret []ConversionReportAttributionType
		return ret
	}
	return o.AttributionTypes
}

// GetAttributionTypesOk returns a tuple with the AttributionTypes field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetAttributionTypesOk() ([]ConversionReportAttributionType, bool) {
	if o == nil || IsNil(o.AttributionTypes) {
		return nil, false
	}
	return o.AttributionTypes, true
}

// HasAttributionTypes returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasAttributionTypes() bool {
	if o != nil && !IsNil(o.AttributionTypes) {
		return true
	}

	return false
}

// SetAttributionTypes gets a reference to the given []ConversionReportAttributionType and assigns it to the AttributionTypes field.
func (o *AdsAnalyticsCreateAsyncRequest) SetAttributionTypes(v []ConversionReportAttributionType) {
	o.AttributionTypes = v
}

// GetCampaignIds returns the CampaignIds field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignIds() []string {
	if o == nil || IsNil(o.CampaignIds) {
		var ret []string
		return ret
	}
	return o.CampaignIds
}

// GetCampaignIdsOk returns a tuple with the CampaignIds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignIdsOk() ([]string, bool) {
	if o == nil || IsNil(o.CampaignIds) {
		return nil, false
	}
	return o.CampaignIds, true
}

// HasCampaignIds returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasCampaignIds() bool {
	if o != nil && !IsNil(o.CampaignIds) {
		return true
	}

	return false
}

// SetCampaignIds gets a reference to the given []string and assigns it to the CampaignIds field.
func (o *AdsAnalyticsCreateAsyncRequest) SetCampaignIds(v []string) {
	o.CampaignIds = v
}

// GetCampaignStatuses returns the CampaignStatuses field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignStatuses() []CampaignSummaryStatus {
	if o == nil || IsNil(o.CampaignStatuses) {
		var ret []CampaignSummaryStatus
		return ret
	}
	return o.CampaignStatuses
}

// GetCampaignStatusesOk returns a tuple with the CampaignStatuses field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignStatusesOk() ([]CampaignSummaryStatus, bool) {
	if o == nil || IsNil(o.CampaignStatuses) {
		return nil, false
	}
	return o.CampaignStatuses, true
}

// HasCampaignStatuses returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasCampaignStatuses() bool {
	if o != nil && !IsNil(o.CampaignStatuses) {
		return true
	}

	return false
}

// SetCampaignStatuses gets a reference to the given []CampaignSummaryStatus and assigns it to the CampaignStatuses field.
func (o *AdsAnalyticsCreateAsyncRequest) SetCampaignStatuses(v []CampaignSummaryStatus) {
	o.CampaignStatuses = v
}

// GetCampaignObjectiveTypes returns the CampaignObjectiveTypes field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignObjectiveTypes() []ObjectiveType {
	if o == nil || IsNil(o.CampaignObjectiveTypes) {
		var ret []ObjectiveType
		return ret
	}
	return o.CampaignObjectiveTypes
}

// GetCampaignObjectiveTypesOk returns a tuple with the CampaignObjectiveTypes field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetCampaignObjectiveTypesOk() ([]ObjectiveType, bool) {
	if o == nil || IsNil(o.CampaignObjectiveTypes) {
		return nil, false
	}
	return o.CampaignObjectiveTypes, true
}

// HasCampaignObjectiveTypes returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasCampaignObjectiveTypes() bool {
	if o != nil && !IsNil(o.CampaignObjectiveTypes) {
		return true
	}

	return false
}

// SetCampaignObjectiveTypes gets a reference to the given []ObjectiveType and assigns it to the CampaignObjectiveTypes field.
func (o *AdsAnalyticsCreateAsyncRequest) SetCampaignObjectiveTypes(v []ObjectiveType) {
	o.CampaignObjectiveTypes = v
}

// GetAdGroupIds returns the AdGroupIds field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdGroupIds() []string {
	if o == nil || IsNil(o.AdGroupIds) {
		var ret []string
		return ret
	}
	return o.AdGroupIds
}

// GetAdGroupIdsOk returns a tuple with the AdGroupIds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdGroupIdsOk() ([]string, bool) {
	if o == nil || IsNil(o.AdGroupIds) {
		return nil, false
	}
	return o.AdGroupIds, true
}

// HasAdGroupIds returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasAdGroupIds() bool {
	if o != nil && !IsNil(o.AdGroupIds) {
		return true
	}

	return false
}

// SetAdGroupIds gets a reference to the given []string and assigns it to the AdGroupIds field.
func (o *AdsAnalyticsCreateAsyncRequest) SetAdGroupIds(v []string) {
	o.AdGroupIds = v
}

// GetAdGroupStatuses returns the AdGroupStatuses field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdGroupStatuses() []AdGroupSummaryStatus {
	if o == nil || IsNil(o.AdGroupStatuses) {
		var ret []AdGroupSummaryStatus
		return ret
	}
	return o.AdGroupStatuses
}

// GetAdGroupStatusesOk returns a tuple with the AdGroupStatuses field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdGroupStatusesOk() ([]AdGroupSummaryStatus, bool) {
	if o == nil || IsNil(o.AdGroupStatuses) {
		return nil, false
	}
	return o.AdGroupStatuses, true
}

// HasAdGroupStatuses returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasAdGroupStatuses() bool {
	if o != nil && !IsNil(o.AdGroupStatuses) {
		return true
	}

	return false
}

// SetAdGroupStatuses gets a reference to the given []AdGroupSummaryStatus and assigns it to the AdGroupStatuses field.
func (o *AdsAnalyticsCreateAsyncRequest) SetAdGroupStatuses(v []AdGroupSummaryStatus) {
	o.AdGroupStatuses = v
}

// GetAdIds returns the AdIds field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdIds() []string {
	if o == nil || IsNil(o.AdIds) {
		var ret []string
		return ret
	}
	return o.AdIds
}

// GetAdIdsOk returns a tuple with the AdIds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdIdsOk() ([]string, bool) {
	if o == nil || IsNil(o.AdIds) {
		return nil, false
	}
	return o.AdIds, true
}

// HasAdIds returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasAdIds() bool {
	if o != nil && !IsNil(o.AdIds) {
		return true
	}

	return false
}

// SetAdIds gets a reference to the given []string and assigns it to the AdIds field.
func (o *AdsAnalyticsCreateAsyncRequest) SetAdIds(v []string) {
	o.AdIds = v
}

// GetAdStatuses returns the AdStatuses field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdStatuses() []PinPromotionSummaryStatus {
	if o == nil || IsNil(o.AdStatuses) {
		var ret []PinPromotionSummaryStatus
		return ret
	}
	return o.AdStatuses
}

// GetAdStatusesOk returns a tuple with the AdStatuses field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetAdStatusesOk() ([]PinPromotionSummaryStatus, bool) {
	if o == nil || IsNil(o.AdStatuses) {
		return nil, false
	}
	return o.AdStatuses, true
}

// HasAdStatuses returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasAdStatuses() bool {
	if o != nil && !IsNil(o.AdStatuses) {
		return true
	}

	return false
}

// SetAdStatuses gets a reference to the given []PinPromotionSummaryStatus and assigns it to the AdStatuses field.
func (o *AdsAnalyticsCreateAsyncRequest) SetAdStatuses(v []PinPromotionSummaryStatus) {
	o.AdStatuses = v
}

// GetProductGroupIds returns the ProductGroupIds field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductGroupIds() []string {
	if o == nil || IsNil(o.ProductGroupIds) {
		var ret []string
		return ret
	}
	return o.ProductGroupIds
}

// GetProductGroupIdsOk returns a tuple with the ProductGroupIds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductGroupIdsOk() ([]string, bool) {
	if o == nil || IsNil(o.ProductGroupIds) {
		return nil, false
	}
	return o.ProductGroupIds, true
}

// HasProductGroupIds returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasProductGroupIds() bool {
	if o != nil && !IsNil(o.ProductGroupIds) {
		return true
	}

	return false
}

// SetProductGroupIds gets a reference to the given []string and assigns it to the ProductGroupIds field.
func (o *AdsAnalyticsCreateAsyncRequest) SetProductGroupIds(v []string) {
	o.ProductGroupIds = v
}

// GetProductGroupStatuses returns the ProductGroupStatuses field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductGroupStatuses() []ProductGroupSummaryStatus {
	if o == nil || IsNil(o.ProductGroupStatuses) {
		var ret []ProductGroupSummaryStatus
		return ret
	}
	return o.ProductGroupStatuses
}

// GetProductGroupStatusesOk returns a tuple with the ProductGroupStatuses field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductGroupStatusesOk() ([]ProductGroupSummaryStatus, bool) {
	if o == nil || IsNil(o.ProductGroupStatuses) {
		return nil, false
	}
	return o.ProductGroupStatuses, true
}

// HasProductGroupStatuses returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasProductGroupStatuses() bool {
	if o != nil && !IsNil(o.ProductGroupStatuses) {
		return true
	}

	return false
}

// SetProductGroupStatuses gets a reference to the given []ProductGroupSummaryStatus and assigns it to the ProductGroupStatuses field.
func (o *AdsAnalyticsCreateAsyncRequest) SetProductGroupStatuses(v []ProductGroupSummaryStatus) {
	o.ProductGroupStatuses = v
}

// GetProductItemIds returns the ProductItemIds field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductItemIds() []string {
	if o == nil || IsNil(o.ProductItemIds) {
		var ret []string
		return ret
	}
	return o.ProductItemIds
}

// GetProductItemIdsOk returns a tuple with the ProductItemIds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetProductItemIdsOk() ([]string, bool) {
	if o == nil || IsNil(o.ProductItemIds) {
		return nil, false
	}
	return o.ProductItemIds, true
}

// HasProductItemIds returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasProductItemIds() bool {
	if o != nil && !IsNil(o.ProductItemIds) {
		return true
	}

	return false
}

// SetProductItemIds gets a reference to the given []string and assigns it to the ProductItemIds field.
func (o *AdsAnalyticsCreateAsyncRequest) SetProductItemIds(v []string) {
	o.ProductItemIds = v
}

// GetTargetingTypes returns the TargetingTypes field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetTargetingTypes() []AdsAnalyticsTargetingType {
	if o == nil || IsNil(o.TargetingTypes) {
		var ret []AdsAnalyticsTargetingType
		return ret
	}
	return o.TargetingTypes
}

// GetTargetingTypesOk returns a tuple with the TargetingTypes field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetTargetingTypesOk() ([]AdsAnalyticsTargetingType, bool) {
	if o == nil || IsNil(o.TargetingTypes) {
		return nil, false
	}
	return o.TargetingTypes, true
}

// HasTargetingTypes returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasTargetingTypes() bool {
	if o != nil && !IsNil(o.TargetingTypes) {
		return true
	}

	return false
}

// SetTargetingTypes gets a reference to the given []AdsAnalyticsTargetingType and assigns it to the TargetingTypes field.
func (o *AdsAnalyticsCreateAsyncRequest) SetTargetingTypes(v []AdsAnalyticsTargetingType) {
	o.TargetingTypes = v
}

// GetMetricsFilters returns the MetricsFilters field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetMetricsFilters() []AdsAnalyticsMetricsFilter {
	if o == nil || IsNil(o.MetricsFilters) {
		var ret []AdsAnalyticsMetricsFilter
		return ret
	}
	return o.MetricsFilters
}

// GetMetricsFiltersOk returns a tuple with the MetricsFilters field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetMetricsFiltersOk() ([]AdsAnalyticsMetricsFilter, bool) {
	if o == nil || IsNil(o.MetricsFilters) {
		return nil, false
	}
	return o.MetricsFilters, true
}

// HasMetricsFilters returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasMetricsFilters() bool {
	if o != nil && !IsNil(o.MetricsFilters) {
		return true
	}

	return false
}

// SetMetricsFilters gets a reference to the given []AdsAnalyticsMetricsFilter and assigns it to the MetricsFilters field.
func (o *AdsAnalyticsCreateAsyncRequest) SetMetricsFilters(v []AdsAnalyticsMetricsFilter) {
	o.MetricsFilters = v
}

// GetColumns returns the Columns field value
func (o *AdsAnalyticsCreateAsyncRequest) GetColumns() []ReportingColumnAsync {
	if o == nil {
		var ret []ReportingColumnAsync
		return ret
	}

	return o.Columns
}

// GetColumnsOk returns a tuple with the Columns field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetColumnsOk() ([]ReportingColumnAsync, bool) {
	if o == nil {
		return nil, false
	}
	return o.Columns, true
}

// SetColumns sets field value
func (o *AdsAnalyticsCreateAsyncRequest) SetColumns(v []ReportingColumnAsync) {
	o.Columns = v
}

// GetLevel returns the Level field value
func (o *AdsAnalyticsCreateAsyncRequest) GetLevel() MetricsReportingLevel {
	if o == nil {
		var ret MetricsReportingLevel
		return ret
	}

	return o.Level
}

// GetLevelOk returns a tuple with the Level field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetLevelOk() (*MetricsReportingLevel, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Level, true
}

// SetLevel sets field value
func (o *AdsAnalyticsCreateAsyncRequest) SetLevel(v MetricsReportingLevel) {
	o.Level = v
}

// GetReportFormat returns the ReportFormat field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncRequest) GetReportFormat() DataOutputFormat {
	if o == nil || IsNil(o.ReportFormat) {
		var ret DataOutputFormat
		return ret
	}
	return *o.ReportFormat
}

// GetReportFormatOk returns a tuple with the ReportFormat field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncRequest) GetReportFormatOk() (*DataOutputFormat, bool) {
	if o == nil || IsNil(o.ReportFormat) {
		return nil, false
	}
	return o.ReportFormat, true
}

// HasReportFormat returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncRequest) HasReportFormat() bool {
	if o != nil && !IsNil(o.ReportFormat) {
		return true
	}

	return false
}

// SetReportFormat gets a reference to the given DataOutputFormat and assigns it to the ReportFormat field.
func (o *AdsAnalyticsCreateAsyncRequest) SetReportFormat(v DataOutputFormat) {
	o.ReportFormat = &v
}

func (o AdsAnalyticsCreateAsyncRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdsAnalyticsCreateAsyncRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["start_date"] = o.StartDate
	toSerialize["end_date"] = o.EndDate
	toSerialize["granularity"] = o.Granularity
	if !IsNil(o.ClickWindowDays) {
		toSerialize["click_window_days"] = o.ClickWindowDays
	}
	if !IsNil(o.EngagementWindowDays) {
		toSerialize["engagement_window_days"] = o.EngagementWindowDays
	}
	if !IsNil(o.ViewWindowDays) {
		toSerialize["view_window_days"] = o.ViewWindowDays
	}
	if !IsNil(o.ConversionReportTime) {
		toSerialize["conversion_report_time"] = o.ConversionReportTime
	}
	if !IsNil(o.AttributionTypes) {
		toSerialize["attribution_types"] = o.AttributionTypes
	}
	if !IsNil(o.CampaignIds) {
		toSerialize["campaign_ids"] = o.CampaignIds
	}
	if !IsNil(o.CampaignStatuses) {
		toSerialize["campaign_statuses"] = o.CampaignStatuses
	}
	if !IsNil(o.CampaignObjectiveTypes) {
		toSerialize["campaign_objective_types"] = o.CampaignObjectiveTypes
	}
	if !IsNil(o.AdGroupIds) {
		toSerialize["ad_group_ids"] = o.AdGroupIds
	}
	if !IsNil(o.AdGroupStatuses) {
		toSerialize["ad_group_statuses"] = o.AdGroupStatuses
	}
	if !IsNil(o.AdIds) {
		toSerialize["ad_ids"] = o.AdIds
	}
	if !IsNil(o.AdStatuses) {
		toSerialize["ad_statuses"] = o.AdStatuses
	}
	if !IsNil(o.ProductGroupIds) {
		toSerialize["product_group_ids"] = o.ProductGroupIds
	}
	if !IsNil(o.ProductGroupStatuses) {
		toSerialize["product_group_statuses"] = o.ProductGroupStatuses
	}
	if !IsNil(o.ProductItemIds) {
		toSerialize["product_item_ids"] = o.ProductItemIds
	}
	if !IsNil(o.TargetingTypes) {
		toSerialize["targeting_types"] = o.TargetingTypes
	}
	if !IsNil(o.MetricsFilters) {
		toSerialize["metrics_filters"] = o.MetricsFilters
	}
	toSerialize["columns"] = o.Columns
	toSerialize["level"] = o.Level
	if !IsNil(o.ReportFormat) {
		toSerialize["report_format"] = o.ReportFormat
	}
	return toSerialize, nil
}

func (o *AdsAnalyticsCreateAsyncRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"start_date",
		"end_date",
		"granularity",
		"columns",
		"level",
	}

	allProperties := make(map[string]interface{})

	err = json.Unmarshal(data, &allProperties)

	if err != nil {
		return err;
	}

	for _, requiredProperty := range(requiredProperties) {
		if _, exists := allProperties[requiredProperty]; !exists {
			return fmt.Errorf("no value given for required property %v", requiredProperty)
		}
	}

	varAdsAnalyticsCreateAsyncRequest := _AdsAnalyticsCreateAsyncRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varAdsAnalyticsCreateAsyncRequest)

	if err != nil {
		return err
	}

	*o = AdsAnalyticsCreateAsyncRequest(varAdsAnalyticsCreateAsyncRequest)

	return err
}

type NullableAdsAnalyticsCreateAsyncRequest struct {
	value *AdsAnalyticsCreateAsyncRequest
	isSet bool
}

func (v NullableAdsAnalyticsCreateAsyncRequest) Get() *AdsAnalyticsCreateAsyncRequest {
	return v.value
}

func (v *NullableAdsAnalyticsCreateAsyncRequest) Set(val *AdsAnalyticsCreateAsyncRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableAdsAnalyticsCreateAsyncRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableAdsAnalyticsCreateAsyncRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdsAnalyticsCreateAsyncRequest(val *AdsAnalyticsCreateAsyncRequest) *NullableAdsAnalyticsCreateAsyncRequest {
	return &NullableAdsAnalyticsCreateAsyncRequest{value: val, isSet: true}
}

func (v NullableAdsAnalyticsCreateAsyncRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdsAnalyticsCreateAsyncRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


