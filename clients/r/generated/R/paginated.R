# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title Paginated
#'
#' @description Paginated Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field items  list( object ) 
#'
#' @field bookmark  character [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Paginated <- R6::R6Class(
  'Paginated',
  public = list(
    `items` = NULL,
    `bookmark` = NULL,
    initialize = function(
        `items`, `bookmark`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`items`)) {
        stopifnot(is.vector(`items`), length(`items`) != 0)
        sapply(`items`, function(x) stopifnot(is.character(x)))
        self$`items` <- `items`
      }
      if (!is.null(`bookmark`)) {
        stopifnot(is.character(`bookmark`), length(`bookmark`) == 1)
        self$`bookmark` <- `bookmark`
      }
    },
    toJSON = function() {
      PaginatedObject <- list()
      if (!is.null(self$`items`)) {
        PaginatedObject[['items']] <-
          self$`items`
      }
      if (!is.null(self$`bookmark`)) {
        PaginatedObject[['bookmark']] <-
          self$`bookmark`
      }

      PaginatedObject
    },
    fromJSON = function(PaginatedJson) {
      PaginatedObject <- jsonlite::fromJSON(PaginatedJson)
      if (!is.null(PaginatedObject$`items`)) {
        self$`items` <- ApiClient$new()$deserializeObj(PaginatedObject$`items`, "array[object]", loadNamespace("openapi"))
      }
      if (!is.null(PaginatedObject$`bookmark`)) {
        self$`bookmark` <- PaginatedObject$`bookmark`
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`items`)) {
        sprintf(
        '"items":
           [%s]
        ',
        paste(unlist(lapply(self$`items`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`bookmark`)) {
        sprintf(
        '"bookmark":
          "%s"
                ',
        self$`bookmark`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(PaginatedJson) {
      PaginatedObject <- jsonlite::fromJSON(PaginatedJson)
      self$`items` <- ApiClient$new()$deserializeObj(PaginatedObject$`items`, "array[object]", loadNamespace("openapi"))
      self$`bookmark` <- PaginatedObject$`bookmark`
      self
    }
  )
)