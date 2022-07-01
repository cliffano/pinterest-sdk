/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: blah@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// AdGroupResponseAllOf struct for AdGroupResponseAllOf
type AdGroupResponseAllOf struct {
	// Ad group name.
	Name *string `json:"name,omitempty"`
	// Ad group/entity status.
	Status *EntityStatus `json:"status,omitempty"`
	// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
	BudgetInMicroCurrency NullableInt32 `json:"budget_in_micro_currency,omitempty"`
	// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
	BidInMicroCurrency NullableInt32 `json:"bid_in_micro_currency,omitempty"`
	// Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
	BudgetType *string `json:"budget_type,omitempty"`
	// Ad group start time. Unix timestamp in seconds. Defaults to current time.
	StartTime NullableInt32 `json:"start_time,omitempty"`
	// Ad group end time. Unix timestamp in seconds.
	EndTime NullableInt32 `json:"end_time,omitempty"`
	// Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'
	TargetingSpec *map[string][]string `json:"targeting_spec,omitempty"`
	// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
	LifetimeFrequencyCap *int32 `json:"lifetime_frequency_cap,omitempty"`
	// Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
	TrackingUrls TrackingUrls `json:"tracking_urls,omitempty"`
	// Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
	AutoTargetingEnabled NullableBool `json:"auto_targeting_enabled,omitempty"`
	// <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.
	PlacementGroup *PlacementGroupType `json:"placement_group,omitempty"`
	// Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
	PacingDeliveryType *PacingDeliveryType `json:"pacing_delivery_type,omitempty"`
	// oCPM learn mode
	ConversionLearningModeType NullableString `json:"conversion_learning_mode_type,omitempty"`
	// Ad group summary status.
	SummaryStatus *AdGroupSummaryStatus `json:"summary_status,omitempty"`
	// Feed Profile ID associated to the adgroup.
	FeedProfileId *string `json:"feed_profile_id,omitempty"`
}

// NewAdGroupResponseAllOf instantiates a new AdGroupResponseAllOf object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdGroupResponseAllOf() *AdGroupResponseAllOf {
	this := AdGroupResponseAllOf{}
	return &this
}

// NewAdGroupResponseAllOfWithDefaults instantiates a new AdGroupResponseAllOf object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdGroupResponseAllOfWithDefaults() *AdGroupResponseAllOf {
	this := AdGroupResponseAllOf{}
	return &this
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *AdGroupResponseAllOf) SetName(v string) {
	o.Name = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetStatus() EntityStatus {
	if o == nil || o.Status == nil {
		var ret EntityStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetStatusOk() (*EntityStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given EntityStatus and assigns it to the Status field.
func (o *AdGroupResponseAllOf) SetStatus(v EntityStatus) {
	o.Status = &v
}

// GetBudgetInMicroCurrency returns the BudgetInMicroCurrency field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetBudgetInMicroCurrency() int32 {
	if o == nil || o.BudgetInMicroCurrency.Get() == nil {
		var ret int32
		return ret
	}
	return *o.BudgetInMicroCurrency.Get()
}

// GetBudgetInMicroCurrencyOk returns a tuple with the BudgetInMicroCurrency field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetBudgetInMicroCurrencyOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.BudgetInMicroCurrency.Get(), o.BudgetInMicroCurrency.IsSet()
}

// HasBudgetInMicroCurrency returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasBudgetInMicroCurrency() bool {
	if o != nil && o.BudgetInMicroCurrency.IsSet() {
		return true
	}

	return false
}

// SetBudgetInMicroCurrency gets a reference to the given NullableInt32 and assigns it to the BudgetInMicroCurrency field.
func (o *AdGroupResponseAllOf) SetBudgetInMicroCurrency(v int32) {
	o.BudgetInMicroCurrency.Set(&v)
}
// SetBudgetInMicroCurrencyNil sets the value for BudgetInMicroCurrency to be an explicit nil
func (o *AdGroupResponseAllOf) SetBudgetInMicroCurrencyNil() {
	o.BudgetInMicroCurrency.Set(nil)
}

// UnsetBudgetInMicroCurrency ensures that no value is present for BudgetInMicroCurrency, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetBudgetInMicroCurrency() {
	o.BudgetInMicroCurrency.Unset()
}

