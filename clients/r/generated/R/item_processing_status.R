#' @docType class
#' @title ItemProcessingStatus
#' @description ItemProcessingStatus Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ItemProcessingStatus <- R6::R6Class(
  "ItemProcessingStatus",
  public = list(
    #' Initialize a new ItemProcessingStatus class.
    #'
    #' @description
    #' Initialize a new ItemProcessingStatus class.
    #'
    #' @param ... Optional arguments.
    #' @export
    initialize = function(...) {
      local.optional.var <- list(...)
      val <- unlist(local.optional.var)
      enumvec <- .parse_ItemProcessingStatus()

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
    #' @return ItemProcessingStatus in JSON format
    #' @export
    toJSON = function() {
        jsonlite::toJSON(private$value, auto_unbox = TRUE)
    },
    #' Deserialize JSON string into an instance of ItemProcessingStatus
    #'
    #' @description
    #' Deserialize JSON string into an instance of ItemProcessingStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of ItemProcessingStatus
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
    #' @return ItemProcessingStatus in JSON format
    #' @export
    toJSONString = function() {
      as.character(jsonlite::toJSON(private$value,
          auto_unbox = TRUE))
    },
    #' Deserialize JSON string into an instance of ItemProcessingStatus
    #'
    #' @description
    #' Deserialize JSON string into an instance of ItemProcessingStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of ItemProcessingStatus
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
.parse_ItemProcessingStatus <- function(vals) {
  res <- gsub("^\\[|\\]$", "", "[SUCCESS, FAILURE, PROCESSING]")
  unlist(strsplit(res, ", "))
}

