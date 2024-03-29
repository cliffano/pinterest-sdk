#' Create a new LeadFormTestRequest
#'
#' @description
#' Request to create test data for lead data test API.
#'
#' @docType class
#' @title LeadFormTestRequest
#' @description LeadFormTestRequest Class
#' @format An \code{R6Class} generator object
#' @field answers Test lead answers. Should follow the creation order. list(character)
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LeadFormTestRequest <- R6::R6Class(
  "LeadFormTestRequest",
  public = list(
    `answers` = NULL,
    #' Initialize a new LeadFormTestRequest class.
    #'
    #' @description
    #' Initialize a new LeadFormTestRequest class.
    #'
    #' @param answers Test lead answers. Should follow the creation order.
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`answers`, ...) {
      if (!missing(`answers`)) {
        stopifnot(is.vector(`answers`), length(`answers`) != 0)
        sapply(`answers`, function(x) stopifnot(is.character(x)))
        self$`answers` <- `answers`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return LeadFormTestRequest in JSON format
    #' @export
    toJSON = function() {
      LeadFormTestRequestObject <- list()
      if (!is.null(self$`answers`)) {
        LeadFormTestRequestObject[["answers"]] <-
          self$`answers`
      }
      LeadFormTestRequestObject
    },
    #' Deserialize JSON string into an instance of LeadFormTestRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of LeadFormTestRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of LeadFormTestRequest
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`answers`)) {
        self$`answers` <- ApiClient$new()$deserializeObj(this_object$`answers`, "array[character]", loadNamespace("openapi"))
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return LeadFormTestRequest in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`answers`)) {
          sprintf(
          '"answers":
             [%s]
          ',
          paste(unlist(lapply(self$`answers`, function(x) paste0('"', x, '"'))), collapse = ",")
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of LeadFormTestRequest
    #'
    #' @description
    #' Deserialize JSON string into an instance of LeadFormTestRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of LeadFormTestRequest
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`answers` <- ApiClient$new()$deserializeObj(this_object$`answers`, "array[character]", loadNamespace("openapi"))
      self
    },
    #' Validate JSON input with respect to LeadFormTestRequest
    #'
    #' @description
    #' Validate JSON input with respect to LeadFormTestRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    #' @export
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `answers`
      if (!is.null(input_json$`answers`)) {
        stopifnot(is.vector(input_json$`answers`), length(input_json$`answers`) != 0)
        tmp <- sapply(input_json$`answers`, function(x) stopifnot(is.character(x)))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LeadFormTestRequest: the required field `answers` is missing."))
      }
    },
    #' To string (JSON format)
    #'
    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LeadFormTestRequest
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
      # check if the required `answers` is null
      if (is.null(self$`answers`)) {
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
      # check if the required `answers` is null
      if (is.null(self$`answers`)) {
        invalid_fields["answers"] <- "Non-nullable required field `answers` cannot be null."
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
# LeadFormTestRequest$unlock()
#
## Below is an example to define the print function
# LeadFormTestRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LeadFormTestRequest$lock()