// GetBidInMicroCurrency returns the BidInMicroCurrency field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetBidInMicroCurrency() int32 {
	if o == nil || o.BidInMicroCurrency.Get() == nil {
		var ret int32
		return ret
	}
	return *o.BidInMicroCurrency.Get()
}

// GetBidInMicroCurrencyOk returns a tuple with the BidInMicroCurrency field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetBidInMicroCurrencyOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.BidInMicroCurrency.Get(), o.BidInMicroCurrency.IsSet()
}

// HasBidInMicroCurrency returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasBidInMicroCurrency() bool {
	if o != nil && o.BidInMicroCurrency.IsSet() {
		return true
	}

	return false
}

// SetBidInMicroCurrency gets a reference to the given NullableInt32 and assigns it to the BidInMicroCurrency field.
func (o *AdGroupResponseAllOf) SetBidInMicroCurrency(v int32) {
	o.BidInMicroCurrency.Set(&v)
}
// SetBidInMicroCurrencyNil sets the value for BidInMicroCurrency to be an explicit nil
func (o *AdGroupResponseAllOf) SetBidInMicroCurrencyNil() {
	o.BidInMicroCurrency.Set(nil)
}

// UnsetBidInMicroCurrency ensures that no value is present for BidInMicroCurrency, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetBidInMicroCurrency() {
	o.BidInMicroCurrency.Unset()
}

// GetBudgetType returns the BudgetType field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetBudgetType() string {
	if o == nil || o.BudgetType == nil {
		var ret string
		return ret
	}
	return *o.BudgetType
}

// GetBudgetTypeOk returns a tuple with the BudgetType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetBudgetTypeOk() (*string, bool) {
	if o == nil || o.BudgetType == nil {
		return nil, false
	}
	return o.BudgetType, true
}

// HasBudgetType returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasBudgetType() bool {
	if o != nil && o.BudgetType != nil {
		return true
	}

	return false
}

// SetBudgetType gets a reference to the given string and assigns it to the BudgetType field.
func (o *AdGroupResponseAllOf) SetBudgetType(v string) {
	o.BudgetType = &v
}

// GetStartTime returns the StartTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetStartTime() int32 {
	if o == nil || o.StartTime.Get() == nil {
		var ret int32
		return ret
	}
	return *o.StartTime.Get()
}

// GetStartTimeOk returns a tuple with the StartTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetStartTimeOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.StartTime.Get(), o.StartTime.IsSet()
}

// HasStartTime returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasStartTime() bool {
	if o != nil && o.StartTime.IsSet() {
		return true
	}

	return false
}

// SetStartTime gets a reference to the given NullableInt32 and assigns it to the StartTime field.
func (o *AdGroupResponseAllOf) SetStartTime(v int32) {
	o.StartTime.Set(&v)
}
// SetStartTimeNil sets the value for StartTime to be an explicit nil
func (o *AdGroupResponseAllOf) SetStartTimeNil() {
	o.StartTime.Set(nil)
}

// UnsetStartTime ensures that no value is present for StartTime, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetStartTime() {
	o.StartTime.Unset()
}

// GetEndTime returns the EndTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetEndTime() int32 {
	if o == nil || o.EndTime.Get() == nil {
		var ret int32
		return ret
	}
	return *o.EndTime.Get()
}

// GetEndTimeOk returns a tuple with the EndTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetEndTimeOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.EndTime.Get(), o.EndTime.IsSet()
}

// HasEndTime returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasEndTime() bool {
	if o != nil && o.EndTime.IsSet() {
		return true
	}

	return false
}

// SetEndTime gets a reference to the given NullableInt32 and assigns it to the EndTime field.
func (o *AdGroupResponseAllOf) SetEndTime(v int32) {
	o.EndTime.Set(&v)
}
// SetEndTimeNil sets the value for EndTime to be an explicit nil
func (o *AdGroupResponseAllOf) SetEndTimeNil() {
	o.EndTime.Set(nil)
}

// UnsetEndTime ensures that no value is present for EndTime, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetEndTime() {
	o.EndTime.Unset()
}

