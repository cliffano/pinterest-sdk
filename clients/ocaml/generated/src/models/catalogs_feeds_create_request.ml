(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 * Schema Catalogs_feeds_create_request.t : Request object for creating a feed. Please, be aware that \''default_country\'' and \''default_locale\'' are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 *)

type t = {
    default_country: Enums.country option [@default None];
    default_availability: Enums.productavailabilitytype option [@default None];
    default_currency: Enums.nullablecurrency option [@default None];
    (* A human-friendly name associated to a given feed. *)
    name: string;
    format: Enums.catalogsformat;
    (* The locale used within a feed for product descriptions. *)
    default_locale: string option [@default None];
    credentials: Catalogs_feed_credentials.t option [@default None];
    (* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. *)
    location: string;
    preferred_processing_schedule: Catalogs_feed_processing_schedule.t option [@default None];
} [@@deriving yojson { strict = false }, show ];;

(** Request object for creating a feed. Please, be aware that \''default_country\'' and \''default_locale\'' are not required in the spec for forward compatibility but for now the API will not accept requests without those fields. *)
let create (name : string) (format : Enums.catalogsformat) (location : string) : t = {
    default_country = None;
    default_availability = None;
    default_currency = None;
    name = name;
    format = format;
    default_locale = None;
    credentials = None;
    location = location;
    preferred_processing_schedule = None;
}

