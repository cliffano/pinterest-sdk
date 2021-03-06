(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    (* Ad group name. *)
    name: string option [@default None];
    (* Ad group/entity status. *)
    status: Entity_status.t option [@default None];
    (* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. *)
    budget_in_micro_currency: int32 option [@default None];
    (* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. *)
    bid_in_micro_currency: int32 option [@default None];
    (* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. *)
    budget_type: Enums.budget_type option [@default None];
    (* Ad group start time. Unix timestamp in seconds. Defaults to current time. *)
    start_time: int32 option [@default None];
    (* Ad group end time. Unix timestamp in seconds. *)
    end_time: int32 option [@default None];
    (* Ad group targeting specification defining the ad group target audience. For example, '{\''APPTYPE\'':[\''iphone\''], \''GENDER\'':[\''male\''], \''LOCALE\'':[\''en-US\''], \''LOCATION\'':[\''501\''], \''AGE_BUCKET\'':[\''25-34\'']}' *)
    targeting_spec: (string * string list) list;
    (* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\''/docs/redoc/#section/Billable-event\\\''>billable_event</a> value. This field **REQUIRES** the `end_time` field. *)
    lifetime_frequency_cap: int32 option [@default None];
    (* Third-party tracking URLs.<br> JSON object with the format: {\''<a href=\''https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\''>Tracking event enum</a>\'':[URL string array],...}<br> For example: {\''impression\'': [\''URL1\'', \''URL2\''], \''click\'': [\''URL1\'', \''URL2\'', \''URL3\'']}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\''https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\'' target=\''_blank\''>Third-party and dynamic tracking</a>. *)
    tracking_urls: Tracking_urls.t option [@default None];
    (* Enable auto-targeting for ad group. Also known as <a href=\''https://help.pinterest.com/en/business/article/expanded-targeting\'' target=\''_blank\''>\''expanded targeting\''</a>. *)
    auto_targeting_enabled: bool option [@default None];
    (* <a href=\\\''/docs/redoc/#section/Placement-group\\\''>Placement group</a>. *)
    placement_group: Placement_group_type.t option [@default None];
    (* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. *)
    pacing_delivery_type: Pacing_delivery_type.t option [@default None];
    (* oCPM learn mode *)
    conversion_learning_mode_type: Enums.conversion_learning_mode_type option [@default None];
    (* Ad group summary status. *)
    summary_status: Ad_group_summary_status.t option [@default None];
    (* Feed Profile ID associated to the adgroup. *)
    feed_profile_id: string option [@default None];
    (* Campaign ID of the ad group. *)
    campaign_id: string option [@default None];
    billable_event: Enums.actiontype option [@default None];
    (* Ad group ID. *)
    id: string option [@default None];
    (* Always \''adgroup\''. *)
    _type: string option [@default None];
    (* Advertiser ID. *)
    ad_account_id: string option [@default None];
    (* Ad group creation time. Unix timestamp in seconds. *)
    created_time: int32 option [@default None];
    (* Ad group last update time. Unix timestamp in seconds. *)
    updated_time: int32 option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    name = None;
    status = None;
    budget_in_micro_currency = None;
    bid_in_micro_currency = None;
    budget_type = None;
    start_time = None;
    end_time = None;
    targeting_spec = [];
    lifetime_frequency_cap = None;
    tracking_urls = None;
    auto_targeting_enabled = None;
    placement_group = None;
    pacing_delivery_type = None;
    conversion_learning_mode_type = None;
    summary_status = None;
    feed_profile_id = None;
    campaign_id = None;
    billable_event = None;
    id = None;
    _type = None;
    ad_account_id = None;
    created_time = None;
    updated_time = None;
}

