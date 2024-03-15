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

type IntegrationsAPI struct {
}

// Delete /v5/integrations/commerce/:external_business_id
// Delete commerce integration 
func (api *IntegrationsAPI) IntegrationsCommerceDel(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/integrations/commerce/:external_business_id
// Get commerce integration 
func (api *IntegrationsAPI) IntegrationsCommerceGet(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Patch /v5/integrations/commerce/:external_business_id
// Update commerce integration 
func (api *IntegrationsAPI) IntegrationsCommercePatch(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Post /v5/integrations/commerce
// Create commerce integration 
func (api *IntegrationsAPI) IntegrationsCommercePost(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/integrations/:id
// Get integration metadata 
func (api *IntegrationsAPI) IntegrationsGetById(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/integrations
// Get integration metadata list 
func (api *IntegrationsAPI) IntegrationsGetList(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Post /v5/integrations/logs
// Receives batched logs from integration applications. 
func (api *IntegrationsAPI) IntegrationsLogsPost(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

