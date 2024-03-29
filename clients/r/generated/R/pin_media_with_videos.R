#' Create a new PinMediaWithVideos
#'
#' @description
#' Pin with multiple videos.
#'
#' @docType class
#' @title PinMediaWithVideos
#' @description PinMediaWithVideos Class
#' @format An \code{R6Class} generator object
#' @field media_type  character [optional]
#' @field items  list(\link{VideoMetadata}) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PinMediaWithVideos <- R6::R6Class(
  "PinMediaWithVideos",
  inherit = PinMedia,
  public = list(
    `media_type` = NULL,
    `items` = NULL,
    #' Initialize a new PinMediaWithVideos class.
    #'
    #' @description
    #' Initialize a new PinMediaWithVideos class.
    #'
    #' @param media_type media_type
    #' @param items items
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`media_type` = NULL, `items` = NULL, ...) {
      if (!is.null(`media_type`)) {
        if (!(is.character(`media_type`) && length(`media_type`) == 1)) {
          stop(paste("Error! Invalid data for `media_type`. Must be a string:", `media_type`))
        }
        self$`media_type` <- `media_type`
      }
      if (!is.null(`items`)) {
        stopifnot(is.vector(`items`), length(`items`) != 0)
        sapply(`items`, function(x) stopifnot(R6::is.R6(x)))
        self$`items` <- `items`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return PinMediaWithVideos in JSON format
    #' @export
    toJSON = function() {
      PinMediaWithVideosObject <- list()
      if (!is.null(self$`media_type`)) {
        PinMediaWithVideosObject[["media_type"]] <-
          self$`media_type`
      }
      if (!is.null(self$`items`)) {
        PinMediaWithVideosObject[["items"]] <-
          lapply(self$`items`, function(x) x$toJSON())
      }
      PinMediaWithVideosObject
    },
    #' Deserialize JSON string into an instance of PinMediaWithVideos
    #'
    #' @description
    #' Deserialize JSON string into an instance of PinMediaWithVideos
    #'
    #' @param input_json the JSON input
    #' @return the instance of PinMediaWithVideos
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`media_type`)) {
        self$`media_type` <- this_object$`media_type`
      }
      if (!is.null(this_object$`items`)) {
        self$`items` <- ApiClient$new()$deserializeObj(this_object$`items`, "array[VideoMetadata]", loadNamespace("openapi"))
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return PinMediaWithVideos in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`media_type`)) {
          sprintf(
          '"media_type":
            "%s"
                    ',
          self$`media_type`
          )
        },
        if (!is.null(self$`items`)) {
          sprintf(
          '"items":
          [%s]
',
          paste(sapply(self$`items`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox = TRUE, digits = NA)), collapse = ",")
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of PinMediaWithVideos
    #'
    #' @description
    #' Deserialize JSON string into an instance of PinMediaWithVideos
    #'
    #' @param input_json the JSON input
    #' @return the instance of PinMediaWithVideos
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`media_type` <- this_object$`media_type`
      self$`items` <- ApiClient$new()$deserializeObj(this_object$`items`, "array[VideoMetadata]", loadNamespace("openapi"))
      self
    },
    #' Validate JSON input with respect to PinMediaWithVideos
    #'
    #' @description
    #' Validate JSON input with respect to PinMediaWithVideos and throw an exception if invalid
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
    #' @return String representation of PinMediaWithVideos
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
# PinMediaWithVideos$unlock()
#
## Below is an example to define the print function
# PinMediaWithVideos$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PinMediaWithVideos$lock()

