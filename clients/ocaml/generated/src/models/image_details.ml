(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    width: int32;
    height: int32 option;
    url: string;
} [@@deriving yojson { strict = false }, show ];;

let create (width : int32) (height : int32 option) (url : string) : t = {
    width = width;
    height = height;
    url = url;
}

