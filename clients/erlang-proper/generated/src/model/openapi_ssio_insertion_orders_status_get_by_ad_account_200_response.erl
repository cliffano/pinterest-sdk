-module(openapi_ssio_insertion_orders_status_get_by_ad_account_200_response).

-include("openapi.hrl").

-export([openapi_ssio_insertion_orders_status_get_by_ad_account_200_response/0]).

-export([openapi_ssio_insertion_orders_status_get_by_ad_account_200_response/1]).

-export_type([openapi_ssio_insertion_orders_status_get_by_ad_account_200_response/0]).

-type openapi_ssio_insertion_orders_status_get_by_ad_account_200_response() ::
  [ {'items', list(openapi_s_sio_insertion_order_status:openapi_s_sio_insertion_order_status()) }
  | {'bookmark', binary() }
  ].


openapi_ssio_insertion_orders_status_get_by_ad_account_200_response() ->
    openapi_ssio_insertion_orders_status_get_by_ad_account_200_response([]).

openapi_ssio_insertion_orders_status_get_by_ad_account_200_response(Fields) ->
  Default = [ {'items', list(openapi_s_sio_insertion_order_status:openapi_s_sio_insertion_order_status()) }
            , {'bookmark', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