// GetTargetingSpec returns the TargetingSpec field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetTargetingSpec() map[string][]string {
	if o == nil || o.TargetingSpec == nil {
		var ret map[string][]string
		return ret
	}
	return *o.TargetingSpec
}

// GetTargetingSpecOk returns a tuple with the TargetingSpec field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetTargetingSpecOk() (*map[string][]string, bool) {
	if o == nil || o.TargetingSpec == nil {
		return nil, false
	}
	return o.TargetingSpec, true
}

// HasTargetingSpec returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasTargetingSpec() bool {
	if o != nil && o.TargetingSpec != nil {
		return true
	}

	return false
}

// SetTargetingSpec gets a reference to the given map[string][]string and assigns it to the TargetingSpec field.
func (o *AdGroupResponseAllOf) SetTargetingSpec(v map[string][]string) {
	o.TargetingSpec = &v
}

// GetLifetimeFrequencyCap returns the LifetimeFrequencyCap field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetLifetimeFrequencyCap() int32 {
	if o == nil || o.LifetimeFrequencyCap == nil {
		var ret int32
		return ret
	}
	return *o.LifetimeFrequencyCap
}

// GetLifetimeFrequencyCapOk returns a tuple with the LifetimeFrequencyCap field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetLifetimeFrequencyCapOk() (*int32, bool) {
	if o == nil || o.LifetimeFrequencyCap == nil {
		return nil, false
	}
	return o.LifetimeFrequencyCap, true
}

// HasLifetimeFrequencyCap returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasLifetimeFrequencyCap() bool {
	if o != nil && o.LifetimeFrequencyCap != nil {
		return true
	}

	return false
}

// SetLifetimeFrequencyCap gets a reference to the given int32 and assigns it to the LifetimeFrequencyCap field.
func (o *AdGroupResponseAllOf) SetLifetimeFrequencyCap(v int32) {
	o.LifetimeFrequencyCap = &v
}

// GetTrackingUrls returns the TrackingUrls field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetTrackingUrls() TrackingUrls {
	if o == nil || o.TrackingUrls.Get() == nil {
		var ret TrackingUrls
		return ret
	}
	return *o.TrackingUrls.Get()
}

// GetTrackingUrlsOk returns a tuple with the TrackingUrls field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetTrackingUrlsOk() (*TrackingUrls, bool) {
	if o == nil  {
		return nil, false
	}
	return o.TrackingUrls.Get(), o.TrackingUrls.IsSet()
}

// HasTrackingUrls returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasTrackingUrls() bool {
	if o != nil && o.TrackingUrls.IsSet() {
		return true
	}

	return false
}

// SetTrackingUrls gets a reference to the given TrackingUrls and assigns it to the TrackingUrls field.
func (o *AdGroupResponseAllOf) SetTrackingUrls(v TrackingUrls) {
	o.TrackingUrls.Set(&v)
}
// SetTrackingUrlsNil sets the value for TrackingUrls to be an explicit nil
func (o *AdGroupResponseAllOf) SetTrackingUrlsNil() {
	o.TrackingUrls.Set(nil)
}

// UnsetTrackingUrls ensures that no value is present for TrackingUrls, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetTrackingUrls() {
	o.TrackingUrls.Unset()
}

// GetAutoTargetingEnabled returns the AutoTargetingEnabled field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetAutoTargetingEnabled() bool {
	if o == nil || o.AutoTargetingEnabled.Get() == nil {
		var ret bool
		return ret
	}
	return *o.AutoTargetingEnabled.Get()
}

// GetAutoTargetingEnabledOk returns a tuple with the AutoTargetingEnabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetAutoTargetingEnabledOk() (*bool, bool) {
	if o == nil  {
		return nil, false
	}
	return o.AutoTargetingEnabled.Get(), o.AutoTargetingEnabled.IsSet()
}

// HasAutoTargetingEnabled returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasAutoTargetingEnabled() bool {
	if o != nil && o.AutoTargetingEnabled.IsSet() {
		return true
	}

	return false
}

// SetAutoTargetingEnabled gets a reference to the given NullableBool and assigns it to the AutoTargetingEnabled field.
func (o *AdGroupResponseAllOf) SetAutoTargetingEnabled(v bool) {
	o.AutoTargetingEnabled.Set(&v)
}
// SetAutoTargetingEnabledNil sets the value for AutoTargetingEnabled to be an explicit nil
func (o *AdGroupResponseAllOf) SetAutoTargetingEnabledNil() {
	o.AutoTargetingEnabled.Set(nil)
}

