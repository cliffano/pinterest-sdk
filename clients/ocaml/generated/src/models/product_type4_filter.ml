(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    product_type_4: Catalogs_product_group_multiple_string_list_criteria.t;
} [@@deriving yojson { strict = false }, show ];;

let create (product_type_4 : Catalogs_product_group_multiple_string_list_criteria.t) : t = {
    product_type_4 = product_type_4;
}

