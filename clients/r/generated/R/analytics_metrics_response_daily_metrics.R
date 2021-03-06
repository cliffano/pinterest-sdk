# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title AnalyticsMetricsResponseDailyMetrics
#'
#' @description AnalyticsMetricsResponseDailyMetrics Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field data_status  character [optional]
#'
#' @field date  character [optional]
#'
#' @field metrics  named list( numeric ) [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AnalyticsMetricsResponseDailyMetrics <- R6::R6Class(
  'AnalyticsMetricsResponseDailyMetrics',
  public = list(
    `data_status` = NULL,
    `date` = NULL,
    `metrics` = NULL,
    initialize = function(
        `data_status`=NULL, `date`=NULL, `metrics`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!is.null(`data_status`)) {
        stopifnot(is.character(`data_status`), length(`data_status`) == 1)
        self$`data_status` <- `data_status`
      }
      if (!is.null(`date`)) {
        stopifnot(is.character(`date`), length(`date`) == 1)
        self$`date` <- `date`
      }
      if (!is.null(`metrics`)) {
        stopifnot(is.vector(`metrics`), length(`metrics`) != 0)
        sapply(`metrics`, function(x) stopifnot(is.character(x)))
        self$`metrics` <- `metrics`
      }
    },
    toJSON = function() {
      AnalyticsMetricsResponseDailyMetricsObject <- list()
      if (!is.null(self$`data_status`)) {
        AnalyticsMetricsResponseDailyMetricsObject[['data_status']] <-
          self$`data_status`
      }
      if (!is.null(self$`date`)) {
        AnalyticsMetricsResponseDailyMetricsObject[['date']] <-
          self$`date`
      }
      if (!is.null(self$`metrics`)) {
        AnalyticsMetricsResponseDailyMetricsObject[['metrics']] <-
          self$`metrics`
      }

      AnalyticsMetricsResponseDailyMetricsObject
    },
    fromJSON = function(AnalyticsMetricsResponseDailyMetricsJson) {
      AnalyticsMetricsResponseDailyMetricsObject <- jsonlite::fromJSON(AnalyticsMetricsResponseDailyMetricsJson)
      if (!is.null(AnalyticsMetricsResponseDailyMetricsObject$`data_status`)) {
        self$`data_status` <- AnalyticsMetricsResponseDailyMetricsObject$`data_status`
      }
      if (!is.null(AnalyticsMetricsResponseDailyMetricsObject$`date`)) {
        self$`date` <- AnalyticsMetricsResponseDailyMetricsObject$`date`
      }
      if (!is.null(AnalyticsMetricsResponseDailyMetricsObject$`metrics`)) {
        self$`metrics` <- ApiClient$new()$deserializeObj(AnalyticsMetricsResponseDailyMetricsObject$`metrics`, "map(numeric)", loadNamespace("openapi"))
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`data_status`)) {
        sprintf(
        '"data_status":
          "%s"
                ',
        self$`data_status`
        )},
        if (!is.null(self$`date`)) {
        sprintf(
        '"date":
          "%s"
                ',
        self$`date`
        )},
        if (!is.null(self$`metrics`)) {
        sprintf(
        '"metrics":
          "%s"
        ',
        jsonlite::toJSON(lapply(self$`metrics`, function(x){ x }), auto_unbox = TRUE, digits=NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(AnalyticsMetricsResponseDailyMetricsJson) {
      AnalyticsMetricsResponseDailyMetricsObject <- jsonlite::fromJSON(AnalyticsMetricsResponseDailyMetricsJson)
      self$`data_status` <- AnalyticsMetricsResponseDailyMetricsObject$`data_status`
      self$`date` <- AnalyticsMetricsResponseDailyMetricsObject$`date`
      self$`metrics` <- ApiClient$new()$deserializeObj(AnalyticsMetricsResponseDailyMetricsObject$`metrics`, "map(numeric)", loadNamespace("openapi"))
      self
    }
  )
)
