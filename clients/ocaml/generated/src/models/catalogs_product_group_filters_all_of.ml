(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    all_of: Catalogs_product_group_filter_keys.t list;
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    all_of = [];
}
