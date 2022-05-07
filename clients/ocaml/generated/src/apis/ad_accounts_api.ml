(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

let ad_account_analytics ~ad_account_id ~start_date ~end_date ~columns ~granularity ?(click_window_days = `_30) ?(engagement_window_days = `_30) ?(view_window_days = `_1) ?(conversion_report_time = `TIME_OF_AD_ACTION) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/analytics" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "start_date" (fun x -> x) start_date in
    let uri = Request.add_query_param uri "end_date" (fun x -> x) end_date in
    let uri = Request.add_query_param_list uri "columns" (List.map Enums.show_columns) columns in
    let uri = Request.add_query_param uri "granularity"  granularity in
    let uri = Request.add_query_param uri "click_window_days" Enums.show_conversionattributionwindowdays click_window_days in
    let uri = Request.add_query_param uri "engagement_window_days" Enums.show_conversionattributionwindowdays engagement_window_days in
    let uri = Request.add_query_param uri "view_window_days" Enums.show_conversionattributionwindowdays view_window_days in
    let uri = Request.add_query_param uri "conversion_report_time" Enums.show_conversionreporttimetype conversion_report_time in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as_list_of (JsonSupport.unwrap Map.of_yojson) resp body

let ad_accounts_list ?bookmark ?(page_size = 25l) ?(include_shared_accounts = true) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts" in
    let headers = Request.default_headers in
    let uri = Request.maybe_add_query_param uri "bookmark" (fun x -> x) bookmark in
    let uri = Request.add_query_param uri "page_size" Int32.to_string page_size in
    let uri = Request.add_query_param uri "include_shared_accounts" string_of_bool include_shared_accounts in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Paginated.of_yojson) resp body

let ad_groups_analytics ~ad_account_id ~start_date ~end_date ~ad_group_ids ~columns ~granularity ?(click_window_days = `_30) ?(engagement_window_days = `_30) ?(view_window_days = `_1) ?(conversion_report_time = `TIME_OF_AD_ACTION) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/ad_groups/analytics" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "start_date" (fun x -> x) start_date in
    let uri = Request.add_query_param uri "end_date" (fun x -> x) end_date in
    let uri = Request.add_query_param_list uri "ad_group_ids" (List.map (fun x -> x)) ad_group_ids in
    let uri = Request.add_query_param_list uri "columns" (List.map Enums.show_columns) columns in
    let uri = Request.add_query_param uri "granularity"  granularity in
    let uri = Request.add_query_param uri "click_window_days" Enums.show_conversionattributionwindowdays click_window_days in
    let uri = Request.add_query_param uri "engagement_window_days" Enums.show_conversionattributionwindowdays engagement_window_days in
    let uri = Request.add_query_param uri "view_window_days" Enums.show_conversionattributionwindowdays view_window_days in
    let uri = Request.add_query_param uri "conversion_report_time" Enums.show_conversionreporttimetype conversion_report_time in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as_list_of (JsonSupport.unwrap Map.of_yojson) resp body

let ad_groups_list ~ad_account_id ?(campaign_ids = []) ?(ad_group_ids = []) ?(entity_statuses = []) ?(page_size = 25l) ?order ?bookmark ?(translate_interests_to_names = false) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/ad_groups" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param_list uri "campaign_ids" (List.map (fun x -> x)) campaign_ids in
    let uri = Request.add_query_param_list uri "ad_group_ids" (List.map (fun x -> x)) ad_group_ids in
    let uri = Request.add_query_param_list uri "entity_statuses" (List.map Enums.show_entitystatus) entity_statuses in
    let uri = Request.add_query_param uri "page_size" Int32.to_string page_size in
    let uri = Request.maybe_add_query_param uri "order" Enums.show_order order in
    let uri = Request.maybe_add_query_param uri "bookmark" (fun x -> x) bookmark in
    let uri = Request.add_query_param uri "translate_interests_to_names" string_of_bool translate_interests_to_names in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Paginated.of_yojson) resp body

let ads_analytics ~ad_account_id ~start_date ~end_date ~ad_ids ~columns ~granularity ?(click_window_days = `_30) ?(engagement_window_days = `_30) ?(view_window_days = `_1) ?(conversion_report_time = `TIME_OF_AD_ACTION) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/ads/analytics" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "start_date" (fun x -> x) start_date in
    let uri = Request.add_query_param uri "end_date" (fun x -> x) end_date in
    let uri = Request.add_query_param_list uri "ad_ids" (List.map (fun x -> x)) ad_ids in
    let uri = Request.add_query_param_list uri "columns" (List.map Enums.show_columns) columns in
    let uri = Request.add_query_param uri "granularity"  granularity in
    let uri = Request.add_query_param uri "click_window_days" Enums.show_conversionattributionwindowdays click_window_days in
    let uri = Request.add_query_param uri "engagement_window_days" Enums.show_conversionattributionwindowdays engagement_window_days in
    let uri = Request.add_query_param uri "view_window_days" Enums.show_conversionattributionwindowdays view_window_days in
    let uri = Request.add_query_param uri "conversion_report_time" Enums.show_conversionreporttimetype conversion_report_time in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as_list_of (JsonSupport.unwrap Map.of_yojson) resp body

