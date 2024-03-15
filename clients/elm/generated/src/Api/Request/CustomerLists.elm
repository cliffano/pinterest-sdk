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


module Api.Request.CustomerLists exposing
    ( customerListsCreate
    , customerListsGet
    , customerListsList, Order_(..), orderVariants
    , customerListsUpdate
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



{-| <p>Create a customer list from your records(hashed or plain-text email addresses, or hashed MAIDs or IDFAs).</p> <p>A customer list is one of the four types of Pinterest audiences: for more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a> or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.<p/> <p><b>Please review our <u><a href=\"https://help.pinterest.com/en/business/article/audience-targeting#section-13341\" target=\"_blank\">requirements</a></u> for what type of information is allowed when uploading a customer list.</b></p> <p>When you create a customer list, the system scans the list for existing Pinterest accounts; the list must include at least 100 Pinterest accounts. Your original list will be deleted when the matching process is complete. The filtered list – containing only the Pinterest accounts that were included in your starting list – is what will be used to create the audience.</p> <p>Note that once you have created your customer list, you must convert it into an audience (of the “CUSTOMER_LIST” type) using the <a href=\"#operation/create_audience_handler\">create audience endpoint</a> before it can be used.</p>
-}
customerListsCreate : String -> Api.Data.CustomerListRequest -> Api.Request Api.Data.CustomerList
customerListsCreate adAccountId_path customerListRequest_body =
    Api.request
        "POST"
        "/ad_accounts/{ad_account_id}/customer_lists"
        [ ( "adAccountId", identity adAccountId_path ) ]
        []
        []
        (Maybe.map Http.jsonBody (Just (Api.Data.encodeCustomerListRequest customerListRequest_body)))
        Api.Data.customerListDecoder


{-| Gets a specific customer list given the customer list ID.
-}
customerListsGet : String -> String -> Api.Request Api.Data.CustomerList
customerListsGet adAccountId_path customerListId_path =
    Api.request
        "GET"
        "/ad_accounts/{ad_account_id}/customer_lists/{customer_list_id}"
        [ ( "adAccountId", identity adAccountId_path ), ( "customerListId", identity customerListId_path ) ]
        []
        []
        Nothing
        Api.Data.customerListDecoder


{-| <p>Get a set of customer lists including id and name based on the filters provided.</p> <p>(Customer lists are a type of audience.) For more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>  or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.</p>
-}
customerListsList : String -> Maybe Int -> Maybe Order_ -> Maybe String -> Api.Request Api.Data.CustomerListsList200Response
customerListsList adAccountId_path pageSize_query order_query bookmark_query =
    Api.request
        "GET"
        "/ad_accounts/{ad_account_id}/customer_lists"
        [ ( "adAccountId", identity adAccountId_path ) ]
        [ ( "page_size", Maybe.map String.fromInt pageSize_query ), ( "order", Maybe.map stringFromOrder_ order_query ), ( "bookmark", Maybe.map identity bookmark_query ) ]
        []
        Nothing
        Api.Data.customerListsList200ResponseDecoder


{-| <p>Append or remove records to/from an existing customer list. (A customer list is one of the four types of Pinterest audiences.)</p> <p>When you add records to an existing customer list, the system scans the additions for existing Pinterest accounts; those are the records that will be added to your “CUSTOMER_LIST” audience. Your original list of records to add will be deleted when the matching process is complete.</p> <p>For more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a> or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.</p>
-}
customerListsUpdate : String -> String -> Api.Data.CustomerListUpdateRequest -> Api.Request Api.Data.CustomerList
customerListsUpdate adAccountId_path customerListId_path customerListUpdateRequest_body =
    Api.request
        "PATCH"
        "/ad_accounts/{ad_account_id}/customer_lists/{customer_list_id}"
        [ ( "adAccountId", identity adAccountId_path ), ( "customerListId", identity customerListId_path ) ]
        []
        []
        (Maybe.map Http.jsonBody (Just (Api.Data.encodeCustomerListUpdateRequest customerListUpdateRequest_body)))
        Api.Data.customerListDecoder

