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




type AudienceCreateRequest struct {

	// Ad account ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Audience name.
	Name string `json:"name"`

	Rule AudienceRule `json:"rule"`

	// Audience description.
	Description string `json:"description,omitempty"`

	AudienceType AudienceCreateRequest1AudienceType `json:"audience_type"`
}

// AssertAudienceCreateRequestRequired checks if the required fields are not zero-ed
func AssertAudienceCreateRequestRequired(obj AudienceCreateRequest) error {
	elements := map[string]interface{}{
		"name": obj.Name,
		"rule": obj.Rule,
		"audience_type": obj.AudienceType,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertAudienceRuleRequired(obj.Rule); err != nil {
		return err
	}
	if err := AssertAudienceCreateRequest1AudienceTypeRequired(obj.AudienceType); err != nil {
		return err
	}
	return nil
}

// AssertAudienceCreateRequestConstraints checks if the values respects the defined constraints
func AssertAudienceCreateRequestConstraints(obj AudienceCreateRequest) error {
	return nil
}