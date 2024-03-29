#' Create a new AudienceInsightCategoryCommon
#'
#' @description
#' AudienceInsightCategoryCommon Class
#'
#' @docType class
#' @title AudienceInsightCategoryCommon
#' @description AudienceInsightCategoryCommon Class
#' @format An \code{R6Class} generator object
#' @field key  character [optional]
#' @field name  character [optional]
#' @field ratio  numeric [optional]
#' @field index  numeric [optional]
#' @field id  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AudienceInsightCategoryCommon <- R6::R6Class(
  "AudienceInsightCategoryCommon",
  public = list(
    `key` = NULL,
    `name` = NULL,
    `ratio` = NULL,
    `index` = NULL,
    `id` = NULL,
    #' Initialize a new AudienceInsightCategoryCommon class.
    #'
    #' @description
    #' Initialize a new AudienceInsightCategoryCommon class.
    #'
    #' @param key key
    #' @param name name
    #' @param ratio ratio
    #' @param index index
    #' @param id id
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`key` = NULL, `name` = NULL, `ratio` = NULL, `index` = NULL, `id` = NULL, ...) {
      if (!is.null(`key`)) {
        if (!(is.character(`key`) && length(`key`) == 1)) {
          stop(paste("Error! Invalid data for `key`. Must be a string:", `key`))
        }
        self$`key` <- `key`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`ratio`)) {
        self$`ratio` <- `ratio`
      }
      if (!is.null(`index`)) {
        self$`index` <- `index`
      }
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AudienceInsightCategoryCommon in JSON format
    #' @export
    toJSON = function() {
      AudienceInsightCategoryCommonObject <- list()
      if (!is.null(self$`key`)) {
        AudienceInsightCategoryCommonObject[["key"]] <-
          self$`key`
      }
      if (!is.null(self$`name`)) {
        AudienceInsightCategoryCommonObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`ratio`)) {
        AudienceInsightCategoryCommonObject[["ratio"]] <-
          self$`ratio`
      }
      if (!is.null(self$`index`)) {
        AudienceInsightCategoryCommonObject[["index"]] <-
          self$`index`
      }
      if (!is.null(self$`id`)) {
        AudienceInsightCategoryCommonObject[["id"]] <-
          self$`id`
      }
      AudienceInsightCategoryCommonObject
    },
    #' Deserialize JSON string into an instance of AudienceInsightCategoryCommon
    #'
    #' @description
    #' Deserialize JSON string into an instance of AudienceInsightCategoryCommon
    #'
    #' @param input_json the JSON input
    #' @return the instance of AudienceInsightCategoryCommon
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`key`)) {
        self$`key` <- this_object$`key`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`ratio`)) {
        self$`ratio` <- this_object$`ratio`
      }
      if (!is.null(this_object$`index`)) {
        self$`index` <- this_object$`index`
      }
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AudienceInsightCategoryCommon in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`key`)) {
          sprintf(
          '"key":
            "%s"
                    ',
          self$`key`
          )
        },
        if (!is.null(self$`name`)) {
          sprintf(
          '"name":
            "%s"
                    ',
          self$`name`
          )
        },
        if (!is.null(self$`ratio`)) {
          sprintf(
          '"ratio":
            %d
                    ',
          self$`ratio`
          )
        },
        if (!is.null(self$`index`)) {
          sprintf(
          '"index":
            %d
                    ',
          self$`index`
          )
        },
        if (!is.null(self$`id`)) {
          sprintf(
          '"id":
            "%s"
                    ',
          self$`id`
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of AudienceInsightCategoryCommon
    #'
    #' @description
    #' Deserialize JSON string into an instance of AudienceInsightCategoryCommon
    #'
    #' @param input_json the JSON input
    #' @return the instance of AudienceInsightCategoryCommon
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`key` <- this_object$`key`
      self$`name` <- this_object$`name`
      self$`ratio` <- this_object$`ratio`
      self$`index` <- this_object$`index`
      self$`id` <- this_object$`id`
      self
    },
    #' Validate JSON input with respect to AudienceInsightCategoryCommon
    #'
    #' @description
    #' Validate JSON input with respect to AudienceInsightCategoryCommon and throw an exception if invalid
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
    #' @return String representation of AudienceInsightCategoryCommon
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
# AudienceInsightCategoryCommon$unlock()
#
## Below is an example to define the print function
# AudienceInsightCategoryCommon$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AudienceInsightCategoryCommon$lock()

