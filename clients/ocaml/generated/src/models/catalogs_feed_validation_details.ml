(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    errors: Catalogs_feed_validation_errors.t;
    warnings: Catalogs_feed_validation_warnings.t;
} [@@deriving yojson { strict = false }, show ];;

let create (errors : Catalogs_feed_validation_errors.t) (warnings : Catalogs_feed_validation_warnings.t) : t = {
    errors = errors;
    warnings = warnings;
}

