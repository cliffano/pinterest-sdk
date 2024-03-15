namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.CatalogsHotelBatchItem
open OpenAPI.Model.CatalogsType
open OpenAPI.Model.Country
open OpenAPI.Model.Language

module CatalogsHotelBatchRequest =

  //#region CatalogsHotelBatchRequest

  [<CLIMutable>]
  type CatalogsHotelBatchRequest = {
    [<JsonProperty(PropertyName = "catalog_type")>]
    CatalogType : CatalogsType;
    [<JsonProperty(PropertyName = "country")>]
    Country : Country;
    [<JsonProperty(PropertyName = "language")>]
    Language : Language;
    [<JsonProperty(PropertyName = "items")>]
    Items : CatalogsHotelBatchItem[];
    [<JsonProperty(PropertyName = "catalog_id")>]
    CatalogId : string;
  }

  //#endregion
