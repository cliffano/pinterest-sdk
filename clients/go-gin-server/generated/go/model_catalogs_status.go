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
// CatalogsStatus : Status for catalogs entities. Present in catalogs_feed values. When a feed is deleted, the response will inform DELETED as status.
type CatalogsStatus string

// List of CatalogsStatus
const (
	ACTIVE CatalogsStatus = "ACTIVE"
	INACTIVE CatalogsStatus = "INACTIVE"
)
