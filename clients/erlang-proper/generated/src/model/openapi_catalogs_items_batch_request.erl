-module(openapi_catalogs_items_batch_request).

-include("openapi.hrl").

-export([openapi_catalogs_items_batch_request/0]).

-export([openapi_catalogs_items_batch_request/1]).

-export_type([openapi_catalogs_items_batch_request/0]).

-type openapi_catalogs_items_batch_request() ::
  [ {'country', openapi_country:openapi_country() }
  | {'language', openapi_language:openapi_language() }
  | {'operation', openapi_batch_operation:openapi_batch_operation() }
  | {'items', list(openapi_item_delete_batch_record:openapi_item_delete_batch_record()) }
  ].


openapi_catalogs_items_batch_request() ->
    openapi_catalogs_items_batch_request([]).

openapi_catalogs_items_batch_request(Fields) ->
  Default = [ {'country', openapi_country:openapi_country() }
            , {'language', openapi_language:openapi_language() }
            , {'operation', openapi_batch_operation:openapi_batch_operation() }
            , {'items', list(openapi_item_delete_batch_record:openapi_item_delete_batch_record()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

