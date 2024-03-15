-module(openapi_catalogs_items_filters).

-export([encode/1]).

-export_type([openapi_catalogs_items_filters/0]).

-type openapi_catalogs_items_filters() ::
    #{ 'catalog_type' := openapi_catalogs_type:openapi_catalogs_type(),
       'item_ids' := list(),
       'catalog_id' => binary(),
       'hotel_ids' := list()
     }.

encode(#{ 'catalog_type' := CatalogType,
          'item_ids' := ItemIds,
          'catalog_id' := CatalogId,
          'hotel_ids' := HotelIds
        }) ->
    #{ 'catalog_type' => CatalogType,
       'item_ids' => ItemIds,
       'catalog_id' => CatalogId,
       'hotel_ids' => HotelIds
     }.
