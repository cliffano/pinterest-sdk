#' Create a new ProductType2Filter
#'
#' @description
#' ProductType2Filter Class
#'
#' @docType class
#' @title ProductType2Filter
#' @description ProductType2Filter Class
#' @format An \code{R6Class} generator object
#' @field PRODUCT_TYPE_2  \link{CatalogsProductGroupMultipleStringListCriteria}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ProductType2Filter <- R6::R6Class(
  "ProductType2Filter",
  public = list(
    `PRODUCT_TYPE_2` = NULL,
    #' Initialize a new ProductType2Filter class.
    #'
    #' @description
    #' Initialize a new ProductType2Filter class.
    #'
    #' @param PRODUCT_TYPE_2 PRODUCT_TYPE_2
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`PRODUCT_TYPE_2`, ...) {
      if (!missing(`PRODUCT_TYPE_2`)) {
        stopifnot(R6::is.R6(`PRODUCT_TYPE_2`))
        self$`PRODUCT_TYPE_2` <- `PRODUCT_TYPE_2`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return ProductType2Filter in JSON format
    #' @export
    toJSON = function() {
      ProductType2FilterObject <- list()
      if (!is.null(self$`PRODUCT_TYPE_2`)) {
        ProductType2FilterObject[["PRODUCT_TYPE_2"]] <-
          self$`PRODUCT_TYPE_2`$toJSON()
      }
      ProductType2FilterObject
    },
    #' Deserialize JSON string into an instance of ProductType2Filter
    #'
    #' @description
    #' Deserialize JSON string into an instance of ProductType2Filter
    #'
    #' @param input_json the JSON input
    #' @return the instance of ProductType2Filter
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`PRODUCT_TYPE_2`)) {
        `product_type_2_object` <- CatalogsProductGroupMultipleStringListCriteria$new()
        `product_type_2_object`$fromJSON(jsonlite::toJSON(this_object$`PRODUCT_TYPE_2`, auto_unbox = TRUE, digits = NA))
        self$`PRODUCT_TYPE_2` <- `product_type_2_object`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return ProductType2Filter in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`PRODUCT_TYPE_2`)) {
          sprintf(
          '"PRODUCT_TYPE_2":
          %s
          ',
          jsonlite::toJSON(self$`PRODUCT_TYPE_2`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of ProductType2Filter
    #'
    #' @description
    #' Deserialize JSON string into an instance of ProductType2Filter
    #'
    #' @param input_json the JSON input
    #' @return the instance of ProductType2Filter
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`PRODUCT_TYPE_2` <- CatalogsProductGroupMultipleStringListCriteria$new()$fromJSON(jsonlite::toJSON(this_object$`PRODUCT_TYPE_2`, auto_unbox = TRUE, digits = NA))
      self
    },
    #' Validate JSON input with respect to ProductType2Filter
    #'
    #' @description
    #' Validate JSON input with respect to ProductType2Filter and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `PRODUCT_TYPE_2`
      if (!is.null(input_json$`PRODUCT_TYPE_2`)) {
        stopifnot(R6::is.R6(input_json$`PRODUCT_TYPE_2`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ProductType2Filter: the required field `PRODUCT_TYPE_2` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ProductType2Filter
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
      # check if the required `PRODUCT_TYPE_2` is null
      if (is.null(self$`PRODUCT_TYPE_2`)) {
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
      # check if the required `PRODUCT_TYPE_2` is null
      if (is.null(self$`PRODUCT_TYPE_2`)) {
        invalid_fields["PRODUCT_TYPE_2"] <- "Non-nullable required field `PRODUCT_TYPE_2` cannot be null."
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
# ProductType2Filter$unlock()
#
## Below is an example to define the print function
# ProductType2Filter$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ProductType2Filter$lock()

