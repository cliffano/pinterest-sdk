namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.CatalogsFeedCredentials
open OpenAPI.Model.CatalogsFeedProcessingSchedule
open OpenAPI.Model.CatalogsFormat
open OpenAPI.Model.Country
open OpenAPI.Model.NullableCurrency
open OpenAPI.Model.ProductAvailabilityType

module CatalogsFeedsCreateRequest =

  //#region CatalogsFeedsCreateRequest

  [<CLIMutable>]
  type CatalogsFeedsCreateRequest = {
    [<JsonProperty(PropertyName = "default_country")>]
    DefaultCountry : Country;
    [<JsonProperty(PropertyName = "default_availability")>]
    DefaultAvailability : ProductAvailabilityType;
    [<JsonProperty(PropertyName = "default_currency")>]
    DefaultCurrency : NullableCurrency;
    [<JsonProperty(PropertyName = "name")>]
    Name : string;
    [<JsonProperty(PropertyName = "format")>]
    Format : CatalogsFormat;
    [<JsonProperty(PropertyName = "default_locale")>]
    DefaultLocale : string;
    [<JsonProperty(PropertyName = "credentials")>]
    Credentials : CatalogsFeedCredentials;
    [<JsonProperty(PropertyName = "location")>]
    Location : string;
    [<JsonProperty(PropertyName = "preferred_processing_schedule")>]
    PreferredProcessingSchedule : CatalogsFeedProcessingSchedule;
  }

  //#endregion
