(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Pin_media_with_image.t : Pin with image.
 *)

type t = {
    images: (string * Image_details.t) list;
    media_type: string option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Pin with image. *)
let create () : t = {
    images = [];
    media_type = None;
}
