(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    code: string;
    redirect_uri: string;
} [@@deriving yojson { strict = false }, show ];;

let create (code : string) (redirect_uri : string) : t = {
    code = code;
    redirect_uri = redirect_uri;
}

