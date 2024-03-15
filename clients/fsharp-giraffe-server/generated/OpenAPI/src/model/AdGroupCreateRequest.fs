namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.ActionType
open OpenAPI.Model.AdGroupCommonOptimizationGoalMetadata
open OpenAPI.Model.AdGroupCommonTrackingUrls
open OpenAPI.Model.BudgetType
open OpenAPI.Model.EntityStatus
open OpenAPI.Model.PacingDeliveryType
open OpenAPI.Model.PlacementGroupType
open OpenAPI.Model.TargetingSpec
open OpenAPI.Model.int option
open OpenAPI.Model.string option

module AdGroupCreateRequest =

  //#region AdGroupCreateRequest

  //#region enums
  type BidStrategyTypeEnum = AUTOMATICBIDEnum of string option  |  MAXBIDEnum of string option  |  TARGETAVGEnum of string option  |  NullEnum of string option  
  //#endregion

  type AdGroupCreateRequest = {
    Name : string;
    Status : EntityStatus;
    BudgetInMicroCurrency : int option;
    BidInMicroCurrency : int option;
    OptimizationGoalMetadata : AdGroupCommonOptimizationGoalMetadata;
    BudgetType : BudgetType;
    StartTime : int option;
    EndTime : int option;
    TargetingSpec : TargetingSpec;
    LifetimeFrequencyCap : int;
    TrackingUrls : AdGroupCommonTrackingUrls;
    AutoTargetingEnabled : bool;
    PlacementGroup : PlacementGroupType;
    PacingDeliveryType : PacingDeliveryType;
    CampaignId : string;
    BillableEvent : ActionType;
    BidStrategyType : BidStrategyTypeEnum;
  }
  //#endregion
