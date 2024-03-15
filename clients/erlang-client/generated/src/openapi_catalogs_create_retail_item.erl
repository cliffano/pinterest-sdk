-module(openapi_catalogs_create_retail_item).

-export([encode/1]).

-export_type([openapi_catalogs_create_retail_item/0]).

-type openapi_catalogs_create_retail_item() ::
    #{ 'item_id' := binary(),
       'operation' := binary(),
       'attributes' := openapi_item_attributes:openapi_item_attributes()
     }.

encode(#{ 'item_id' := ItemId,
          'operation' := Operation,
          'attributes' := Attributes
        }) ->
    #{ 'item_id' => ItemId,
       'operation' => Operation,
       'attributes' => Attributes
     }.
