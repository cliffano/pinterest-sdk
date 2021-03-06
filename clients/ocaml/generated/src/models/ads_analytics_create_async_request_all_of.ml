(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    (* Metric report start date (UTC). Format: YYYY-MM-DD *)
    start_date: string;
    (* Metric report end date (UTC). Format: YYYY-MM-DD *)
    end_date: string;
    (* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly *)
    granularity: Granularity.t;
    (* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. *)
    click_window_days: Conversion_attribution_window_days.t option [@default None];
    (* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. *)
    engagement_window_days: Conversion_attribution_window_days.t option [@default None];
    (* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. *)
    view_window_days: Conversion_attribution_window_days.t option [@default None];
    (* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. *)
    conversion_report_time: Conversion_report_time_type.t option [@default None];
    (* List of types of attribution for the conversion report *)
    attribution_types: Enums.conversionreportattributiontype list;
} [@@deriving yojson { strict = false }, show ];;

let create (start_date : string) (end_date : string) (granularity : Granularity.t) : t = {
    start_date = start_date;
    end_date = end_date;
    granularity = granularity;
    click_window_days = None;
    engagement_window_days = None;
    view_window_days = None;
    conversion_report_time = None;
    attribution_types = [];
}

