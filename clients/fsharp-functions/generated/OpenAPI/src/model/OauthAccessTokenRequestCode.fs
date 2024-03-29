namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json
open OpenAPI.Model.OauthAccessTokenRequest

module OauthAccessTokenRequestCode =

  //#region OauthAccessTokenRequestCode

  [<CLIMutable>]
  type OauthAccessTokenRequestCode = {
    [<JsonProperty(PropertyName = "code")>]
    Code : string;
    [<JsonProperty(PropertyName = "redirect_uri")>]
    RedirectUri : string;
  }

  //#endregion
