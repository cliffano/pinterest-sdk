# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title CustomLabel2Filter
#'
#' @description CustomLabel2Filter Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field CUSTOM_LABEL_2  \link{CatalogsProductGroupMultipleStringCriteria} 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CustomLabel2Filter <- R6::R6Class(
  'CustomLabel2Filter',
  public = list(
    `CUSTOM_LABEL_2` = NULL,
    initialize = function(
        `CUSTOM_LABEL_2`, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`CUSTOM_LABEL_2`)) {
        stopifnot(R6::is.R6(`CUSTOM_LABEL_2`))
        self$`CUSTOM_LABEL_2` <- `CUSTOM_LABEL_2`
      }
    },
    toJSON = function() {
      CustomLabel2FilterObject <- list()
      if (!is.null(self$`CUSTOM_LABEL_2`)) {
        CustomLabel2FilterObject[['CUSTOM_LABEL_2']] <-
          self$`CUSTOM_LABEL_2`$toJSON()
      }

      CustomLabel2FilterObject
    },
    fromJSON = function(CustomLabel2FilterJson) {
      CustomLabel2FilterObject <- jsonlite::fromJSON(CustomLabel2FilterJson)
      if (!is.null(CustomLabel2FilterObject$`CUSTOM_LABEL_2`)) {
        CUSTOM_LABEL_2Object <- CatalogsProductGroupMultipleStringCriteria$new()
        CUSTOM_LABEL_2Object$fromJSON(jsonlite::toJSON(CustomLabel2FilterObject$CUSTOM_LABEL_2, auto_unbox = TRUE, digits = NA))
        self$`CUSTOM_LABEL_2` <- CUSTOM_LABEL_2Object
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`CUSTOM_LABEL_2`)) {
        sprintf(
        '"CUSTOM_LABEL_2":
        %s
        ',
        jsonlite::toJSON(self$`CUSTOM_LABEL_2`$toJSON(), auto_unbox=TRUE, digits = NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(CustomLabel2FilterJson) {
      CustomLabel2FilterObject <- jsonlite::fromJSON(CustomLabel2FilterJson)
      self$`CUSTOM_LABEL_2` <- CatalogsProductGroupMultipleStringCriteria$new()$fromJSON(jsonlite::toJSON(CustomLabel2FilterObject$CUSTOM_LABEL_2, auto_unbox = TRUE, digits = NA))
      self
    }
  )
)