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

type CatalogsItemValidationDetails struct {

	AttributeName *NullableCatalogsItemFieldType `json:"attribute_name"`

	// Provided value that caused the validation issue.
	ProvidedValue *string `json:"provided_value"`
}
