#' Create a new AnalyticsDailyMetrics
#'
#' @description
#' AnalyticsDailyMetrics Class
#'
#' @docType class
#' @title AnalyticsDailyMetrics
#' @description AnalyticsDailyMetrics Class
#' @format An \code{R6Class} generator object
#' @field data_status  \link{DataStatus} [optional]
#' @field date Metrics date (UTC): YYYY-MM-DD. character [optional]
#' @field metrics The metric name and daily value for each requested metric named list(numeric) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AnalyticsDailyMetrics <- R6::R6Class(
  "AnalyticsDailyMetrics",
  public = list(
    `data_status` = NULL,
    `date` = NULL,
    `metrics` = NULL,
    #' Initialize a new AnalyticsDailyMetrics class.
    #'
    #' @description
    #' Initialize a new AnalyticsDailyMetrics class.
    #'
    #' @param data_status data_status
    #' @param date Metrics date (UTC): YYYY-MM-DD.
    #' @param metrics The metric name and daily value for each requested metric
    #' @param ... Other optional arguments.
    #' @export
    initialize = function(`data_status` = NULL, `date` = NULL, `metrics` = NULL, ...) {
      if (!is.null(`data_status`)) {
        if (!(`data_status` %in% c())) {
          stop(paste("Error! \"", `data_status`, "\" cannot be assigned to `data_status`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`data_status`))
        self$`data_status` <- `data_status`
      }
      if (!is.null(`date`)) {
        if (!(is.character(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be a string:", `date`))
        }
        self$`date` <- `date`
      }
      if (!is.null(`metrics`)) {
        stopifnot(is.vector(`metrics`), length(`metrics`) != 0)
        sapply(`metrics`, function(x) stopifnot(is.character(x)))
        self$`metrics` <- `metrics`
      }
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AnalyticsDailyMetrics in JSON format
    #' @export
    toJSON = function() {
      AnalyticsDailyMetricsObject <- list()
      if (!is.null(self$`data_status`)) {
        AnalyticsDailyMetricsObject[["data_status"]] <-
          self$`data_status`$toJSON()
      }
      if (!is.null(self$`date`)) {
        AnalyticsDailyMetricsObject[["date"]] <-
          self$`date`
      }
      if (!is.null(self$`metrics`)) {
        AnalyticsDailyMetricsObject[["metrics"]] <-
          self$`metrics`
      }
      AnalyticsDailyMetricsObject
    },
    #' Deserialize JSON string into an instance of AnalyticsDailyMetrics
    #'
    #' @description
    #' Deserialize JSON string into an instance of AnalyticsDailyMetrics
    #'
    #' @param input_json the JSON input
    #' @return the instance of AnalyticsDailyMetrics
    #' @export
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`data_status`)) {
        `data_status_object` <- DataStatus$new()
        `data_status_object`$fromJSON(jsonlite::toJSON(this_object$`data_status`, auto_unbox = TRUE, digits = NA))
        self$`data_status` <- `data_status_object`
      }
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      if (!is.null(this_object$`metrics`)) {
        self$`metrics` <- ApiClient$new()$deserializeObj(this_object$`metrics`, "map(numeric)", loadNamespace("openapi"))
      }
      self
    },
    #' To JSON string
    #'
    #' @description
    #' To JSON String
    #'
    #' @return AnalyticsDailyMetrics in JSON format
    #' @export
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`data_status`)) {
          sprintf(
          '"data_status":
          %s
          ',
          jsonlite::toJSON(self$`data_status`$toJSON(), auto_unbox = TRUE, digits = NA)
          )
        },
        if (!is.null(self$`date`)) {
          sprintf(
          '"date":
            "%s"
                    ',
          self$`date`
          )
        },
        if (!is.null(self$`metrics`)) {
          sprintf(
          '"metrics":
            "%s"
          ',
          jsonlite::toJSON(lapply(self$`metrics`, function(x){ x }), auto_unbox = TRUE, digits = NA)
          )
        }
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      json_string <- as.character(jsonlite::minify(paste("{", jsoncontent, "}", sep = "")))
    },
    #' Deserialize JSON string into an instance of AnalyticsDailyMetrics
    #'
    #' @description
    #' Deserialize JSON string into an instance of AnalyticsDailyMetrics
    #'
    #' @param input_json the JSON input
    #' @return the instance of AnalyticsDailyMetrics
    #' @export
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`data_status` <- DataStatus$new()$fromJSON(jsonlite::toJSON(this_object$`data_status`, auto_unbox = TRUE, digits = NA))
      self$`date` <- this_object$`date`
      self$`metrics` <- ApiClient$new()$deserializeObj(this_object$`metrics`, "map(numeric)", loadNamespace("openapi"))
      self
    },
    #' Validate JSON input with respect to AnalyticsDailyMetrics
    #'
    #' @description
    #' Validate JSON input with respect to AnalyticsDailyMetrics and throw an exception if invalid
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
    #' @return String representation of AnalyticsDailyMetrics
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
# AnalyticsDailyMetrics$unlock()
#
## Below is an example to define the print function
# AnalyticsDailyMetrics$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AnalyticsDailyMetrics$lock()

