# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title CatalogsFeedValidationDetails
#'
#' @description CatalogsFeedValidationDetails Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field errors  \link{CatalogsFeedValidationErrors} 
#'
#' @field warnings  \link{CatalogsFeedValidationWarnings} 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CatalogsFeedValidationDetails <- R6::R6Class(
  'CatalogsFeedValidationDetails',
  public = list(
    `errors` = NULL,
    `warnings` = NULL,
    initialize = function(
        `errors`, `warnings`, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`errors`)) {
        stopifnot(R6::is.R6(`errors`))
        self$`errors` <- `errors`
      }
      if (!missing(`warnings`)) {
        stopifnot(R6::is.R6(`warnings`))
        self$`warnings` <- `warnings`
      }
    },
    toJSON = function() {
      CatalogsFeedValidationDetailsObject <- list()
      if (!is.null(self$`errors`)) {
        CatalogsFeedValidationDetailsObject[['errors']] <-
          self$`errors`$toJSON()
      }
      if (!is.null(self$`warnings`)) {
        CatalogsFeedValidationDetailsObject[['warnings']] <-
          self$`warnings`$toJSON()
      }

      CatalogsFeedValidationDetailsObject
    },
    fromJSON = function(CatalogsFeedValidationDetailsJson) {
      CatalogsFeedValidationDetailsObject <- jsonlite::fromJSON(CatalogsFeedValidationDetailsJson)
      if (!is.null(CatalogsFeedValidationDetailsObject$`errors`)) {
        errorsObject <- CatalogsFeedValidationErrors$new()
        errorsObject$fromJSON(jsonlite::toJSON(CatalogsFeedValidationDetailsObject$errors, auto_unbox = TRUE, digits = NA))
        self$`errors` <- errorsObject
      }
      if (!is.null(CatalogsFeedValidationDetailsObject$`warnings`)) {
        warningsObject <- CatalogsFeedValidationWarnings$new()
        warningsObject$fromJSON(jsonlite::toJSON(CatalogsFeedValidationDetailsObject$warnings, auto_unbox = TRUE, digits = NA))
        self$`warnings` <- warningsObject
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`errors`)) {
        sprintf(
        '"errors":
        %s
        ',
        jsonlite::toJSON(self$`errors`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`warnings`)) {
        sprintf(
        '"warnings":
        %s
        ',
        jsonlite::toJSON(self$`warnings`$toJSON(), auto_unbox=TRUE, digits = NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(CatalogsFeedValidationDetailsJson) {
      CatalogsFeedValidationDetailsObject <- jsonlite::fromJSON(CatalogsFeedValidationDetailsJson)
      self$`errors` <- CatalogsFeedValidationErrors$new()$fromJSON(jsonlite::toJSON(CatalogsFeedValidationDetailsObject$errors, auto_unbox = TRUE, digits = NA))
      self$`warnings` <- CatalogsFeedValidationWarnings$new()$fromJSON(jsonlite::toJSON(CatalogsFeedValidationDetailsObject$warnings, auto_unbox = TRUE, digits = NA))
      self
    }
  )
)