namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.ConversionTagConfigs
open OpenAPI.Model.EnhancedMatchStatusType
open OpenAPI.Model.EntityStatus
open OpenAPI.Model.decimal option

module ConversionTagCommon =

  //#region ConversionTagCommon


  type ConversionTagCommon = {
    AdAccountId : string;
    CodeSnippet : string;
    EnhancedMatchStatus : EnhancedMatchStatusType;
    Id : string;
    LastFiredTimeMs : decimal option;
    Name : string;
    Status : EntityStatus;
    Version : string;
    Configs : ConversionTagConfigs;
  }
  //#endregion
