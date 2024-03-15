-module(openapi_catalogs_hotel_item_response).

-include("openapi.hrl").

-export([openapi_catalogs_hotel_item_response/0]).

-export([openapi_catalogs_hotel_item_response/1]).

-export_type([openapi_catalogs_hotel_item_response/0]).

-type openapi_catalogs_hotel_item_response() ::
  [ {'catalog_type', openapi_catalogs_type:openapi_catalogs_type() }
  | {'hotel_id', binary() }
  | {'pins', list(openapi_pin:openapi_pin()) }
  | {'attributes', openapi_catalogs_hotel_attributes:openapi_catalogs_hotel_attributes() }
  ].


openapi_catalogs_hotel_item_response() ->
    openapi_catalogs_hotel_item_response([]).

openapi_catalogs_hotel_item_response(Fields) ->
  Default = [ {'catalog_type', openapi_catalogs_type:openapi_catalogs_type() }
            , {'hotel_id', binary() }
            , {'pins', list(openapi_pin:openapi_pin()) }
            , {'attributes', openapi_catalogs_hotel_attributes:openapi_catalogs_hotel_attributes() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).
