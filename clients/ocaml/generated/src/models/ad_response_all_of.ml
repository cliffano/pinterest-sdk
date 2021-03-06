(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Ad_response_all_of.t : Creation fields
 *)

type t = {
    (* ID of the ad group that contains the ad. *)
    ad_group_id: string option [@default None];
    (* Deep link URL for Android devices. Not currently available. Using this field will generate an error. *)
    android_deep_link: string option [@default None];
    (* Comma-separated deep links for the carousel pin on Android. *)
    carousel_android_deep_links: string list;
    (* Comma-separated destination URLs for the carousel pin to promote. *)
    carousel_destination_urls: string list;
    (* Comma-separated deep links for the carousel pin on iOS. *)
    carousel_ios_deep_links: string list;
    (* Tracking url for the ad clicks. *)
    click_tracking_url: string option [@default None];
    (* Ad creative type enum *)
    creative_type: Enums.creative_type option [@default None];
    (* Destination URL. *)
    destination_url: string option [@default None];
    (* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. *)
    ios_deep_link: string option [@default None];
    (* Is original pin deleted? *)
    is_pin_deleted: bool option [@default None];
    (* Is pin repinnable? *)
    is_removable: bool option [@default None];
    (* Name of the ad - 255 chars max. *)
    name: string option [@default None];
    (* Pin ID. *)
    pin_id: string option [@default None];
    status: Enums.entitystatus option [@default None];
    tracking_urls: Tracking_urls.t option [@default None];
    (* Tracking URL for ad impressions. *)
    view_tracking_url: string option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Creation fields *)
let create () : t = {
    ad_group_id = None;
    android_deep_link = None;
    carousel_android_deep_links = [];
    carousel_destination_urls = [];
    carousel_ios_deep_links = [];
    click_tracking_url = None;
    creative_type = None;
    destination_url = None;
    ios_deep_link = None;
    is_pin_deleted = None;
    is_removable = None;
    name = None;
    pin_id = None;
    status = None;
    tracking_urls = None;
    view_tracking_url = None;
}

