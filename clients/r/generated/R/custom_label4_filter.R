# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title CustomLabel4Filter
#'
#' @description CustomLabel4Filter Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field CUSTOM_LABEL_4  \link{CatalogsProductGroupMultipleStringCriteria} 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomLabel4Filter <- R6::R6Class(
  'CustomLabel4Filter',
  public = list(
    `CUSTOM_LABEL_4` = NULL,
    initialize = function(
        `CUSTOM_LABEL_4`, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`CUSTOM_LABEL_4`)) {
        stopifnot(R6::is.R6(`CUSTOM_LABEL_4`))
        self$`CUSTOM_LABEL_4` <- `CUSTOM_LABEL_4`
      }
    },
    toJSON = function() {
      CustomLabel4FilterObject <- list()
      if (!is.null(self$`CUSTOM_LABEL_4`)) {
        CustomLabel4FilterObject[['CUSTOM_LABEL_4']] <-
          self$`CUSTOM_LABEL_4`$toJSON()
      }

      CustomLabel4FilterObject
    },
    fromJSON = function(CustomLabel4FilterJson) {
      CustomLabel4FilterObject <- jsonlite::fromJSON(CustomLabel4FilterJson)
      if (!is.null(CustomLabel4FilterObject$`CUSTOM_LABEL_4`)) {
        CUSTOM_LABEL_4Object <- CatalogsProductGroupMultipleStringCriteria$new()
        CUSTOM_LABEL_4Object$fromJSON(jsonlite::toJSON(CustomLabel4FilterObject$CUSTOM_LABEL_4, auto_unbox = TRUE, digits = NA))
        self$`CUSTOM_LABEL_4` <- CUSTOM_LABEL_4Object
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`CUSTOM_LABEL_4`)) {
        sprintf(
        '"CUSTOM_LABEL_4":
        %s
        ',
        jsonlite::toJSON(self$`CUSTOM_LABEL_4`$toJSON(), auto_unbox=TRUE, digits = NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(CustomLabel4FilterJson) {
      CustomLabel4FilterObject <- jsonlite::fromJSON(CustomLabel4FilterJson)
      self$`CUSTOM_LABEL_4` <- CatalogsProductGroupMultipleStringCriteria$new()$fromJSON(jsonlite::toJSON(CustomLabel4FilterObject$CUSTOM_LABEL_4, auto_unbox = TRUE, digits = NA))
      self
    }
  )
)
