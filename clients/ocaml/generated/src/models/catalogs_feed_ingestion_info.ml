(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    in_stock: int32 option [@default None];
    out_of_stock: int32 option [@default None];
    preorder: int32 option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    in_stock = None;
    out_of_stock = None;
    preorder = None;
}

