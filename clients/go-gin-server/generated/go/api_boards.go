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

type BoardsAPI struct {
}

// Post /v5/boards/:board_id/sections
// Create board section 
func (api *BoardsAPI) BoardSectionsCreate(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Delete /v5/boards/:board_id/sections/:section_id
// Delete board section 
func (api *BoardsAPI) BoardSectionsDelete(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/boards/:board_id/sections
// List board sections 
func (api *BoardsAPI) BoardSectionsList(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/boards/:board_id/sections/:section_id/pins
// List Pins on board section 
func (api *BoardsAPI) BoardSectionsListPins(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Patch /v5/boards/:board_id/sections/:section_id
// Update board section 
func (api *BoardsAPI) BoardSectionsUpdate(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Post /v5/boards
// Create board 
func (api *BoardsAPI) BoardsCreate(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Delete /v5/boards/:board_id
// Delete board 
func (api *BoardsAPI) BoardsDelete(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/boards/:board_id
// Get board 
func (api *BoardsAPI) BoardsGet(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/boards
// List boards 
func (api *BoardsAPI) BoardsList(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /v5/boards/:board_id/pins
// List Pins on board 
func (api *BoardsAPI) BoardsListPins(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Patch /v5/boards/:board_id
// Update board 
func (api *BoardsAPI) BoardsUpdate(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

