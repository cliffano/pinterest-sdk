(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    report_status: string option [@default None];
    token: string option [@default None];
    message: string option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    report_status = None;
    token = None;
    message = None;
}
