#' Create a new OrderLinesList200Response
#'
#' @description
#' OrderLinesList200Response Class
#'
#' @docType class
#' @title OrderLinesList200Response
#' @description OrderLinesList200Response Class
#' @format An \code{R6Class} generator object
#' @field items  list(\link{OrderLine})
#' @field bookmark  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderLinesList200Response <- R6::R6Class(
  "OrderLinesList200Response",
  public = list(
    `items` = NULL,
    `bookmark` = NULL,
    #' Initialize a new OrderLinesList200Response class.
    #'
    #' @description
    #' Initialize a new OrderLinesList200Response class.
    #'
    #' @param items items
    #' @param bookmark bookmark
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`items`, `bookmark` = NULL, ...) {
      if (!missing(`items`)) {
        stopifnot(is.vector(`items`), length(`items`) != 0)
        sapply(`items`, function(x) stopifnot(R6::is.R6(x)))
        self$`items` <- `items`
      }
      if (!is.null(`bookmark`)) {
        if (!(is.character(`bookmark`) && length(`bookmark`) == 1)) {
          stop(paste("Error! Invalid data for `bookmark`. Must be a string:", `bookmark`))
        }
        self$`bookmark` <- `bookmark`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return OrderLinesList200Response in JSON format
    #' @export
    toJSON = function() {
      OrderLinesList200ResponseObject <- list()
      if (!is.null(self$`items`)) {
        OrderLinesList200ResponseObject[["items"]] <-
          lapply(self$`items`, function(x) x$toJSON())
      }
      if (!is.null(self$`bookmark`)) {
        OrderLinesList200ResponseObject[["bookmark"]] <-
          self$`bookmark`
      }
      OrderLinesList200ResponseObject
    },
    #' Deserialize JSON string into an instance of OrderLinesList200Response
    #'
    #' @description
    #' Deserialize JSON string into an instance of OrderLinesList200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderLinesList200Response
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`items`)) {
        self$`items` <- ApiClient$new()$deserializeObj(this_object$`items`, "array[OrderLine]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`bookmark`)) {
        self$`bookmark` <- this_object$`bookmark`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return OrderLinesList200Response in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`items`)) {
          sprintf(
          '"items":
          [%s]
',
          paste(sapply(self$`items`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox = TRUE, digits = NA)), collapse = ",")
          )
        },
        if (!is.null(self$`bookmark`)) {
          sprintf(
          '"bookmark":
            "%s"
                    ',
          self$`bookmark`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of OrderLinesList200Response
    #'
    #' @description
    #' Deserialize JSON string into an instance of OrderLinesList200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of OrderLinesList200Response
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`items` <- ApiClient$new()$deserializeObj(this_object$`items`, "array[OrderLine]", loadNamespace("openapi"))
      self$`bookmark` <- this_object$`bookmark`
      self
    },
    #' Validate JSON input with respect to OrderLinesList200Response
    #'
    #' @description
    #' Validate JSON input with respect to OrderLinesList200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `items`
      if (!is.null(input_json$`items`)) {
        stopifnot(is.vector(input_json$`items`), length(input_json$`items`) != 0)
        tmp <- sapply(input_json$`items`, function(x) stopifnot(R6::is.R6(x)))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for OrderLinesList200Response: the required field `items` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of OrderLinesList200Response
    #' @export
    toString = function() {
      self$toJSONString()
    },
    #' Return true if the values in all fields are valid.
    #'
    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    #' @export
    isValid = function() {
      # check if the required `items` is null
      if (is.null(self$`items`)) {
        return(FALSE)
      }

      TRUE
    },
    #' Return a list of invalid fields (if any).
    #'
    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    #' @export
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `items` is null
      if (is.null(self$`items`)) {
        invalid_fields["items"] <- "Non-nullable required field `items` cannot be null."
      }

      invalid_fields
    },
    #' Print the object
    #'
    #' @description
    #' Print the object
    #'
    #' @export
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# OrderLinesList200Response$unlock()
#
## Below is an example to define the print function
# OrderLinesList200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OrderLinesList200Response$lock()

