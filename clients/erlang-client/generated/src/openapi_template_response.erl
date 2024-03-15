-module(openapi_template_response).

-export([encode/1]).

-export_type([openapi_template_response/0]).

-type openapi_template_response() ::
    #{ 'id' => binary(),
       'ad_account_id' => binary(),
       'ad_account_ids' => list(),
       'user_id' => binary(),
       'name' => binary(),
       'report_start_relative_days_in_past' => integer(),
       'report_end_relative_days_in_past' => integer(),
       'date_range' => openapi_template_response_date_range:openapi_template_response_date_range(),
       'report_level' => openapi_metrics_reporting_level:openapi_metrics_reporting_level(),
       'report_format' => openapi_data_output_format:openapi_data_output_format(),
       'columns' => list(),
       'granularity' => openapi_granularity:openapi_granularity(),
       'view_window_days' => integer(),
       'click_window_days' => integer(),
       'engagement_window_days' => integer(),
       'conversion_report_time_type' => binary(),
       'filters_json' => binary(),
       'is_owned_by_user' => boolean(),
       'is_scheduled' => boolean(),
       'creation_source' => binary(),
       'is_deleted' => boolean(),
       'updated_time' => integer(),
       'custom_column_ids' => list(),
       'type' => binary(),
       'ingestion_sources' => list()
     }.

encode(#{ 'id' := Id,
          'ad_account_id' := AdAccountId,
          'ad_account_ids' := AdAccountIds,
          'user_id' := UserId,
          'name' := Name,
          'report_start_relative_days_in_past' := ReportStartRelativeDaysInPast,
          'report_end_relative_days_in_past' := ReportEndRelativeDaysInPast,
          'date_range' := DateRange,
          'report_level' := ReportLevel,
          'report_format' := ReportFormat,
          'columns' := Columns,
          'granularity' := Granularity,
          'view_window_days' := ViewWindowDays,
          'click_window_days' := ClickWindowDays,
          'engagement_window_days' := EngagementWindowDays,
          'conversion_report_time_type' := ConversionReportTimeType,
          'filters_json' := FiltersJson,
          'is_owned_by_user' := IsOwnedByUser,
          'is_scheduled' := IsScheduled,
          'creation_source' := CreationSource,
          'is_deleted' := IsDeleted,
          'updated_time' := UpdatedTime,
          'custom_column_ids' := CustomColumnIds,
          'type' := Type,
          'ingestion_sources' := IngestionSources
        }) ->
    #{ 'id' => Id,
       'ad_account_id' => AdAccountId,
       'ad_account_ids' => AdAccountIds,
       'user_id' => UserId,
       'name' => Name,
       'report_start_relative_days_in_past' => ReportStartRelativeDaysInPast,
       'report_end_relative_days_in_past' => ReportEndRelativeDaysInPast,
       'date_range' => DateRange,
       'report_level' => ReportLevel,
       'report_format' => ReportFormat,
       'columns' => Columns,
       'granularity' => Granularity,
       'view_window_days' => ViewWindowDays,
       'click_window_days' => ClickWindowDays,
       'engagement_window_days' => EngagementWindowDays,
       'conversion_report_time_type' => ConversionReportTimeType,
       'filters_json' => FiltersJson,
       'is_owned_by_user' => IsOwnedByUser,
       'is_scheduled' => IsScheduled,
       'creation_source' => CreationSource,
       'is_deleted' => IsDeleted,
       'updated_time' => UpdatedTime,
       'custom_column_ids' => CustomColumnIds,
       'type' => Type,
       'ingestion_sources' => IngestionSources
     }.