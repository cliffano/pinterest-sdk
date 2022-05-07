namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.ActionType
open OpenAPI.Model.AdGroupResponseAllOf
open OpenAPI.Model.AdGroupResponseAllOf1
open OpenAPI.Model.AdGroupSummaryStatus
open OpenAPI.Model.EntityStatus
open OpenAPI.Model.PacingDeliveryType
open OpenAPI.Model.PlacementGroupType
open OpenAPI.Model.TrackingUrls
open OpenAPI.Model.bool option
open OpenAPI.Model.int option
open OpenAPI.Model.string option
open System.Collections.Generic

module AdGroupResponse =

  //#region AdGroupResponse

  //#region enums
  type BudgetTypeEnum = DAILYEnum of string  |  LIFETIMEEnum of string  |  CBOADGROUPEnum of string  
  //#endregion
  //#region enums
  type ConversionLearningModeTypeEnum = NOTACTIVEEnum of string option  |  ACTIVEEnum of string option  |  NullEnum of string option  
  //#endregion

  type AdGroupResponse = {
    Name : string;
    Status : EntityStatus;
    BudgetInMicroCurrency : int option;
    BidInMicroCurrency : int option;
    BudgetType : BudgetTypeEnum;
    StartTime : int option;
    EndTime : int option;
    TargetingSpec : IDictionary<string, string[]>;
    LifetimeFrequencyCap : int;
    TrackingUrls : TrackingUrls;
    AutoTargetingEnabled : bool option;
    PlacementGroup : PlacementGroupType;
    PacingDeliveryType : PacingDeliveryType;
    ConversionLearningModeType : ConversionLearningModeTypeEnum;
    SummaryStatus : AdGroupSummaryStatus;
    FeedProfileId : string;
    CampaignId : string;
    BillableEvent : ActionType;
    Id : string;
    Type : string;
    AdAccountId : string;
    CreatedTime : int;
    UpdatedTime : int;
  }
  //#endregion
