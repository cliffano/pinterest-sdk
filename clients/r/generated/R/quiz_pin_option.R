#' Create a new QuizPinOption
#'
#' @description
#'  This field contains multiple options to a quiz question.
#'
#' @docType class
#' @title QuizPinOption
#' @description QuizPinOption Class
#' @format An \code{R6Class} generator object
#' @field id  numeric [optional]
#' @field text  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuizPinOption <- R6::R6Class(
  "QuizPinOption",
  public = list(
    `id` = NULL,
    `text` = NULL,
    #' Initialize a new QuizPinOption class.
    #'
    #' @description
    #' Initialize a new QuizPinOption class.
    #'
    #' @param id id
    #' @param text text
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`id` = NULL, `text` = NULL, ...) {
      if (!is.null(`id`)) {
        self$`id` <- `id`
      }
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return QuizPinOption in JSON format
    #' @export
    toJSON = function() {
      QuizPinOptionObject <- list()
      if (!is.null(self$`id`)) {
        QuizPinOptionObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`text`)) {
        QuizPinOptionObject[["text"]] <-
          self$`text`
      }
      QuizPinOptionObject
    },
    #' Deserialize JSON string into an instance of QuizPinOption
    #'
    #' @description
    #' Deserialize JSON string into an instance of QuizPinOption
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuizPinOption
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return QuizPinOption in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`id`)) {
          sprintf(
          '"id":
            %d
                    ',
          self$`id`
          )
        },
        if (!is.null(self$`text`)) {
          sprintf(
          '"text":
            "%s"
                    ',
          self$`text`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of QuizPinOption
    #'
    #' @description
    #' Deserialize JSON string into an instance of QuizPinOption
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuizPinOption
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`text` <- this_object$`text`
      self
    },
    #' Validate JSON input with respect to QuizPinOption
    #'
    #' @description
    #' Validate JSON input with respect to QuizPinOption and throw an exception if invalid
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
    #' @return String representation of QuizPinOption
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
# QuizPinOption$unlock()
#
## Below is an example to define the print function
# QuizPinOption$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuizPinOption$lock()

