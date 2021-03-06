(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    (* Type of account *)
    account_type: Enums.account_type option [@default None];
    profile_image: string option [@default None];
    website_url: string option [@default None];
    username: string option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    account_type = None;
    profile_image = None;
    website_url = None;
    username = None;
}

