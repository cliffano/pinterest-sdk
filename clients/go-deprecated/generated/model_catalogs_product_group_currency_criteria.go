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
// CatalogsProductGroupCurrencyCriteria struct for CatalogsProductGroupCurrencyCriteria
type CatalogsProductGroupCurrencyCriteria struct {
	Values NonNullableCatalogsCurrency `json:"values"`
	Negated bool `json:"negated"`
}
