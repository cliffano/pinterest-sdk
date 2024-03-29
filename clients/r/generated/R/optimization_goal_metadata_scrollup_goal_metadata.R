#' Create a new OptimizationGoalMetadataScrollupGoalMetadata
#'
#' @description
#' OptimizationGoalMetadataScrollupGoalMetadata Class
#'
#' @docType class
#' @title OptimizationGoalMetadataScrollupGoalMetadata
#' @description OptimizationGoalMetadataScrollupGoalMetadata Class
#' @format An \code{R6Class} generator object
#' @field scrollup_goal_value_in_micro_currency  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OptimizationGoalMetadataScrollupGoalMetadata <- R6::R6Class(
  "OptimizationGoalMetadataScrollupGoalMetadata",
  public = list(
    `scrollup_goal_value_in_micro_currency` = NULL,
    #' Initialize a new OptimizationGoalMetadataScrollupGoalMetadata class.
    #'
    #' @description
    #' Initialize a new OptimizationGoalMetadataScrollupGoalMetadata class.
    #'
    #' @param scrollup_goal_value_in_micro_currency scrollup_goal_value_in_micro_currency
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`scrollup_goal_value_in_micro_currency` = NULL, ...) {
      if (!is.null(`scrollup_goal_value_in_micro_currency`)) {
        if (!(is.character(`scrollup_goal_value_in_micro_currency`) && length(`scrollup_goal_value_in_micro_currency`) == 1)) {
          stop(paste("Error! Invalid data for `scrollup_goal_value_in_micro_currency`. Must be a string:", `scrollup_goal_value_in_micro_currency`))
        }
        self$`scrollup_goal_value_in_micro_currency` <- `scrollup_goal_value_in_micro_currency`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return OptimizationGoalMetadataScrollupGoalMetadata in JSON format
    #' @export
    toJSON = function() {
      OptimizationGoalMetadataScrollupGoalMetadataObject <- list()
      if (!is.null(self$`scrollup_goal_value_in_micro_currency`)) {
        OptimizationGoalMetadataScrollupGoalMetadataObject[["scrollup_goal_value_in_micro_currency"]] <-
          self$`scrollup_goal_value_in_micro_currency`
      }
      OptimizationGoalMetadataScrollupGoalMetadataObject
    },
    #' Deserialize JSON string into an instance of OptimizationGoalMetadataScrollupGoalMetadata
    #'
    #' @description
    #' Deserialize JSON string into an instance of OptimizationGoalMetadataScrollupGoalMetadata
    #'
    #' @param input_json the JSON input
    #' @return the instance of OptimizationGoalMetadataScrollupGoalMetadata
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`scrollup_goal_value_in_micro_currency`)) {
        self$`scrollup_goal_value_in_micro_currency` <- this_object$`scrollup_goal_value_in_micro_currency`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return OptimizationGoalMetadataScrollupGoalMetadata in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`scrollup_goal_value_in_micro_currency`)) {
          sprintf(
          '"scrollup_goal_value_in_micro_currency":
            "%s"
                    ',
          self$`scrollup_goal_value_in_micro_currency`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of OptimizationGoalMetadataScrollupGoalMetadata
    #'
    #' @description
    #' Deserialize JSON string into an instance of OptimizationGoalMetadataScrollupGoalMetadata
    #'
    #' @param input_json the JSON input
    #' @return the instance of OptimizationGoalMetadataScrollupGoalMetadata
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`scrollup_goal_value_in_micro_currency` <- this_object$`scrollup_goal_value_in_micro_currency`
      self
    },
    #' Validate JSON input with respect to OptimizationGoalMetadataScrollupGoalMetadata
    #'
    #' @description
    #' Validate JSON input with respect to OptimizationGoalMetadataScrollupGoalMetadata and throw an exception if invalid
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
    #' @return String representation of OptimizationGoalMetadataScrollupGoalMetadata
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
      if (!str_detect(self$`scrollup_goal_value_in_micro_currency`, "^[0-9]+$")) {
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
      if (!str_detect(self$`scrollup_goal_value_in_micro_currency`, "^[0-9]+$")) {
        invalid_fields["scrollup_goal_value_in_micro_currency"] <- "Invalid value for `scrollup_goal_value_in_micro_currency`, must conform to the pattern ^[0-9]+$."
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
# OptimizationGoalMetadataScrollupGoalMetadata$unlock()
#
## Below is an example to define the print function
# OptimizationGoalMetadataScrollupGoalMetadata$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# OptimizationGoalMetadataScrollupGoalMetadata$lock()

