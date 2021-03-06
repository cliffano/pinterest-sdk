(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Campaign_common.t : Campaign Data
 *)

type t = {
    (* Campaign's Advertiser ID. *)
    ad_account_id: string;
    (* Campaign name. *)
    name: string option [@default None];
    status: Entity_status.t option [@default None];
    (* Campaign total spending cap. *)
    lifetime_spend_cap: int32 option [@default None];
    (* Campaign daily spending cap. *)
    daily_spend_cap: int32 option [@default None];
    (* Order line ID that appears on the invoice. *)
    order_line_id: string option [@default None];
    tracking_urls: Tracking_urls.t option [@default None];
    (* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. *)
    start_time: int32 option [@default None];
    (* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. *)
    end_time: int32 option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Campaign Data *)
let create (ad_account_id : string) : t = {
    ad_account_id = ad_account_id;
    name = None;
    status = None;
    lifetime_spend_cap = None;
    daily_spend_cap = None;
    order_line_id = None;
    tracking_urls = None;
    start_time = None;
    end_time = None;
}

