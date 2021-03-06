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

type AdGroupResponseAllOf1 struct {

	// Campaign ID of the ad group.
	CampaignId string `json:"campaign_id,omitempty"`

	BillableEvent ActionType `json:"billable_event,omitempty"`

	// Ad group ID.
	Id string `json:"id,omitempty"`

	// Always \"adgroup\".
	Type string `json:"type,omitempty"`

	// Advertiser ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Ad group creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`

	// Ad group last update time. Unix timestamp in seconds.
	UpdatedTime int32 `json:"updated_time,omitempty"`
}

// AssertAdGroupResponseAllOf1Required checks if the required fields are not zero-ed
func AssertAdGroupResponseAllOf1Required(obj AdGroupResponseAllOf1) error {
	return nil
}

// AssertRecurseAdGroupResponseAllOf1Required recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AdGroupResponseAllOf1 (e.g. [][]AdGroupResponseAllOf1), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseAdGroupResponseAllOf1Required(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAdGroupResponseAllOf1, ok := obj.(AdGroupResponseAllOf1)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertAdGroupResponseAllOf1Required(aAdGroupResponseAllOf1)
	})
}
