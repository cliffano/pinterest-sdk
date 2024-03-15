-module(openapi_google_product_category2_filter).

-include("openapi.hrl").

-export([openapi_google_product_category2_filter/0]).

-export([openapi_google_product_category2_filter/1]).

-export_type([openapi_google_product_category2_filter/0]).

-type openapi_google_product_category2_filter() ::
  [ {'GOOGLE_PRODUCT_CATEGORY_2', openapi_catalogs_product_group_multiple_string_list_criteria:openapi_catalogs_product_group_multiple_string_list_criteria() }
  ].


openapi_google_product_category2_filter() ->
    openapi_google_product_category2_filter([]).

openapi_google_product_category2_filter(Fields) ->
  Default = [ {'GOOGLE_PRODUCT_CATEGORY_2', openapi_catalogs_product_group_multiple_string_list_criteria:openapi_catalogs_product_group_multiple_string_list_criteria() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