// UnsetAutoTargetingEnabled ensures that no value is present for AutoTargetingEnabled, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetAutoTargetingEnabled() {
	o.AutoTargetingEnabled.Unset()
}

// GetPlacementGroup returns the PlacementGroup field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetPlacementGroup() PlacementGroupType {
	if o == nil || o.PlacementGroup == nil {
		var ret PlacementGroupType
		return ret
	}
	return *o.PlacementGroup
}

// GetPlacementGroupOk returns a tuple with the PlacementGroup field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetPlacementGroupOk() (*PlacementGroupType, bool) {
	if o == nil || o.PlacementGroup == nil {
		return nil, false
	}
	return o.PlacementGroup, true
}

// HasPlacementGroup returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasPlacementGroup() bool {
	if o != nil && o.PlacementGroup != nil {
		return true
	}

	return false
}

// SetPlacementGroup gets a reference to the given PlacementGroupType and assigns it to the PlacementGroup field.
func (o *AdGroupResponseAllOf) SetPlacementGroup(v PlacementGroupType) {
	o.PlacementGroup = &v
}

// GetPacingDeliveryType returns the PacingDeliveryType field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetPacingDeliveryType() PacingDeliveryType {
	if o == nil || o.PacingDeliveryType == nil {
		var ret PacingDeliveryType
		return ret
	}
	return *o.PacingDeliveryType
}

// GetPacingDeliveryTypeOk returns a tuple with the PacingDeliveryType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetPacingDeliveryTypeOk() (*PacingDeliveryType, bool) {
	if o == nil || o.PacingDeliveryType == nil {
		return nil, false
	}
	return o.PacingDeliveryType, true
}

// HasPacingDeliveryType returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasPacingDeliveryType() bool {
	if o != nil && o.PacingDeliveryType != nil {
		return true
	}

	return false
}

// SetPacingDeliveryType gets a reference to the given PacingDeliveryType and assigns it to the PacingDeliveryType field.
func (o *AdGroupResponseAllOf) SetPacingDeliveryType(v PacingDeliveryType) {
	o.PacingDeliveryType = &v
}

// GetConversionLearningModeType returns the ConversionLearningModeType field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupResponseAllOf) GetConversionLearningModeType() string {
	if o == nil || o.ConversionLearningModeType.Get() == nil {
		var ret string
		return ret
	}
	return *o.ConversionLearningModeType.Get()
}

// GetConversionLearningModeTypeOk returns a tuple with the ConversionLearningModeType field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupResponseAllOf) GetConversionLearningModeTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.ConversionLearningModeType.Get(), o.ConversionLearningModeType.IsSet()
}

// HasConversionLearningModeType returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasConversionLearningModeType() bool {
	if o != nil && o.ConversionLearningModeType.IsSet() {
		return true
	}

	return false
}

// SetConversionLearningModeType gets a reference to the given NullableString and assigns it to the ConversionLearningModeType field.
func (o *AdGroupResponseAllOf) SetConversionLearningModeType(v string) {
	o.ConversionLearningModeType.Set(&v)
}
// SetConversionLearningModeTypeNil sets the value for ConversionLearningModeType to be an explicit nil
func (o *AdGroupResponseAllOf) SetConversionLearningModeTypeNil() {
	o.ConversionLearningModeType.Set(nil)
}

// UnsetConversionLearningModeType ensures that no value is present for ConversionLearningModeType, not even an explicit nil
func (o *AdGroupResponseAllOf) UnsetConversionLearningModeType() {
	o.ConversionLearningModeType.Unset()
}

// GetSummaryStatus returns the SummaryStatus field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetSummaryStatus() AdGroupSummaryStatus {
	if o == nil || o.SummaryStatus == nil {
		var ret AdGroupSummaryStatus
		return ret
	}
	return *o.SummaryStatus
}

// GetSummaryStatusOk returns a tuple with the SummaryStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetSummaryStatusOk() (*AdGroupSummaryStatus, bool) {
	if o == nil || o.SummaryStatus == nil {
		return nil, false
	}
	return o.SummaryStatus, true
}

