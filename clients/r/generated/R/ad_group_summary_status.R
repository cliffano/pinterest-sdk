#' @docType class
#' @title AdGroupSummaryStatus
#' @description AdGroupSummaryStatus Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AdGroupSummaryStatus <- R6::R6Class(
  "AdGroupSummaryStatus",
  public = list(
    #' Initialize a new AdGroupSummaryStatus class.
    #'
    #' @description
    #' Initialize a new AdGroupSummaryStatus class.
    #'
    #' @param ... Optional arguments.
    #' @export
    initialize = function(...) {
      local.optional.var <- list(...)
      val <- unlist(local.optional.var)
      enumvec <- .parse_AdGroupSummaryStatus()

      stopifnot(length(val) == 1L)

      if (!val %in% enumvec)
          stop("Use one of the valid values: ",
              paste0(enumvec, collapse = ", "))
      private$value <- val
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AdGroupSummaryStatus in JSON format
    #' @export
    toJSON = function() {
        jsonlite::toJSON(private$value, auto_unbox = TRUE)
    },
    #' Deserialize JSON string into an instance of AdGroupSummaryStatus
    #'
    #' @description
    #' Deserialize JSON string into an instance of AdGroupSummaryStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of AdGroupSummaryStatus
    #' @export
    fromJSON = function(input_json) {
      private$value <- jsonlite::fromJSON(input_json,
          simplifyVector = FALSE)
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AdGroupSummaryStatus in JSON format
    #' @export
    toJSONString = function() {
      as.character(jsonlite::toJSON(private$value,
          auto_unbox = TRUE))
    },
    #' Deserialize JSON string into an instance of AdGroupSummaryStatus
    #'
    #' @description
    #' Deserialize JSON string into an instance of AdGroupSummaryStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of AdGroupSummaryStatus
    #' @export
    fromJSONString = function(input_json) {
      private$value <- jsonlite::fromJSON(input_json,
          simplifyVector = FALSE)
      self
    }
  ),
  private = list(
    value = NULL
  )
)

# add to utils.R
.parse_AdGroupSummaryStatus <- function(vals) {
  res <- gsub("^\\[|\\]$", "", "[RUNNING, PAUSED, NOT_STARTED, COMPLETED, ADVERTISER_DISABLED, ARCHIVED, DRAFT, DELETED_DRAFT]")
  unlist(strsplit(res, ", "))
}

