-module(openapi_ad_group_common_tracking_urls).

-include("openapi.hrl").

-export([openapi_ad_group_common_tracking_urls/0]).

-export([openapi_ad_group_common_tracking_urls/1]).

-export_type([openapi_ad_group_common_tracking_urls/0]).

-type openapi_ad_group_common_tracking_urls() ::
  [ {'impression', list(binary()) }
  | {'click', list(binary()) }
  | {'engagement', list(binary()) }
  | {'buyable_button', list(binary()) }
  | {'audience_verification', list(binary()) }
  ].


openapi_ad_group_common_tracking_urls() ->
    openapi_ad_group_common_tracking_urls([]).

openapi_ad_group_common_tracking_urls(Fields) ->
  Default = [ {'impression', list(binary()) }
            , {'click', list(binary()) }
            , {'engagement', list(binary()) }
            , {'buyable_button', list(binary()) }
            , {'audience_verification', list(binary()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

