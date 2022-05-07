(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Pin_media_source_video_id.t : Video ID-based media source
 *)

type t = {
    source_type: Enums.pinmediasourcevideoid_source_type[@default `Video_id];
    cover_image_url: string;
    media_id: string;
} [@@deriving yojson { strict = false }, show ];;

(** Video ID-based media source *)
let create (source_type : Enums.pinmediasourcevideoid_source_type) (cover_image_url : string) (media_id : string) : t = {
    source_type = source_type;
    cover_image_url = cover_image_url;
    media_id = media_id;
}

