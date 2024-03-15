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

type CatalogsProductGroupPricingCurrencyCriteria struct {

	Operator string `json:"operator"`

	Value float32 `json:"value"`

	Currency NonNullableCatalogsCurrency `json:"currency"`

	Negated bool `json:"negated,omitempty"`
}
