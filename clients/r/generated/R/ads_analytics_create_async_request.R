# Pinterest REST API
#
# Pinterest's REST API
#
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title AdsAnalyticsCreateAsyncRequest
#'
#' @description AdsAnalyticsCreateAsyncRequest Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field start_date  character 
#'
#' @field end_date  character 
#'
#' @field granularity  \link{Granularity} 
#'
#' @field click_window_days  \link{ConversionAttributionWindowDays} [optional]
#'
#' @field engagement_window_days  \link{ConversionAttributionWindowDays} [optional]
#'
#' @field view_window_days  \link{ConversionAttributionWindowDays} [optional]
#'
#' @field conversion_report_time  \link{ConversionReportTimeType} [optional]
#'
#' @field attribution_types  list( \link{ConversionReportAttributionType} ) [optional]
#'
#' @field columns  list( \link{ReportingColumnAsync} ) 
#'
#' @field level  \link{MetricsReportingLevel} 
#'
#' @field report_format  \link{DataOutputFormat} [optional]
#'
#' @field campaign_ids  list( character ) [optional]
#'
#' @field campaign_statuses  list( \link{CampaignSummaryStatus} ) [optional]
#'
#' @field campaign_objective_types  list( \link{ObjectiveType} ) [optional]
#'
#' @field ad_group_ids  list( character ) [optional]
#'
#' @field ad_group_statuses  list( \link{AdGroupSummaryStatus} ) [optional]
#'
#' @field ad_ids  list( character ) [optional]
#'
#' @field ad_statuses  list( \link{PinPromotionSummaryStatus} ) [optional]
#'
#' @field product_group_ids  list( character ) [optional]
#'
#' @field product_group_statuses  list( \link{ProductGroupSummaryStatus} ) [optional]
#'
#' @field product_item_ids  list( character ) [optional]
#'
#' @field targeting_types  list( \link{AdsAnalyticsTargetingType} ) [optional]
#'
#' @field metrics_filters  list( \link{AdsAnalyticsMetricsFilter} ) [optional]
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AdsAnalyticsCreateAsyncRequest <- R6::R6Class(
  'AdsAnalyticsCreateAsyncRequest',
  public = list(
    `start_date` = NULL,
    `end_date` = NULL,
    `granularity` = NULL,
    `click_window_days` = NULL,
    `engagement_window_days` = NULL,
    `view_window_days` = NULL,
    `conversion_report_time` = NULL,
    `attribution_types` = NULL,
    `columns` = NULL,
    `level` = NULL,
    `report_format` = NULL,
    `campaign_ids` = NULL,
    `campaign_statuses` = NULL,
    `campaign_objective_types` = NULL,
    `ad_group_ids` = NULL,
    `ad_group_statuses` = NULL,
    `ad_ids` = NULL,
    `ad_statuses` = NULL,
    `product_group_ids` = NULL,
    `product_group_statuses` = NULL,
    `product_item_ids` = NULL,
    `targeting_types` = NULL,
    `metrics_filters` = NULL,
    initialize = function(
        `start_date`, `end_date`, `granularity`, `columns`, `level`, `click_window_days`=30, `engagement_window_days`=30, `view_window_days`=1, `conversion_report_time`='TIME_OF_AD_ACTION', `attribution_types`=NULL, `report_format`='JSON', `campaign_ids`=NULL, `campaign_statuses`=NULL, `campaign_objective_types`=NULL, `ad_group_ids`=NULL, `ad_group_statuses`=NULL, `ad_ids`=NULL, `ad_statuses`=NULL, `product_group_ids`=NULL, `product_group_statuses`=NULL, `product_item_ids`=NULL, `targeting_types`=NULL, `metrics_filters`=NULL, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`start_date`)) {
        stopifnot(is.character(`start_date`), length(`start_date`) == 1)
        self$`start_date` <- `start_date`
      }
      if (!missing(`end_date`)) {
        stopifnot(is.character(`end_date`), length(`end_date`) == 1)
        self$`end_date` <- `end_date`
      }
      if (!missing(`granularity`)) {
        stopifnot(is.character(`granularity`), length(`granularity`) == 1)
        stopifnot(R6::is.R6(`granularity`))
        self$`granularity` <- `granularity`
      }
      if (!missing(`columns`)) {
        stopifnot(is.vector(`columns`), length(`columns`) != 0)
        sapply(`columns`, function(x) stopifnot(R6::is.R6(x)))
        self$`columns` <- `columns`
      }
      if (!missing(`level`)) {
        stopifnot(is.character(`level`), length(`level`) == 1)
        stopifnot(R6::is.R6(`level`))
        self$`level` <- `level`
      }
      if (!is.null(`click_window_days`)) {
        stopifnot(is.numeric(`click_window_days`), length(`click_window_days`) == 1)
        stopifnot(R6::is.R6(`click_window_days`))
        self$`click_window_days` <- `click_window_days`
      }
      if (!is.null(`engagement_window_days`)) {
        stopifnot(is.numeric(`engagement_window_days`), length(`engagement_window_days`) == 1)
        stopifnot(R6::is.R6(`engagement_window_days`))
        self$`engagement_window_days` <- `engagement_window_days`
      }
      if (!is.null(`view_window_days`)) {
        stopifnot(is.numeric(`view_window_days`), length(`view_window_days`) == 1)
        stopifnot(R6::is.R6(`view_window_days`))
        self$`view_window_days` <- `view_window_days`
      }
      if (!is.null(`conversion_report_time`)) {
        stopifnot(is.character(`conversion_report_time`), length(`conversion_report_time`) == 1)
        stopifnot(R6::is.R6(`conversion_report_time`))
        self$`conversion_report_time` <- `conversion_report_time`
      }
      if (!is.null(`attribution_types`)) {
        stopifnot(is.vector(`attribution_types`), length(`attribution_types`) != 0)
        sapply(`attribution_types`, function(x) stopifnot(R6::is.R6(x)))
        self$`attribution_types` <- `attribution_types`
      }
      if (!is.null(`report_format`)) {
        stopifnot(is.character(`report_format`), length(`report_format`) == 1)
        stopifnot(R6::is.R6(`report_format`))
        self$`report_format` <- `report_format`
      }
      if (!is.null(`campaign_ids`)) {
        stopifnot(is.vector(`campaign_ids`), length(`campaign_ids`) != 0)
        sapply(`campaign_ids`, function(x) stopifnot(is.character(x)))
        self$`campaign_ids` <- `campaign_ids`
      }
      if (!is.null(`campaign_statuses`)) {
        stopifnot(is.vector(`campaign_statuses`), length(`campaign_statuses`) != 0)
        sapply(`campaign_statuses`, function(x) stopifnot(R6::is.R6(x)))
        self$`campaign_statuses` <- `campaign_statuses`
      }
      if (!is.null(`campaign_objective_types`)) {
        stopifnot(is.vector(`campaign_objective_types`), length(`campaign_objective_types`) != 0)
        sapply(`campaign_objective_types`, function(x) stopifnot(R6::is.R6(x)))
        self$`campaign_objective_types` <- `campaign_objective_types`
      }
      if (!is.null(`ad_group_ids`)) {
        stopifnot(is.vector(`ad_group_ids`), length(`ad_group_ids`) != 0)
        sapply(`ad_group_ids`, function(x) stopifnot(is.character(x)))
        self$`ad_group_ids` <- `ad_group_ids`
      }
      if (!is.null(`ad_group_statuses`)) {
        stopifnot(is.vector(`ad_group_statuses`), length(`ad_group_statuses`) != 0)
        sapply(`ad_group_statuses`, function(x) stopifnot(R6::is.R6(x)))
        self$`ad_group_statuses` <- `ad_group_statuses`
      }
      if (!is.null(`ad_ids`)) {
        stopifnot(is.vector(`ad_ids`), length(`ad_ids`) != 0)
        sapply(`ad_ids`, function(x) stopifnot(is.character(x)))
        self$`ad_ids` <- `ad_ids`
      }
      if (!is.null(`ad_statuses`)) {
        stopifnot(is.vector(`ad_statuses`), length(`ad_statuses`) != 0)
        sapply(`ad_statuses`, function(x) stopifnot(R6::is.R6(x)))
        self$`ad_statuses` <- `ad_statuses`
      }
      if (!is.null(`product_group_ids`)) {
        stopifnot(is.vector(`product_group_ids`), length(`product_group_ids`) != 0)
        sapply(`product_group_ids`, function(x) stopifnot(is.character(x)))
        self$`product_group_ids` <- `product_group_ids`
      }
      if (!is.null(`product_group_statuses`)) {
        stopifnot(is.vector(`product_group_statuses`), length(`product_group_statuses`) != 0)
        sapply(`product_group_statuses`, function(x) stopifnot(R6::is.R6(x)))
        self$`product_group_statuses` <- `product_group_statuses`
      }
      if (!is.null(`product_item_ids`)) {
        stopifnot(is.vector(`product_item_ids`), length(`product_item_ids`) != 0)
        sapply(`product_item_ids`, function(x) stopifnot(is.character(x)))
        self$`product_item_ids` <- `product_item_ids`
      }
      if (!is.null(`targeting_types`)) {
        stopifnot(is.vector(`targeting_types`), length(`targeting_types`) != 0)
        sapply(`targeting_types`, function(x) stopifnot(R6::is.R6(x)))
        self$`targeting_types` <- `targeting_types`
      }
      if (!is.null(`metrics_filters`)) {
        stopifnot(is.vector(`metrics_filters`), length(`metrics_filters`) != 0)
        sapply(`metrics_filters`, function(x) stopifnot(R6::is.R6(x)))
        self$`metrics_filters` <- `metrics_filters`
      }
    },
    toJSON = function() {
      AdsAnalyticsCreateAsyncRequestObject <- list()
      if (!is.null(self$`start_date`)) {
        AdsAnalyticsCreateAsyncRequestObject[['start_date']] <-
          self$`start_date`
      }
      if (!is.null(self$`end_date`)) {
        AdsAnalyticsCreateAsyncRequestObject[['end_date']] <-
          self$`end_date`
      }
      if (!is.null(self$`granularity`)) {
        AdsAnalyticsCreateAsyncRequestObject[['granularity']] <-
          self$`granularity`$toJSON()
      }
      if (!is.null(self$`click_window_days`)) {
        AdsAnalyticsCreateAsyncRequestObject[['click_window_days']] <-
          self$`click_window_days`$toJSON()
      }
      if (!is.null(self$`engagement_window_days`)) {
        AdsAnalyticsCreateAsyncRequestObject[['engagement_window_days']] <-
          self$`engagement_window_days`$toJSON()
      }
      if (!is.null(self$`view_window_days`)) {
        AdsAnalyticsCreateAsyncRequestObject[['view_window_days']] <-
          self$`view_window_days`$toJSON()
      }
      if (!is.null(self$`conversion_report_time`)) {
        AdsAnalyticsCreateAsyncRequestObject[['conversion_report_time']] <-
          self$`conversion_report_time`$toJSON()
      }
      if (!is.null(self$`attribution_types`)) {
        AdsAnalyticsCreateAsyncRequestObject[['attribution_types']] <-
          lapply(self$`attribution_types`, function(x) x$toJSON())
      }
      if (!is.null(self$`columns`)) {
        AdsAnalyticsCreateAsyncRequestObject[['columns']] <-
          lapply(self$`columns`, function(x) x$toJSON())
      }
      if (!is.null(self$`level`)) {
        AdsAnalyticsCreateAsyncRequestObject[['level']] <-
          self$`level`$toJSON()
      }
      if (!is.null(self$`report_format`)) {
        AdsAnalyticsCreateAsyncRequestObject[['report_format']] <-
          self$`report_format`$toJSON()
      }
      if (!is.null(self$`campaign_ids`)) {
        AdsAnalyticsCreateAsyncRequestObject[['campaign_ids']] <-
          self$`campaign_ids`
      }
      if (!is.null(self$`campaign_statuses`)) {
        AdsAnalyticsCreateAsyncRequestObject[['campaign_statuses']] <-
          lapply(self$`campaign_statuses`, function(x) x$toJSON())
      }
      if (!is.null(self$`campaign_objective_types`)) {
        AdsAnalyticsCreateAsyncRequestObject[['campaign_objective_types']] <-
          lapply(self$`campaign_objective_types`, function(x) x$toJSON())
      }
      if (!is.null(self$`ad_group_ids`)) {
        AdsAnalyticsCreateAsyncRequestObject[['ad_group_ids']] <-
          self$`ad_group_ids`
      }
      if (!is.null(self$`ad_group_statuses`)) {
        AdsAnalyticsCreateAsyncRequestObject[['ad_group_statuses']] <-
          lapply(self$`ad_group_statuses`, function(x) x$toJSON())
      }
      if (!is.null(self$`ad_ids`)) {
        AdsAnalyticsCreateAsyncRequestObject[['ad_ids']] <-
          self$`ad_ids`
      }
      if (!is.null(self$`ad_statuses`)) {
        AdsAnalyticsCreateAsyncRequestObject[['ad_statuses']] <-
          lapply(self$`ad_statuses`, function(x) x$toJSON())
      }
      if (!is.null(self$`product_group_ids`)) {
        AdsAnalyticsCreateAsyncRequestObject[['product_group_ids']] <-
          self$`product_group_ids`
      }
      if (!is.null(self$`product_group_statuses`)) {
        AdsAnalyticsCreateAsyncRequestObject[['product_group_statuses']] <-
          lapply(self$`product_group_statuses`, function(x) x$toJSON())
      }
      if (!is.null(self$`product_item_ids`)) {
        AdsAnalyticsCreateAsyncRequestObject[['product_item_ids']] <-
          self$`product_item_ids`
      }
      if (!is.null(self$`targeting_types`)) {
        AdsAnalyticsCreateAsyncRequestObject[['targeting_types']] <-
          lapply(self$`targeting_types`, function(x) x$toJSON())
      }
      if (!is.null(self$`metrics_filters`)) {
        AdsAnalyticsCreateAsyncRequestObject[['metrics_filters']] <-
          lapply(self$`metrics_filters`, function(x) x$toJSON())
      }

      AdsAnalyticsCreateAsyncRequestObject
    },
    fromJSON = function(AdsAnalyticsCreateAsyncRequestJson) {
      AdsAnalyticsCreateAsyncRequestObject <- jsonlite::fromJSON(AdsAnalyticsCreateAsyncRequestJson)
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`start_date`)) {
        self$`start_date` <- AdsAnalyticsCreateAsyncRequestObject$`start_date`
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`end_date`)) {
        self$`end_date` <- AdsAnalyticsCreateAsyncRequestObject$`end_date`
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`granularity`)) {
        granularityObject <- Granularity$new()
        granularityObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$granularity, auto_unbox = TRUE, digits = NA))
        self$`granularity` <- granularityObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`click_window_days`)) {
        click_window_daysObject <- ConversionAttributionWindowDays$new()
        click_window_daysObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$click_window_days, auto_unbox = TRUE, digits = NA))
        self$`click_window_days` <- click_window_daysObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`engagement_window_days`)) {
        engagement_window_daysObject <- ConversionAttributionWindowDays$new()
        engagement_window_daysObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$engagement_window_days, auto_unbox = TRUE, digits = NA))
        self$`engagement_window_days` <- engagement_window_daysObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`view_window_days`)) {
        view_window_daysObject <- ConversionAttributionWindowDays$new()
        view_window_daysObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$view_window_days, auto_unbox = TRUE, digits = NA))
        self$`view_window_days` <- view_window_daysObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`conversion_report_time`)) {
        conversion_report_timeObject <- ConversionReportTimeType$new()
        conversion_report_timeObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$conversion_report_time, auto_unbox = TRUE, digits = NA))
        self$`conversion_report_time` <- conversion_report_timeObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`attribution_types`)) {
        self$`attribution_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`attribution_types`, "array[ConversionReportAttributionType]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`columns`)) {
        self$`columns` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`columns`, "array[ReportingColumnAsync]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`level`)) {
        levelObject <- MetricsReportingLevel$new()
        levelObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$level, auto_unbox = TRUE, digits = NA))
        self$`level` <- levelObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`report_format`)) {
        report_formatObject <- DataOutputFormat$new()
        report_formatObject$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$report_format, auto_unbox = TRUE, digits = NA))
        self$`report_format` <- report_formatObject
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`campaign_ids`)) {
        self$`campaign_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_ids`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`campaign_statuses`)) {
        self$`campaign_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_statuses`, "array[CampaignSummaryStatus]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`campaign_objective_types`)) {
        self$`campaign_objective_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_objective_types`, "array[ObjectiveType]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`ad_group_ids`)) {
        self$`ad_group_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_group_ids`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`ad_group_statuses`)) {
        self$`ad_group_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_group_statuses`, "array[AdGroupSummaryStatus]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`ad_ids`)) {
        self$`ad_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_ids`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`ad_statuses`)) {
        self$`ad_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_statuses`, "array[PinPromotionSummaryStatus]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`product_group_ids`)) {
        self$`product_group_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_group_ids`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`product_group_statuses`)) {
        self$`product_group_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_group_statuses`, "array[ProductGroupSummaryStatus]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`product_item_ids`)) {
        self$`product_item_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_item_ids`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`targeting_types`)) {
        self$`targeting_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`targeting_types`, "array[AdsAnalyticsTargetingType]", loadNamespace("openapi"))
      }
      if (!is.null(AdsAnalyticsCreateAsyncRequestObject$`metrics_filters`)) {
        self$`metrics_filters` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`metrics_filters`, "array[AdsAnalyticsMetricsFilter]", loadNamespace("openapi"))
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`start_date`)) {
        sprintf(
        '"start_date":
          "%s"
                ',
        self$`start_date`
        )},
        if (!is.null(self$`end_date`)) {
        sprintf(
        '"end_date":
          "%s"
                ',
        self$`end_date`
        )},
        if (!is.null(self$`granularity`)) {
        sprintf(
        '"granularity":
        %s
        ',
        jsonlite::toJSON(self$`granularity`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`click_window_days`)) {
        sprintf(
        '"click_window_days":
        %s
        ',
        jsonlite::toJSON(self$`click_window_days`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`engagement_window_days`)) {
        sprintf(
        '"engagement_window_days":
        %s
        ',
        jsonlite::toJSON(self$`engagement_window_days`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`view_window_days`)) {
        sprintf(
        '"view_window_days":
        %s
        ',
        jsonlite::toJSON(self$`view_window_days`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`conversion_report_time`)) {
        sprintf(
        '"conversion_report_time":
        %s
        ',
        jsonlite::toJSON(self$`conversion_report_time`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`attribution_types`)) {
        sprintf(
        '"attribution_types":
        [%s]
',
        paste(sapply(self$`attribution_types`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`columns`)) {
        sprintf(
        '"columns":
        [%s]
',
        paste(sapply(self$`columns`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`level`)) {
        sprintf(
        '"level":
        %s
        ',
        jsonlite::toJSON(self$`level`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`report_format`)) {
        sprintf(
        '"report_format":
        %s
        ',
        jsonlite::toJSON(self$`report_format`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`campaign_ids`)) {
        sprintf(
        '"campaign_ids":
           [%s]
        ',
        paste(unlist(lapply(self$`campaign_ids`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`campaign_statuses`)) {
        sprintf(
        '"campaign_statuses":
        [%s]
',
        paste(sapply(self$`campaign_statuses`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`campaign_objective_types`)) {
        sprintf(
        '"campaign_objective_types":
        [%s]
',
        paste(sapply(self$`campaign_objective_types`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`ad_group_ids`)) {
        sprintf(
        '"ad_group_ids":
           [%s]
        ',
        paste(unlist(lapply(self$`ad_group_ids`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`ad_group_statuses`)) {
        sprintf(
        '"ad_group_statuses":
        [%s]
',
        paste(sapply(self$`ad_group_statuses`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`ad_ids`)) {
        sprintf(
        '"ad_ids":
           [%s]
        ',
        paste(unlist(lapply(self$`ad_ids`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`ad_statuses`)) {
        sprintf(
        '"ad_statuses":
        [%s]
',
        paste(sapply(self$`ad_statuses`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`product_group_ids`)) {
        sprintf(
        '"product_group_ids":
           [%s]
        ',
        paste(unlist(lapply(self$`product_group_ids`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`product_group_statuses`)) {
        sprintf(
        '"product_group_statuses":
        [%s]
',
        paste(sapply(self$`product_group_statuses`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`product_item_ids`)) {
        sprintf(
        '"product_item_ids":
           [%s]
        ',
        paste(unlist(lapply(self$`product_item_ids`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`targeting_types`)) {
        sprintf(
        '"targeting_types":
        [%s]
',
        paste(sapply(self$`targeting_types`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`metrics_filters`)) {
        sprintf(
        '"metrics_filters":
        [%s]
',
        paste(sapply(self$`metrics_filters`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(AdsAnalyticsCreateAsyncRequestJson) {
      AdsAnalyticsCreateAsyncRequestObject <- jsonlite::fromJSON(AdsAnalyticsCreateAsyncRequestJson)
      self$`start_date` <- AdsAnalyticsCreateAsyncRequestObject$`start_date`
      self$`end_date` <- AdsAnalyticsCreateAsyncRequestObject$`end_date`
      self$`granularity` <- Granularity$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$granularity, auto_unbox = TRUE, digits = NA))
      self$`click_window_days` <- ConversionAttributionWindowDays$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$click_window_days, auto_unbox = TRUE, digits = NA))
      self$`engagement_window_days` <- ConversionAttributionWindowDays$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$engagement_window_days, auto_unbox = TRUE, digits = NA))
      self$`view_window_days` <- ConversionAttributionWindowDays$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$view_window_days, auto_unbox = TRUE, digits = NA))
      self$`conversion_report_time` <- ConversionReportTimeType$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$conversion_report_time, auto_unbox = TRUE, digits = NA))
      self$`attribution_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`attribution_types`, "array[ConversionReportAttributionType]", loadNamespace("openapi"))
      self$`columns` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`columns`, "array[ReportingColumnAsync]", loadNamespace("openapi"))
      self$`level` <- MetricsReportingLevel$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$level, auto_unbox = TRUE, digits = NA))
      self$`report_format` <- DataOutputFormat$new()$fromJSON(jsonlite::toJSON(AdsAnalyticsCreateAsyncRequestObject$report_format, auto_unbox = TRUE, digits = NA))
      self$`campaign_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_ids`, "array[character]", loadNamespace("openapi"))
      self$`campaign_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_statuses`, "array[CampaignSummaryStatus]", loadNamespace("openapi"))
      self$`campaign_objective_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`campaign_objective_types`, "array[ObjectiveType]", loadNamespace("openapi"))
      self$`ad_group_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_group_ids`, "array[character]", loadNamespace("openapi"))
      self$`ad_group_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_group_statuses`, "array[AdGroupSummaryStatus]", loadNamespace("openapi"))
      self$`ad_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_ids`, "array[character]", loadNamespace("openapi"))
      self$`ad_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`ad_statuses`, "array[PinPromotionSummaryStatus]", loadNamespace("openapi"))
      self$`product_group_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_group_ids`, "array[character]", loadNamespace("openapi"))
      self$`product_group_statuses` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_group_statuses`, "array[ProductGroupSummaryStatus]", loadNamespace("openapi"))
      self$`product_item_ids` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`product_item_ids`, "array[character]", loadNamespace("openapi"))
      self$`targeting_types` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`targeting_types`, "array[AdsAnalyticsTargetingType]", loadNamespace("openapi"))
      self$`metrics_filters` <- ApiClient$new()$deserializeObj(AdsAnalyticsCreateAsyncRequestObject$`metrics_filters`, "array[AdsAnalyticsMetricsFilter]", loadNamespace("openapi"))
      self
    }
  )
)
