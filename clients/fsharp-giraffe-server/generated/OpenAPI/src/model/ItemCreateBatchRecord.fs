namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.ItemAttributes

module ItemCreateBatchRecord =

  //#region ItemCreateBatchRecord


  type ItemCreateBatchRecord = {
    ItemId : string;
    Attributes : ItemAttributes;
  }
  //#endregion
