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




type AudienceCreateCustomRequest struct {

	// Ad account ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Audience name.
	Name string `json:"name"`

	Rule AudienceRule `json:"rule"`

	SharingType AudienceSharingType `json:"sharing_type"`

	DataParty AudienceDataParty `json:"data_party"`

	Category string `json:"category,omitempty"`
}

// AssertAudienceCreateCustomRequestRequired checks if the required fields are not zero-ed
func AssertAudienceCreateCustomRequestRequired(obj AudienceCreateCustomRequest) error {
	elements := map[string]interface{}{
		"name": obj.Name,
		"rule": obj.Rule,
		"sharing_type": obj.SharingType,
		"data_party": obj.DataParty,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertAudienceRuleRequired(obj.Rule); err != nil {
		return err
	}
	return nil
}

// AssertAudienceCreateCustomRequestConstraints checks if the values respects the defined constraints
func AssertAudienceCreateCustomRequestConstraints(obj AudienceCreateCustomRequest) error {
	return nil
}
