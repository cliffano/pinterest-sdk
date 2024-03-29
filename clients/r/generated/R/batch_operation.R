#' @docType class
#' @title BatchOperation
#' @description BatchOperation Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BatchOperation <- R6::R6Class(
  "BatchOperation",
  public = list(
    #' Initialize a new BatchOperation class.
    #'
    #' @description
    #' Initialize a new BatchOperation class.
    #'
    #' @param ... Optional arguments.
    #' @export
    initialize = function(...) {
      local.optional.var <- list(...)
      val <- unlist(local.optional.var)
      enumvec <- .parse_BatchOperation()

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
    #' @return BatchOperation in JSON format
    #' @export
    toJSON = function() {
        jsonlite::toJSON(private$value, auto_unbox = TRUE)
    },
    #' Deserialize JSON string into an instance of BatchOperation
    #'
    #' @description
    #' Deserialize JSON string into an instance of BatchOperation
    #'
    #' @param input_json the JSON input
    #' @return the instance of BatchOperation
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
    #' @return BatchOperation in JSON format
    #' @export
    toJSONString = function() {
      as.character(jsonlite::toJSON(private$value,
          auto_unbox = TRUE))
    },
    #' Deserialize JSON string into an instance of BatchOperation
    #'
    #' @description
    #' Deserialize JSON string into an instance of BatchOperation
    #'
    #' @param input_json the JSON input
    #' @return the instance of BatchOperation
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
.parse_BatchOperation <- function(vals) {
  res <- gsub("^\\[|\\]$", "", "[UPDATE, UPSERT, CREATE, DELETE_DISCONTINUED, DELETE]")
  unlist(strsplit(res, ", "))
}

