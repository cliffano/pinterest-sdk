-module(openapi_catalogs_vertical_product_group).

-include("openapi.hrl").

-export([openapi_catalogs_vertical_product_group/0]).

-export([openapi_catalogs_vertical_product_group/1]).

-export_type([openapi_catalogs_vertical_product_group/0]).

-type openapi_catalogs_vertical_product_group() ::
  [ {'catalog_type', binary() }
  | {'id', binary() }
  | {'name', binary() }
  | {'description', binary() }
  | {'filters', openapi_catalogs_product_group_filters:openapi_catalogs_product_group_filters() }
  | {'created_at', integer() }
  | {'updated_at', integer() }
  | {'catalog_id', binary() }
  | {'is_featured', boolean() }
  | {'type', openapi_catalogs_product_group_type:openapi_catalogs_product_group_type() }
  | {'status', openapi_catalogs_product_group_status:openapi_catalogs_product_group_status() }
  | {'feed_id', binary() }
  ].


openapi_catalogs_vertical_product_group() ->
    openapi_catalogs_vertical_product_group([]).

openapi_catalogs_vertical_product_group(Fields) ->
  Default = [ {'catalog_type', elements([<<"RETAIL">>]) }
            , {'id', binary() }
            , {'name', binary() }
            , {'description', binary() }
            , {'filters', openapi_catalogs_product_group_filters:openapi_catalogs_product_group_filters() }
            , {'created_at', integer() }
            , {'updated_at', integer() }
            , {'catalog_id', binary() }
            , {'is_featured', boolean() }
            , {'type', openapi_catalogs_product_group_type:openapi_catalogs_product_group_type() }
            , {'status', openapi_catalogs_product_group_status:openapi_catalogs_product_group_status() }
            , {'feed_id', elements([<<"">>]) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

