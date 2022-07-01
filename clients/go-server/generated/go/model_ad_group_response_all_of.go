/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type AdGroupResponseAllOf struct {

	// Ad group name.
	Name string `json:"name,omitempty"`

	// Ad group/entity status.
	Status EntityStatus `json:"status,omitempty"`

	// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
	BudgetInMicroCurrency *int32 `json:"budget_in_micro_currency,omitempty"`

	// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
	BidInMicroCurrency *int32 `json:"bid_in_micro_currency,omitempty"`

	// Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
	BudgetType string `json:"budget_type,omitempty"`

	// Ad group start time. Unix timestamp in seconds. Defaults to current time.
	StartTime *int32 `json:"start_time,omitempty"`

	// Ad group end time. Unix timestamp in seconds.
	EndTime *int32 `json:"end_time,omitempty"`

	// Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'
	TargetingSpec map[string][]string `json:"targeting_spec,omitempty"`

	// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
	LifetimeFrequencyCap int32 `json:"lifetime_frequency_cap,omitempty"`

	// Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
	TrackingUrls *TrackingUrls `json:"tracking_urls,omitempty"`

	// Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
	AutoTargetingEnabled *bool `json:"auto_targeting_enabled,omitempty"`

	// <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.
	PlacementGroup PlacementGroupType `json:"placement_group,omitempty"`

	// Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
	PacingDeliveryType PacingDeliveryType `json:"pacing_delivery_type,omitempty"`

	// oCPM learn mode
	ConversionLearningModeType *string `json:"conversion_learning_mode_type,omitempty"`

	// Ad group summary status.
	SummaryStatus AdGroupSummaryStatus `json:"summary_status,omitempty"`

	// Feed Profile ID associated to the adgroup.
	FeedProfileId string `json:"feed_profile_id,omitempty"`
}

// AssertAdGroupResponseAllOfRequired checks if the required fields are not zero-ed
func AssertAdGroupResponseAllOfRequired(obj AdGroupResponseAllOf) error {
	if err := AssertEntityStatusRequired(obj.Status); err != nil {
		return err
	}
	if obj.TrackingUrls != nil {
		if err := AssertTrackingUrlsRequired(*obj.TrackingUrls); err != nil {
			return err
		}
	}
	if err := AssertPlacementGroupTypeRequired(obj.PlacementGroup); err != nil {
		return err
	}
	if err := AssertPacingDeliveryTypeRequired(obj.PacingDeliveryType); err != nil {
		return err
	}
	if err := AssertAdGroupSummaryStatusRequired(obj.SummaryStatus); err != nil {
		return err
	}
	return nil
}

// AssertRecurseAdGroupResponseAllOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AdGroupResponseAllOf (e.g. [][]AdGroupResponseAllOf), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseAdGroupResponseAllOfRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAdGroupResponseAllOf, ok := obj.(AdGroupResponseAllOf)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertAdGroupResponseAllOfRequired(aAdGroupResponseAllOf)
	})
}
