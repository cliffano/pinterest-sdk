(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    custom_label_0: Catalogs_product_group_multiple_string_criteria.t;
} [@@deriving yojson { strict = false }, show ];;

let create (custom_label_0 : Catalogs_product_group_multiple_string_criteria.t) : t = {
    custom_label_0 = custom_label_0;
}

