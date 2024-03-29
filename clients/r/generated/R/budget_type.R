#' @docType class
#' @title BudgetType
#' @description BudgetType Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BudgetType <- R6::R6Class(
  "BudgetType",
  public = list(
    #' Initialize a new BudgetType class.
    #'
    #' @description
    #' Initialize a new BudgetType class.
    #'
    #' @param ... Optional arguments.
    #' @export
    initialize = function(...) {
      local.optional.var <- list(...)
      val <- unlist(local.optional.var)
      enumvec <- .parse_BudgetType()

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
    #' @return BudgetType in JSON format
    #' @export
    toJSON = function() {
        jsonlite::toJSON(private$value, auto_unbox = TRUE)
    },
    #' Deserialize JSON string into an instance of BudgetType
    #'
    #' @description
    #' Deserialize JSON string into an instance of BudgetType
    #'
    #' @param input_json the JSON input
    #' @return the instance of BudgetType
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
    #' @return BudgetType in JSON format
    #' @export
    toJSONString = function() {
      as.character(jsonlite::toJSON(private$value,
          auto_unbox = TRUE))
    },
    #' Deserialize JSON string into an instance of BudgetType
    #'
    #' @description
    #' Deserialize JSON string into an instance of BudgetType
    #'
    #' @param input_json the JSON input
    #' @return the instance of BudgetType
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
.parse_BudgetType <- function(vals) {
  res <- gsub("^\\[|\\]$", "", "[DAILY, LIFETIME, CBO_ADGROUP]")
  unlist(strsplit(res, ", "))
}

