namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.AdCommonTrackingUrls
open OpenAPI.Model.CampaignSummaryStatus
open OpenAPI.Model.EntityStatus
open OpenAPI.Model.int option
open OpenAPI.Model.string option

module CampaignCommon =

  //#region CampaignCommon


  type CampaignCommon = {
    AdAccountId : string;
    Name : string;
    Status : EntityStatus;
    LifetimeSpendCap : int option;
    DailySpendCap : int option;
    OrderLineId : string option;
    TrackingUrls : AdCommonTrackingUrls;
    StartTime : int option;
    EndTime : int option;
    SummaryStatus : CampaignSummaryStatus;
  }
  //#endregion
