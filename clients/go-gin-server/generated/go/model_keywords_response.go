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

type KeywordsResponse struct {

	Errors []KeywordError `json:"errors,omitempty"`

	Keywords []Keyword `json:"keywords,omitempty"`
}
