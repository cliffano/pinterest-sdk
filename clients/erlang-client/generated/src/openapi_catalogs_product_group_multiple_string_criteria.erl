-module(openapi_catalogs_product_group_multiple_string_criteria).

-export([encode/1]).

-export_type([openapi_catalogs_product_group_multiple_string_criteria/0]).

-type openapi_catalogs_product_group_multiple_string_criteria() ::
    #{ 'values' := list(),
       'negated' => boolean()
     }.

encode(#{ 'values' := Values,
          'negated' := Negated
        }) ->
    #{ 'values' => Values,
       'negated' => Negated
     }.
