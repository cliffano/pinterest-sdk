(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    condition: Catalogs_product_group_multiple_string_criteria.t;
} [@@deriving yojson { strict = false }, show ];;

let create (condition : Catalogs_product_group_multiple_string_criteria.t) : t = {
    condition = condition;
}

