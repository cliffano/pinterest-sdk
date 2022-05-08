/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

// PinMediaSourceImageBase64 - Base64-encoded image media source
type PinMediaSourceImageBase64 struct {

	SourceType string `json:"source_type"`

	ContentType string `json:"content_type"`

	Data string `json:"data"`
}