# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title TrackingUrls
#'
#' @description TrackingUrls Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field impression  list( character ) [optional]
#'
#' @field click  list( character ) [optional]
#'
#' @field engagement  list( character ) [optional]
#'
#' @field buyable_button  list( character ) [optional]
#'
#' @field audience_verification  list( character ) [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TrackingUrls <- R6::R6Class(
  'TrackingUrls',
  public = list(
    `impression` = NULL,
    `click` = NULL,
    `engagement` = NULL,
    `buyable_button` = NULL,
    `audience_verification` = NULL,
    initialize = function(
        `impression`=NULL, `click`=NULL, `engagement`=NULL, `buyable_button`=NULL, `audience_verification`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`impression`)) {
        stopifnot(is.vector(`impression`), length(`impression`) != 0)
        sapply(`impression`, function(x) stopifnot(is.character(x)))
        self$`impression` <- `impression`
      }
      if (!is.null(`click`)) {
        stopifnot(is.vector(`click`), length(`click`) != 0)
        sapply(`click`, function(x) stopifnot(is.character(x)))
        self$`click` <- `click`
      }
      if (!is.null(`engagement`)) {
        stopifnot(is.vector(`engagement`), length(`engagement`) != 0)
        sapply(`engagement`, function(x) stopifnot(is.character(x)))
        self$`engagement` <- `engagement`
      }
      if (!is.null(`buyable_button`)) {
        stopifnot(is.vector(`buyable_button`), length(`buyable_button`) != 0)
        sapply(`buyable_button`, function(x) stopifnot(is.character(x)))
        self$`buyable_button` <- `buyable_button`
      }
      if (!is.null(`audience_verification`)) {
        stopifnot(is.vector(`audience_verification`), length(`audience_verification`) != 0)
        sapply(`audience_verification`, function(x) stopifnot(is.character(x)))
        self$`audience_verification` <- `audience_verification`
      }
    },
    toJSON = function() {
      TrackingUrlsObject <- list()
      if (!is.null(self$`impression`)) {
        TrackingUrlsObject[['impression']] <-
          self$`impression`
      }
      if (!is.null(self$`click`)) {
        TrackingUrlsObject[['click']] <-
          self$`click`
      }
      if (!is.null(self$`engagement`)) {
        TrackingUrlsObject[['engagement']] <-
          self$`engagement`
      }
      if (!is.null(self$`buyable_button`)) {
        TrackingUrlsObject[['buyable_button']] <-
          self$`buyable_button`
      }
      if (!is.null(self$`audience_verification`)) {
        TrackingUrlsObject[['audience_verification']] <-
          self$`audience_verification`
      }

      TrackingUrlsObject
    },
    fromJSON = function(TrackingUrlsJson) {
      TrackingUrlsObject <- jsonlite::fromJSON(TrackingUrlsJson)
      if (!is.null(TrackingUrlsObject$`impression`)) {
        self$`impression` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`impression`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(TrackingUrlsObject$`click`)) {
        self$`click` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`click`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(TrackingUrlsObject$`engagement`)) {
        self$`engagement` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`engagement`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(TrackingUrlsObject$`buyable_button`)) {
        self$`buyable_button` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`buyable_button`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(TrackingUrlsObject$`audience_verification`)) {
        self$`audience_verification` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`audience_verification`, "array[character]", loadNamespace("openapi"))
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`impression`)) {
        sprintf(
        '"impression":
           [%s]
        ',
        paste(unlist(lapply(self$`impression`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`click`)) {
        sprintf(
        '"click":
           [%s]
        ',
        paste(unlist(lapply(self$`click`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`engagement`)) {
        sprintf(
        '"engagement":
           [%s]
        ',
        paste(unlist(lapply(self$`engagement`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`buyable_button`)) {
        sprintf(
        '"buyable_button":
           [%s]
        ',
        paste(unlist(lapply(self$`buyable_button`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`audience_verification`)) {
        sprintf(
        '"audience_verification":
           [%s]
        ',
        paste(unlist(lapply(self$`audience_verification`, function(x) paste0('"', x, '"'))), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(TrackingUrlsJson) {
      TrackingUrlsObject <- jsonlite::fromJSON(TrackingUrlsJson)
      self$`impression` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`impression`, "array[character]", loadNamespace("openapi"))
      self$`click` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`click`, "array[character]", loadNamespace("openapi"))
      self$`engagement` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`engagement`, "array[character]", loadNamespace("openapi"))
      self$`buyable_button` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`buyable_button`, "array[character]", loadNamespace("openapi"))
      self$`audience_verification` <- ApiClient$new()$deserializeObj(TrackingUrlsObject$`audience_verification`, "array[character]", loadNamespace("openapi"))
      self
    }
  )
)
