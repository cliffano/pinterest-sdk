namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.CatalogsFeedIngestionDetails
open OpenAPI.Model.CatalogsFeedProcessingStatus
open OpenAPI.Model.CatalogsFeedProductCounts
open OpenAPI.Model.CatalogsFeedValidationDetails

module CatalogsFeedProcessingResultFields =

  //#region CatalogsFeedProcessingResultFields

  [<CLIMutable>]
  type CatalogsFeedProcessingResultFields = {
    [<JsonProperty(PropertyName = "ingestion_details")>]
    IngestionDetails : CatalogsFeedIngestionDetails;
    [<JsonProperty(PropertyName = "status")>]
    Status : CatalogsFeedProcessingStatus;
    [<JsonProperty(PropertyName = "product_counts")>]
    ProductCounts : CatalogsFeedProductCounts;
    [<JsonProperty(PropertyName = "validation_details")>]
    ValidationDetails : CatalogsFeedValidationDetails;
  }

  //#endregion
