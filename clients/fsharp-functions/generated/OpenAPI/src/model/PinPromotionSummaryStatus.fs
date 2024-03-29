namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json

module PinPromotionSummaryStatus =

  //#region PinPromotionSummaryStatus

  let APPROVEDEnum = "APPROVED"
  let PAUSEDEnum = "PAUSED"
  let PENDINGEnum = "PENDING"
  let REJECTEDEnum = "REJECTED"
  let ADVERTISERDISABLEDEnum = "ADVERTISER_DISABLED"
  let ARCHIVEDEnum = "ARCHIVED"
  let DRAFTEnum = "DRAFT"
  let DELETEDDRAFTEnum = "DELETED_DRAFT"
  type PinPromotionSummaryStatus = string

  //#endregion
