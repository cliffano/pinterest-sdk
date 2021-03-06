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

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// CatalogsApiController binds http requests to an api service and writes the service results to the http response
type CatalogsApiController struct {
	service CatalogsApiServicer
	errorHandler ErrorHandler
}

// CatalogsApiOption for how the controller is set up.
type CatalogsApiOption func(*CatalogsApiController)

// WithCatalogsApiErrorHandler inject ErrorHandler into controller
func WithCatalogsApiErrorHandler(h ErrorHandler) CatalogsApiOption {
	return func(c *CatalogsApiController) {
		c.errorHandler = h
	}
}

// NewCatalogsApiController creates a default api controller
func NewCatalogsApiController(s CatalogsApiServicer, opts ...CatalogsApiOption) Router {
	controller := &CatalogsApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the CatalogsApiController
func (c *CatalogsApiController) Routes() Routes {
	return Routes{ 
		{
			"CatalogsProductGroupsCreate",
			strings.ToUpper("Post"),
			"/v5/catalogs/product_groups",
			c.CatalogsProductGroupsCreate,
		},
		{
			"CatalogsProductGroupsDelete",
			strings.ToUpper("Delete"),
			"/v5/catalogs/product_groups/{product_group_id}",
			c.CatalogsProductGroupsDelete,
		},
		{
			"CatalogsProductGroupsList",
			strings.ToUpper("Get"),
			"/v5/catalogs/product_groups",
			c.CatalogsProductGroupsList,
		},
		{
			"CatalogsProductGroupsUpdate",
			strings.ToUpper("Patch"),
			"/v5/catalogs/product_groups/{product_group_id}",
			c.CatalogsProductGroupsUpdate,
		},
		{
			"FeedProcessingResultsList",
			strings.ToUpper("Get"),
			"/v5/catalogs/feeds/{feed_id}/processing_results",
			c.FeedProcessingResultsList,
		},
		{
			"FeedsCreate",
			strings.ToUpper("Post"),
			"/v5/catalogs/feeds",
			c.FeedsCreate,
		},
		{
			"FeedsDelete",
			strings.ToUpper("Delete"),
			"/v5/catalogs/feeds/{feed_id}",
			c.FeedsDelete,
		},
		{
			"FeedsGet",
			strings.ToUpper("Get"),
			"/v5/catalogs/feeds/{feed_id}",
			c.FeedsGet,
		},
		{
			"FeedsList",
			strings.ToUpper("Get"),
			"/v5/catalogs/feeds",
			c.FeedsList,
		},
		{
			"FeedsUpdate",
			strings.ToUpper("Patch"),
			"/v5/catalogs/feeds/{feed_id}",
			c.FeedsUpdate,
		},
		{
			"ItemsBatchGet",
			strings.ToUpper("Get"),
			"/v5/catalogs/items/batch/{batch_id}",
			c.ItemsBatchGet,
		},
		{
			"ItemsBatchPost",
			strings.ToUpper("Post"),
			"/v5/catalogs/items/batch",
			c.ItemsBatchPost,
		},
		{
			"ItemsGet",
			strings.ToUpper("Get"),
			"/v5/catalogs/items",
			c.ItemsGet,
		},
	}
}

// CatalogsProductGroupsCreate - Create product group
func (c *CatalogsApiController) CatalogsProductGroupsCreate(w http.ResponseWriter, r *http.Request) {
	catalogsProductGroupCreateRequestParam := CatalogsProductGroupCreateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&catalogsProductGroupCreateRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertCatalogsProductGroupCreateRequestRequired(catalogsProductGroupCreateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.CatalogsProductGroupsCreate(r.Context(), catalogsProductGroupCreateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// CatalogsProductGroupsDelete - Delete product group
func (c *CatalogsApiController) CatalogsProductGroupsDelete(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	productGroupIdParam := params["product_group_id"]
	
	result, err := c.service.CatalogsProductGroupsDelete(r.Context(), productGroupIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// CatalogsProductGroupsList - Get product groups list
func (c *CatalogsApiController) CatalogsProductGroupsList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	feedIdParam := query.Get("feed_id")
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.CatalogsProductGroupsList(r.Context(), feedIdParam, bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// CatalogsProductGroupsUpdate - Update product group
func (c *CatalogsApiController) CatalogsProductGroupsUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	productGroupIdParam := params["product_group_id"]
	
	catalogsProductGroupUpdateRequestParam := CatalogsProductGroupUpdateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&catalogsProductGroupUpdateRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertCatalogsProductGroupUpdateRequestRequired(catalogsProductGroupUpdateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.CatalogsProductGroupsUpdate(r.Context(), productGroupIdParam, catalogsProductGroupUpdateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedProcessingResultsList - List processing results for a given feed
func (c *CatalogsApiController) FeedProcessingResultsList(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	feedIdParam := params["feed_id"]
	
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.FeedProcessingResultsList(r.Context(), feedIdParam, bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedsCreate - Create feed
func (c *CatalogsApiController) FeedsCreate(w http.ResponseWriter, r *http.Request) {
	catalogsFeedsCreateRequestParam := CatalogsFeedsCreateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&catalogsFeedsCreateRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertCatalogsFeedsCreateRequestRequired(catalogsFeedsCreateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.FeedsCreate(r.Context(), catalogsFeedsCreateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedsDelete - Delete feed
func (c *CatalogsApiController) FeedsDelete(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	feedIdParam := params["feed_id"]
	
	result, err := c.service.FeedsDelete(r.Context(), feedIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedsGet - Get feed
func (c *CatalogsApiController) FeedsGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	feedIdParam := params["feed_id"]
	
	result, err := c.service.FeedsGet(r.Context(), feedIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedsList - List feeds
func (c *CatalogsApiController) FeedsList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.FeedsList(r.Context(), bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// FeedsUpdate - Update feed
func (c *CatalogsApiController) FeedsUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	feedIdParam := params["feed_id"]
	
	catalogsFeedsUpdateRequestParam := CatalogsFeedsUpdateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&catalogsFeedsUpdateRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertCatalogsFeedsUpdateRequestRequired(catalogsFeedsUpdateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.FeedsUpdate(r.Context(), feedIdParam, catalogsFeedsUpdateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ItemsBatchGet - Get catalogs items batch
func (c *CatalogsApiController) ItemsBatchGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	batchIdParam := params["batch_id"]
	
	result, err := c.service.ItemsBatchGet(r.Context(), batchIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ItemsBatchPost - Perform an operation on an item batch
func (c *CatalogsApiController) ItemsBatchPost(w http.ResponseWriter, r *http.Request) {
	catalogsItemsBatchRequestParam := CatalogsItemsBatchRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&catalogsItemsBatchRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertCatalogsItemsBatchRequestRequired(catalogsItemsBatchRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.ItemsBatchPost(r.Context(), catalogsItemsBatchRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// ItemsGet - Get catalogs items
func (c *CatalogsApiController) ItemsGet(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	countryParam := query.Get("country")
	itemIdsParam := strings.Split(query.Get("item_ids"), ",")
	languageParam := query.Get("language")
	result, err := c.service.ItemsGet(r.Context(), countryParam, itemIdsParam, languageParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
