(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Oauth_access_token_request.t : Describes the valid schema for possible OAuth access token requests.
 *)

type t = {
    grant_type: Enums.grant_type;
} [@@deriving yojson { strict = false }, show ];;

(** Describes the valid schema for possible OAuth access token requests. *)
let create (grant_type : Enums.grant_type) : t = {
    grant_type = grant_type;
}
