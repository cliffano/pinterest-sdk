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

import (
	"github.com/gin-gonic/gin"
)

type TermsOfServiceAPI struct {
}

// Get /v5/ad_accounts/:ad_account_id/terms_of_service
// Get terms of service 
func (api *TermsOfServiceAPI) TermsOfServiceGet(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

