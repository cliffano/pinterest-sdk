/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi




type CampaignUpdateResponse struct {

	Items []CampaignCreateResponseItem `json:"items,omitempty"`
}

// AssertCampaignUpdateResponseRequired checks if the required fields are not zero-ed
func AssertCampaignUpdateResponseRequired(obj CampaignUpdateResponse) error {
	for _, el := range obj.Items {
		if err := AssertCampaignCreateResponseItemRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertCampaignUpdateResponseConstraints checks if the values respects the defined constraints
func AssertCampaignUpdateResponseConstraints(obj CampaignUpdateResponse) error {
	return nil
}
