#' Create a new GoogleProductCategory6Filter
#'
#' @description
#' GoogleProductCategory6Filter Class
#'
#' @docType class
#' @title GoogleProductCategory6Filter
#' @description GoogleProductCategory6Filter Class
#' @format An \code{R6Class} generator object
#' @field GOOGLE_PRODUCT_CATEGORY_6  \link{CatalogsProductGroupMultipleStringListCriteria}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GoogleProductCategory6Filter <- R6::R6Class(
  "GoogleProductCategory6Filter",
  public = list(
    `GOOGLE_PRODUCT_CATEGORY_6` = NULL,
    #' Initialize a new GoogleProductCategory6Filter class.
    #'
    #' @description
    #' Initialize a new GoogleProductCategory6Filter class.
    #'
    #' @param GOOGLE_PRODUCT_CATEGORY_6 GOOGLE_PRODUCT_CATEGORY_6
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`GOOGLE_PRODUCT_CATEGORY_6`, ...) {
      if (!missing(`GOOGLE_PRODUCT_CATEGORY_6`)) {
        stopifnot(R6::is.R6(`GOOGLE_PRODUCT_CATEGORY_6`))
        self$`GOOGLE_PRODUCT_CATEGORY_6` <- `GOOGLE_PRODUCT_CATEGORY_6`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return GoogleProductCategory6Filter in JSON format
    #' @export
    toJSON = function() {
      GoogleProductCategory6FilterObject <- list()
      if (!is.null(self$`GOOGLE_PRODUCT_CATEGORY_6`)) {
        GoogleProductCategory6FilterObject[["GOOGLE_PRODUCT_CATEGORY_6"]] <-
          self$`GOOGLE_PRODUCT_CATEGORY_6`$toJSON()
      }
      GoogleProductCategory6FilterObject
    },
    #' Deserialize JSON string into an instance of GoogleProductCategory6Filter
    #'
    #' @description
    #' Deserialize JSON string into an instance of GoogleProductCategory6Filter
    #'
    #' @param input_json the JSON input
    #' @return the instance of GoogleProductCategory6Filter
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`GOOGLE_PRODUCT_CATEGORY_6`)) {
        `google_product_category_6_object` <- CatalogsProductGroupMultipleStringListCriteria$new()
        `google_product_category_6_object`$fromJSON(jsonlite::toJSON(this_object$`GOOGLE_PRODUCT_CATEGORY_6`, auto_unbox = TRUE, digits = NA))
        self$`GOOGLE_PRODUCT_CATEGORY_6` <- `google_product_category_6_object`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return GoogleProductCategory6Filter in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`GOOGLE_PRODUCT_CATEGORY_6`)) {
          sprintf(
          '"GOOGLE_PRODUCT_CATEGORY_6":
          %s
          ',
          jsonlite::toJSON(self$`GOOGLE_PRODUCT_CATEGORY_6`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of GoogleProductCategory6Filter
    #'
    #' @description
    #' Deserialize JSON string into an instance of GoogleProductCategory6Filter
    #'
    #' @param input_json the JSON input
    #' @return the instance of GoogleProductCategory6Filter
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`GOOGLE_PRODUCT_CATEGORY_6` <- CatalogsProductGroupMultipleStringListCriteria$new()$fromJSON(jsonlite::toJSON(this_object$`GOOGLE_PRODUCT_CATEGORY_6`, auto_unbox = TRUE, digits = NA))
      self
    },
    #' Validate JSON input with respect to GoogleProductCategory6Filter
    #'
    #' @description
    #' Validate JSON input with respect to GoogleProductCategory6Filter and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `GOOGLE_PRODUCT_CATEGORY_6`
      if (!is.null(input_json$`GOOGLE_PRODUCT_CATEGORY_6`)) {
        stopifnot(R6::is.R6(input_json$`GOOGLE_PRODUCT_CATEGORY_6`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for GoogleProductCategory6Filter: the required field `GOOGLE_PRODUCT_CATEGORY_6` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GoogleProductCategory6Filter
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
      # check if the required `GOOGLE_PRODUCT_CATEGORY_6` is null
      if (is.null(self$`GOOGLE_PRODUCT_CATEGORY_6`)) {
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
      # check if the required `GOOGLE_PRODUCT_CATEGORY_6` is null
      if (is.null(self$`GOOGLE_PRODUCT_CATEGORY_6`)) {
        invalid_fields["GOOGLE_PRODUCT_CATEGORY_6"] <- "Non-nullable required field `GOOGLE_PRODUCT_CATEGORY_6` cannot be null."
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
# GoogleProductCategory6Filter$unlock()
#
## Below is an example to define the print function
# GoogleProductCategory6Filter$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GoogleProductCategory6Filter$lock()

