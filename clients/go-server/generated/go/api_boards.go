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

// BoardsApiController binds http requests to an api service and writes the service results to the http response
type BoardsApiController struct {
	service BoardsApiServicer
	errorHandler ErrorHandler
}

// BoardsApiOption for how the controller is set up.
type BoardsApiOption func(*BoardsApiController)

// WithBoardsApiErrorHandler inject ErrorHandler into controller
func WithBoardsApiErrorHandler(h ErrorHandler) BoardsApiOption {
	return func(c *BoardsApiController) {
		c.errorHandler = h
	}
}

// NewBoardsApiController creates a default api controller
func NewBoardsApiController(s BoardsApiServicer, opts ...BoardsApiOption) Router {
	controller := &BoardsApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the BoardsApiController
func (c *BoardsApiController) Routes() Routes {
	return Routes{ 
		{
			"BoardSectionsCreate",
			strings.ToUpper("Post"),
			"/v5/boards/{board_id}/sections",
			c.BoardSectionsCreate,
		},
		{
			"BoardSectionsDelete",
			strings.ToUpper("Delete"),
			"/v5/boards/{board_id}/sections/{section_id}",
			c.BoardSectionsDelete,
		},
		{
			"BoardSectionsList",
			strings.ToUpper("Get"),
			"/v5/boards/{board_id}/sections",
			c.BoardSectionsList,
		},
		{
			"BoardSectionsListPins",
			strings.ToUpper("Get"),
			"/v5/boards/{board_id}/sections/{section_id}/pins",
			c.BoardSectionsListPins,
		},
		{
			"BoardSectionsUpdate",
			strings.ToUpper("Patch"),
			"/v5/boards/{board_id}/sections/{section_id}",
			c.BoardSectionsUpdate,
		},
		{
			"BoardsCreate",
			strings.ToUpper("Post"),
			"/v5/boards",
			c.BoardsCreate,
		},
		{
			"BoardsDelete",
			strings.ToUpper("Delete"),
			"/v5/boards/{board_id}",
			c.BoardsDelete,
		},
		{
			"BoardsGet",
			strings.ToUpper("Get"),
			"/v5/boards/{board_id}",
			c.BoardsGet,
		},
		{
			"BoardsList",
			strings.ToUpper("Get"),
			"/v5/boards",
			c.BoardsList,
		},
		{
			"BoardsListPins",
			strings.ToUpper("Get"),
			"/v5/boards/{board_id}/pins",
			c.BoardsListPins,
		},
		{
			"BoardsUpdate",
			strings.ToUpper("Patch"),
			"/v5/boards/{board_id}",
			c.BoardsUpdate,
		},
	}
}

// BoardSectionsCreate - Create board section
func (c *BoardsApiController) BoardSectionsCreate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	boardSectionParam := BoardSection{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&boardSectionParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertBoardSectionRequired(boardSectionParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.BoardSectionsCreate(r.Context(), boardIdParam, boardSectionParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardSectionsDelete - Delete board section
func (c *BoardsApiController) BoardSectionsDelete(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	sectionIdParam := params["section_id"]
	
	result, err := c.service.BoardSectionsDelete(r.Context(), boardIdParam, sectionIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardSectionsList - List board sections
func (c *BoardsApiController) BoardSectionsList(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	boardIdParam := params["board_id"]
	
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.BoardSectionsList(r.Context(), boardIdParam, bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardSectionsListPins - List Pins on board section
func (c *BoardsApiController) BoardSectionsListPins(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	boardIdParam := params["board_id"]
	
	sectionIdParam := params["section_id"]
	
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.BoardSectionsListPins(r.Context(), boardIdParam, sectionIdParam, bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardSectionsUpdate - Update board section
func (c *BoardsApiController) BoardSectionsUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	sectionIdParam := params["section_id"]
	
	boardSectionParam := BoardSection{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&boardSectionParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertBoardSectionRequired(boardSectionParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.BoardSectionsUpdate(r.Context(), boardIdParam, sectionIdParam, boardSectionParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsCreate - Create board
func (c *BoardsApiController) BoardsCreate(w http.ResponseWriter, r *http.Request) {
	boardParam := Board{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&boardParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertBoardRequired(boardParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.BoardsCreate(r.Context(), boardParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsDelete - Delete board
func (c *BoardsApiController) BoardsDelete(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	result, err := c.service.BoardsDelete(r.Context(), boardIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsGet - Get board
func (c *BoardsApiController) BoardsGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	result, err := c.service.BoardsGet(r.Context(), boardIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsList - List boards
func (c *BoardsApiController) BoardsList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	privacyParam := query.Get("privacy")
	result, err := c.service.BoardsList(r.Context(), bookmarkParam, pageSizeParam, privacyParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsListPins - List Pins on board
func (c *BoardsApiController) BoardsListPins(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	boardIdParam := params["board_id"]
	
	bookmarkParam := query.Get("bookmark")
	pageSizeParam, err := parseInt32Parameter(query.Get("page_size"), false)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.BoardsListPins(r.Context(), boardIdParam, bookmarkParam, pageSizeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// BoardsUpdate - Update board
func (c *BoardsApiController) BoardsUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	boardIdParam := params["board_id"]
	
	boardUpdateParam := BoardUpdate{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&boardUpdateParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertBoardUpdateRequired(boardUpdateParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.BoardsUpdate(r.Context(), boardIdParam, boardUpdateParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
