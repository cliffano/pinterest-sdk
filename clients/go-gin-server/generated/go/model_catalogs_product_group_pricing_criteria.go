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

type CatalogsProductGroupPricingCriteria struct {

	Inclusion bool `json:"inclusion,omitempty"`

	Values float32 `json:"values"`

	Negated bool `json:"negated,omitempty"`
}