// HasSummaryStatus returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasSummaryStatus() bool {
	if o != nil && o.SummaryStatus != nil {
		return true
	}

	return false
}

// SetSummaryStatus gets a reference to the given AdGroupSummaryStatus and assigns it to the SummaryStatus field.
func (o *AdGroupResponseAllOf) SetSummaryStatus(v AdGroupSummaryStatus) {
	o.SummaryStatus = &v
}

// GetFeedProfileId returns the FeedProfileId field value if set, zero value otherwise.
func (o *AdGroupResponseAllOf) GetFeedProfileId() string {
	if o == nil || o.FeedProfileId == nil {
		var ret string
		return ret
	}
	return *o.FeedProfileId
}

// GetFeedProfileIdOk returns a tuple with the FeedProfileId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdGroupResponseAllOf) GetFeedProfileIdOk() (*string, bool) {
	if o == nil || o.FeedProfileId == nil {
		return nil, false
	}
	return o.FeedProfileId, true
}

// HasFeedProfileId returns a boolean if a field has been set.
func (o *AdGroupResponseAllOf) HasFeedProfileId() bool {
	if o != nil && o.FeedProfileId != nil {
		return true
	}

	return false
}

// SetFeedProfileId gets a reference to the given string and assigns it to the FeedProfileId field.
func (o *AdGroupResponseAllOf) SetFeedProfileId(v string) {
	o.FeedProfileId = &v
}

func (o AdGroupResponseAllOf) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.BudgetInMicroCurrency.IsSet() {
		toSerialize["budget_in_micro_currency"] = o.BudgetInMicroCurrency.Get()
	}
	if o.BidInMicroCurrency.IsSet() {
		toSerialize["bid_in_micro_currency"] = o.BidInMicroCurrency.Get()
	}
	if o.BudgetType != nil {
		toSerialize["budget_type"] = o.BudgetType
	}
	if o.StartTime.IsSet() {
		toSerialize["start_time"] = o.StartTime.Get()
	}
	if o.EndTime.IsSet() {
		toSerialize["end_time"] = o.EndTime.Get()
	}
	if o.TargetingSpec != nil {
		toSerialize["targeting_spec"] = o.TargetingSpec
	}
	if o.LifetimeFrequencyCap != nil {
		toSerialize["lifetime_frequency_cap"] = o.LifetimeFrequencyCap
	}
	if o.TrackingUrls.IsSet() {
		toSerialize["tracking_urls"] = o.TrackingUrls.Get()
	}
	if o.AutoTargetingEnabled.IsSet() {
		toSerialize["auto_targeting_enabled"] = o.AutoTargetingEnabled.Get()
	}
	if o.PlacementGroup != nil {
		toSerialize["placement_group"] = o.PlacementGroup
	}
	if o.PacingDeliveryType != nil {
		toSerialize["pacing_delivery_type"] = o.PacingDeliveryType
	}
	if o.ConversionLearningModeType.IsSet() {
		toSerialize["conversion_learning_mode_type"] = o.ConversionLearningModeType.Get()
	}
	if o.SummaryStatus != nil {
		toSerialize["summary_status"] = o.SummaryStatus
	}
	if o.FeedProfileId != nil {
		toSerialize["feed_profile_id"] = o.FeedProfileId
	}
	return json.Marshal(toSerialize)
}

type NullableAdGroupResponseAllOf struct {
	value *AdGroupResponseAllOf
	isSet bool
}

func (v NullableAdGroupResponseAllOf) Get() *AdGroupResponseAllOf {
	return v.value
}

func (v *NullableAdGroupResponseAllOf) Set(val *AdGroupResponseAllOf) {
	v.value = val
	v.isSet = true
}

func (v NullableAdGroupResponseAllOf) IsSet() bool {
	return v.isSet
}

func (v *NullableAdGroupResponseAllOf) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdGroupResponseAllOf(val *AdGroupResponseAllOf) *NullableAdGroupResponseAllOf {
	return &NullableAdGroupResponseAllOf{value: val, isSet: true}
}

func (v NullableAdGroupResponseAllOf) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdGroupResponseAllOf) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


