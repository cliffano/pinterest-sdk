#' Create a new CreateMMMReportResponse
#'
#' @description
#' CreateMMMReportResponse Class
#'
#' @docType class
#' @title CreateMMMReportResponse
#' @description CreateMMMReportResponse Class
#' @format An \code{R6Class} generator object
#' @field code  numeric [optional]
#' @field data  \link{CreateMMMReportResponseData} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CreateMMMReportResponse <- R6::R6Class(
  "CreateMMMReportResponse",
  public = list(
    `code` = NULL,
    `data` = NULL,
    #' Initialize a new CreateMMMReportResponse class.
    #'
    #' @description
    #' Initialize a new CreateMMMReportResponse class.
    #'
    #' @param code code
    #' @param data data
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`code` = NULL, `data` = NULL, ...) {
      if (!is.null(`code`)) {
        self$`code` <- `code`
      }
      if (!is.null(`data`)) {
        stopifnot(R6::is.R6(`data`))
        self$`data` <- `data`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CreateMMMReportResponse in JSON format
    #' @export
    toJSON = function() {
      CreateMMMReportResponseObject <- list()
      if (!is.null(self$`code`)) {
        CreateMMMReportResponseObject[["code"]] <-
          self$`code`
      }
      if (!is.null(self$`data`)) {
        CreateMMMReportResponseObject[["data"]] <-
          self$`data`$toJSON()
      }
      CreateMMMReportResponseObject
    },
    #' Deserialize JSON string into an instance of CreateMMMReportResponse
    #'
    #' @description
    #' Deserialize JSON string into an instance of CreateMMMReportResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CreateMMMReportResponse
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`code`)) {
        self$`code` <- this_object$`code`
      }
      if (!is.null(this_object$`data`)) {
        `data_object` <- CreateMMMReportResponseData$new()
        `data_object`$fromJSON(jsonlite::toJSON(this_object$`data`, auto_unbox = TRUE, digits = NA))
        self$`data` <- `data_object`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return CreateMMMReportResponse in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`code`)) {
          sprintf(
          '"code":
            %d
                    ',
          self$`code`
          )
        },
        if (!is.null(self$`data`)) {
          sprintf(
          '"data":
          %s
          ',
          jsonlite::toJSON(self$`data`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of CreateMMMReportResponse
    #'
    #' @description
    #' Deserialize JSON string into an instance of CreateMMMReportResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CreateMMMReportResponse
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`code` <- this_object$`code`
      self$`data` <- CreateMMMReportResponseData$new()$fromJSON(jsonlite::toJSON(this_object$`data`, auto_unbox = TRUE, digits = NA))
      self
    },
    #' Validate JSON input with respect to CreateMMMReportResponse
    #'
    #' @description
    #' Validate JSON input with respect to CreateMMMReportResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CreateMMMReportResponse
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
# CreateMMMReportResponse$unlock()
#
## Below is an example to define the print function
# CreateMMMReportResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CreateMMMReportResponse$lock()

