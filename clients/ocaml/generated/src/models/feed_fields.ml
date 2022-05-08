(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    default_country: Enums.country;
    default_availability: Enums.productavailabilitytype option;
    default_currency: Enums.nullablecurrency option;
    (* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. *)
    name: string option;
    format: Enums.catalogsformat;
    (* The locale used within a feed for product descriptions. *)
    default_locale: string;
    credentials: Catalogs_feed_credentials.t option;
    (* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. *)
    location: string;
    preferred_processing_schedule: Catalogs_feed_processing_schedule.t option;
    status: Enums.catalogsstatus;
} [@@deriving yojson { strict = false }, show ];;

let create (default_country : Enums.country) (default_availability : Enums.productavailabilitytype option) (default_currency : Enums.nullablecurrency option) (name : string option) (format : Enums.catalogsformat) (default_locale : string) (credentials : Catalogs_feed_credentials.t option) (location : string) (preferred_processing_schedule : Catalogs_feed_processing_schedule.t option) (status : Enums.catalogsstatus) : t = {
    default_country = default_country;
    default_availability = default_availability;
    default_currency = default_currency;
    name = name;
    format = format;
    default_locale = default_locale;
    credentials = credentials;
    location = location;
    preferred_processing_schedule = preferred_processing_schedule;
    status = status;
}
