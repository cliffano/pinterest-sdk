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
// CampaignResponseAllOf1 struct for CampaignResponseAllOf1
type CampaignResponseAllOf1 struct {
	ObjectiveType ObjectiveType `json:"objective_type,omitempty"`
	// Campaign creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`
	// UTC timestamp. Last update time.
	UpdatedTime int32 `json:"updated_time,omitempty"`
	// Always \"campaign\".
	Type string `json:"type,omitempty"`
}