let ads_list ~ad_account_id ?(campaign_ids = []) ?(ad_group_ids = []) ?(ad_ids = []) ?(entity_statuses = []) ?(page_size = 25l) ?order ?bookmark () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/ads" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param_list uri "campaign_ids" (List.map (fun x -> x)) campaign_ids in
    let uri = Request.add_query_param_list uri "ad_group_ids" (List.map (fun x -> x)) ad_group_ids in
    let uri = Request.add_query_param_list uri "ad_ids" (List.map (fun x -> x)) ad_ids in
    let uri = Request.add_query_param_list uri "entity_statuses" (List.map Enums.show_entitystatus) entity_statuses in
    let uri = Request.add_query_param uri "page_size" Int32.to_string page_size in
    let uri = Request.maybe_add_query_param uri "order" Enums.show_order order in
    let uri = Request.maybe_add_query_param uri "bookmark" (fun x -> x) bookmark in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Paginated.of_yojson) resp body

let analytics_create_report ~ad_account_id ~ads_analytics_create_async_request_t =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/reports" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let body = Request.write_as_json_body Ads_analytics_create_async_request.to_yojson ads_analytics_create_async_request_t in
    Cohttp_lwt_unix.Client.call `POST uri ~headers ~body >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Ads_analytics_create_async_response.of_yojson) resp body

let analytics_get_report ~ad_account_id ~token =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/reports" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "token" (fun x -> x) token in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Ads_analytics_get_async_response.of_yojson) resp body

let campaigns_analytics ~ad_account_id ~start_date ~end_date ~campaign_ids ~columns ~granularity ?(click_window_days = `_30) ?(engagement_window_days = `_30) ?(view_window_days = `_1) ?(conversion_report_time = `TIME_OF_AD_ACTION) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/campaigns/analytics" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "start_date" (fun x -> x) start_date in
    let uri = Request.add_query_param uri "end_date" (fun x -> x) end_date in
    let uri = Request.add_query_param_list uri "campaign_ids" (List.map (fun x -> x)) campaign_ids in
    let uri = Request.add_query_param_list uri "columns" (List.map Enums.show_columns) columns in
    let uri = Request.add_query_param uri "granularity"  granularity in
    let uri = Request.add_query_param uri "click_window_days" Enums.show_conversionattributionwindowdays click_window_days in
    let uri = Request.add_query_param uri "engagement_window_days" Enums.show_conversionattributionwindowdays engagement_window_days in
    let uri = Request.add_query_param uri "view_window_days" Enums.show_conversionattributionwindowdays view_window_days in
    let uri = Request.add_query_param uri "conversion_report_time" Enums.show_conversionreporttimetype conversion_report_time in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as_list_of (JsonSupport.unwrap Map.of_yojson) resp body

let campaigns_list ~ad_account_id ?(campaign_ids = []) ?(entity_statuses = []) ?(page_size = 25l) ?order ?bookmark () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/campaigns" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param_list uri "campaign_ids" (List.map (fun x -> x)) campaign_ids in
    let uri = Request.add_query_param_list uri "entity_statuses" (List.map Enums.show_entitystatus) entity_statuses in
    let uri = Request.add_query_param uri "page_size" Int32.to_string page_size in
    let uri = Request.maybe_add_query_param uri "order" Enums.show_order order in
    let uri = Request.maybe_add_query_param uri "bookmark" (fun x -> x) bookmark in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as (JsonSupport.unwrap Paginated.of_yojson) resp body

let product_groups_analytics ~ad_account_id ~start_date ~end_date ~product_group_ids ~columns ~granularity ?(click_window_days = `_30) ?(engagement_window_days = `_30) ?(view_window_days = `_1) ?(conversion_report_time = `TIME_OF_AD_ACTION) () =
    let open Lwt in
    let uri = Request.build_uri "/ad_accounts/{ad_account_id}/product_groups/analytics" in
    let headers = Request.default_headers in
    let uri = Request.replace_path_param uri "ad_account_id" (fun x -> x) ad_account_id in
    let uri = Request.add_query_param uri "start_date" (fun x -> x) start_date in
    let uri = Request.add_query_param uri "end_date" (fun x -> x) end_date in
    let uri = Request.add_query_param_list uri "product_group_ids" (List.map (fun x -> x)) product_group_ids in
    let uri = Request.add_query_param_list uri "columns" (List.map Enums.show_columns) columns in
    let uri = Request.add_query_param uri "granularity"  granularity in
    let uri = Request.add_query_param uri "click_window_days" Enums.show_conversionattributionwindowdays click_window_days in
    let uri = Request.add_query_param uri "engagement_window_days" Enums.show_conversionattributionwindowdays engagement_window_days in
    let uri = Request.add_query_param uri "view_window_days" Enums.show_conversionattributionwindowdays view_window_days in
    let uri = Request.add_query_param uri "conversion_report_time" Enums.show_conversionreporttimetype conversion_report_time in
    Cohttp_lwt_unix.Client.call `GET uri ~headers >>= fun (resp, body) ->
    Request.read_json_body_as_list_of (JsonSupport.unwrap Map.of_yojson) resp body

