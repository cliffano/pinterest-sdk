{-
   Pinterest REST API
   Pinterest's REST API

   The version of the OpenAPI document: 5.12.0
   Contact: blah+oapicf@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.OrderLines exposing
    ( orderLinesGet
    , orderLinesList, Order_(..), orderVariants
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode


type Order_
    = Order_ASCENDING
    | Order_DESCENDING


orderVariants : List Order_
orderVariants =
    [ Order_ASCENDING
    , Order_DESCENDING
    ]


stringFromOrder_ : Order_ -> String
stringFromOrder_ model =
    case model of
        Order_ASCENDING ->
            "ASCENDING"

        Order_DESCENDING ->
            "DESCENDING"



{-| Get a specific existing order line associated with an ad account.
-}
orderLinesGet : String -> String -> Api.Request Api.Data.OrderLine
orderLinesGet adAccountId_path orderLineId_path =
    Api.request
        "GET"
        "/ad_accounts/{ad_account_id}/order_lines/{order_line_id}"
        [ ( "adAccountId", identity adAccountId_path ), ( "orderLineId", identity orderLineId_path ) ]
        []
        []
        Nothing
        Api.Data.orderLineDecoder


{-| List existing order lines associated with an ad account.
-}
orderLinesList : String -> Maybe Int -> Maybe Order_ -> Maybe String -> Api.Request Api.Data.OrderLinesList200Response
orderLinesList adAccountId_path pageSize_query order_query bookmark_query =
    Api.request
        "GET"
        "/ad_accounts/{ad_account_id}/order_lines"
        [ ( "adAccountId", identity adAccountId_path ) ]
        [ ( "page_size", Maybe.map String.fromInt pageSize_query ), ( "order", Maybe.map stringFromOrder_ order_query ), ( "bookmark", Maybe.map identity bookmark_query ) ]
        []
        Nothing
        Api.Data.orderLinesList200ResponseDecoder

