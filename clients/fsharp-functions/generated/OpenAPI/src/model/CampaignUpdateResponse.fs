namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.CampaignCreateResponseItem

module CampaignUpdateResponse =

  //#region CampaignUpdateResponse

  [<CLIMutable>]
  type CampaignUpdateResponse = {
    [<JsonProperty(PropertyName = "items")>]
    Items : CampaignCreateResponseItem[];
  }

  //#endregion
