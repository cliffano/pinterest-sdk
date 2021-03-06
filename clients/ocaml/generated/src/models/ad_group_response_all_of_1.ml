(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
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
    campaign_id = None;
    billable_event = None;
    id = None;
    _type = None;
    ad_account_id = None;
    created_time = None;
    updated_time = None;
}

