(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Pin_media.t : Pin media objects.
 *)

type t = {
    media_type: string option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Pin media objects. *)
let create () : t = {
    media_type = None;
}
