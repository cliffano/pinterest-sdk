#' @docType class
#' @title CatalogsType
#' @description CatalogsType Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CatalogsType <- R6::R6Class(
  "CatalogsType",
  public = list(
    #' Initialize a new CatalogsType class.
    #'
    #' @description
    #' Initialize a new CatalogsType class.
    #'
    #' @param ... Optional arguments.
    #' @export
    initialize = function(...) {
      local.optional.var <- list(...)
      val <- unlist(local.optional.var)
      enumvec <- .parse_CatalogsType()

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
    #' @return CatalogsType in JSON format
    #' @export
    toJSON = function() {
        jsonlite::toJSON(private$value, auto_unbox = TRUE)
    },
    #' Deserialize JSON string into an instance of CatalogsType
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsType
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsType
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
    #' @return CatalogsType in JSON format
    #' @export
    toJSONString = function() {
      as.character(jsonlite::toJSON(private$value,
          auto_unbox = TRUE))
    },
    #' Deserialize JSON string into an instance of CatalogsType
    #'
    #' @description
    #' Deserialize JSON string into an instance of CatalogsType
    #'
    #' @param input_json the JSON input
    #' @return the instance of CatalogsType
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
.parse_CatalogsType <- function(vals) {
  res <- gsub("^\\[|\\]$", "", "[RETAIL, HOTEL]")
  unlist(strsplit(res, ", "))
}

