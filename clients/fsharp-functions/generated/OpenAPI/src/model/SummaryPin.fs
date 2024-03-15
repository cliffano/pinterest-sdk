namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.SummaryPinMedia
open OpenAPI.Model.string option

module SummaryPin =

  //#region SummaryPin

  [<CLIMutable>]
  type SummaryPin = {
    [<JsonProperty(PropertyName = "media")>]
    Media : SummaryPinMedia;
    [<JsonProperty(PropertyName = "alt_text")>]
    AltText : string option;
    [<JsonProperty(PropertyName = "link")>]
    Link : string option;
    [<JsonProperty(PropertyName = "title")>]
    Title : string option;
    [<JsonProperty(PropertyName = "description")>]
    Description : string option;
  }

  //#endregion
