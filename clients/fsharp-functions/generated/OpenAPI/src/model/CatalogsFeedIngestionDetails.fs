namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.CatalogsFeedIngestionErrors
open OpenAPI.Model.CatalogsFeedIngestionInfo

module CatalogsFeedIngestionDetails =

  //#region CatalogsFeedIngestionDetails

  [<CLIMutable>]
  type CatalogsFeedIngestionDetails = {
    [<JsonProperty(PropertyName = "errors")>]
    Errors : CatalogsFeedIngestionErrors;
    [<JsonProperty(PropertyName = "info")>]
    Info : CatalogsFeedIngestionInfo;
  }

  //#endregion
