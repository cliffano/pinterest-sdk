namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.CreativeType
open OpenAPI.Model.EntityStatus
open OpenAPI.Model.GridClickType
open OpenAPI.Model.bool option
open OpenAPI.Model.int option
open OpenAPI.Model.string option

module ProductGroupPromotion =

  //#region ProductGroupPromotion


  type ProductGroupPromotion = {
    Id : string;
    AdGroupId : string;
    BidInMicroCurrency : int option;
    Included : bool option;
    Definition : string option;
    RelativeDefinition : string option;
    ParentId : string option;
    SlideshowCollectionsTitle : string option;
    SlideshowCollectionsDescription : string option;
    IsMdl : bool option;
    Status : EntityStatus;
    TrackingUrl : string option;
    CatalogProductGroupId : string option;
    CatalogProductGroupName : string option;
    CreativeType : CreativeType;
    CollectionsHeroPinId : string option;
    CollectionsHeroDestinationUrl : string option;
    GridClickType : GridClickType;
  }
  //#endregion
