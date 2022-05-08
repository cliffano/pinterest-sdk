# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title ConversionReportTimeType
#'
#' @description ConversionReportTimeType Class
#'
#' @format An \code{R6Class} generator object
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ConversionReportTimeType <- R6::R6Class(
    "ConversionReportTimeType",
    public = list(
        initialize = function(...) {
            local.optional.var <- list(...)
            val <- unlist(local.optional.var)
            enumvec <- .parse_ConversionReportTimeType()

            stopifnot(length(val) == 1L)

            if (!val %in% enumvec)
                stop("Use one of the valid values: ",
                    paste0(enumvec, collapse = ", "))
            private$value <- val
        },
        toJSON = function() {
            jsonlite::toJSON(private$value, auto_unbox = TRUE)
        },
        fromJSON = function(ConversionReportTimeTypeJson) {
            private$value <- jsonlite::fromJSON(ConversionReportTimeTypeJson,
                simplifyVector = FALSE)
            self
        },
        toJSONString = function() {
            as.character(jsonlite::toJSON(private$value,
                auto_unbox = TRUE))
        },
        fromJSONString = function(ConversionReportTimeTypeJson) {
            private$value <- jsonlite::fromJSON(ConversionReportTimeTypeJson,
                simplifyVector = FALSE)
            self
        }
    ),
    private = list(
        value = NULL
    )
)

# add to utils.R
.parse_ConversionReportTimeType <- function(vals) {
    res <- gsub("^\\[|\\]$", "",
        "[TIME_OF_AD_ACTION, TIME_OF_CONVERSION]"
    )
    unlist(strsplit(res, ", "))
}
