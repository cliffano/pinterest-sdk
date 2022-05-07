{-
   Pinterest REST API
   Pinterest's REST API

   The version of the OpenAPI document: 5.3.0
   Contact: pinterest-api@pinterest.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.UserAccount exposing
    ( userAccountAnalytics, FromClaimedContent(..), fromClaimedContentVariants, PinFormat(..), pinFormatVariants, AppTypes(..), appTypesVariants, MetricTypes(..), metricTypesVariants, SplitField(..), splitFieldVariants
    , userAccountGet
    )

import Api
import Api.Data
import Api.Time exposing (Posix)
import Dict
import Http
import Json.Decode
import Json.Encode


type FromClaimedContent
    = FromClaimedContentOTHER
    | FromClaimedContentCLAIMED
    | FromClaimedContentBOTH


fromClaimedContentVariants : List FromClaimedContent
fromClaimedContentVariants =
    [ FromClaimedContentOTHER
    , FromClaimedContentCLAIMED
    , FromClaimedContentBOTH
    ]


stringFromFromClaimedContent : FromClaimedContent -> String
stringFromFromClaimedContent model =
    case model of
        FromClaimedContentOTHER ->
            "OTHER"

        FromClaimedContentCLAIMED ->
            "CLAIMED"

        FromClaimedContentBOTH ->
            "BOTH"




type PinFormat
    = PinFormatALL
    | PinFormatPRODUCT
    | PinFormatREGULAR
    | PinFormatVIDEO


pinFormatVariants : List PinFormat
pinFormatVariants =
    [ PinFormatALL
    , PinFormatPRODUCT
    , PinFormatREGULAR
    , PinFormatVIDEO
    ]


stringFromPinFormat : PinFormat -> String
stringFromPinFormat model =
    case model of
        PinFormatALL ->
            "ALL"

        PinFormatPRODUCT ->
            "PRODUCT"

        PinFormatREGULAR ->
            "REGULAR"

        PinFormatVIDEO ->
            "VIDEO"




type AppTypes
    = AppTypesALL
    | AppTypesMOBILE
    | AppTypesTABLET
    | AppTypesWEB


appTypesVariants : List AppTypes
appTypesVariants =
    [ AppTypesALL
    , AppTypesMOBILE
    , AppTypesTABLET
    , AppTypesWEB
    ]


stringFromAppTypes : AppTypes -> String
stringFromAppTypes model =
    case model of
        AppTypesALL ->
            "ALL"

        AppTypesMOBILE ->
            "MOBILE"

        AppTypesTABLET ->
            "TABLET"

        AppTypesWEB ->
            "WEB"




type MetricTypes
    = MetricTypesENGAGEMENT
    | MetricTypesENGAGEMENTRATE
    | MetricTypesIMPRESSION
    | MetricTypesOUTBOUNDCLICK
    | MetricTypesOUTBOUNDCLICKRATE
    | MetricTypesPINCLICK
    | MetricTypesPINCLICKRATE
    | MetricTypesSAVE
    | MetricTypesSAVERATE


metricTypesVariants : List MetricTypes
metricTypesVariants =
    [ MetricTypesENGAGEMENT
    , MetricTypesENGAGEMENTRATE
    , MetricTypesIMPRESSION
    , MetricTypesOUTBOUNDCLICK
    , MetricTypesOUTBOUNDCLICKRATE
    , MetricTypesPINCLICK
    , MetricTypesPINCLICKRATE
    , MetricTypesSAVE
    , MetricTypesSAVERATE
    ]


stringFromMetricTypes : MetricTypes -> String
stringFromMetricTypes model =
    case model of
        MetricTypesENGAGEMENT ->
            "ENGAGEMENT"

        MetricTypesENGAGEMENTRATE ->
            "ENGAGEMENT_RATE"

        MetricTypesIMPRESSION ->
            "IMPRESSION"

        MetricTypesOUTBOUNDCLICK ->
            "OUTBOUND_CLICK"

        MetricTypesOUTBOUNDCLICKRATE ->
            "OUTBOUND_CLICK_RATE"

        MetricTypesPINCLICK ->
            "PIN_CLICK"

        MetricTypesPINCLICKRATE ->
            "PIN_CLICK_RATE"

        MetricTypesSAVE ->
            "SAVE"

        MetricTypesSAVERATE ->
            "SAVE_RATE"




type SplitField
    = SplitFieldNOSPLIT
    | SplitFieldAPPTYPE
    | SplitFieldOWNEDCONTENT
    | SplitFieldPINFORMAT


splitFieldVariants : List SplitField
splitFieldVariants =
    [ SplitFieldNOSPLIT
    , SplitFieldAPPTYPE
    , SplitFieldOWNEDCONTENT
    , SplitFieldPINFORMAT
    ]


stringFromSplitField : SplitField -> String
stringFromSplitField model =
    case model of
        SplitFieldNOSPLIT ->
            "NO_SPLIT"

        SplitFieldAPPTYPE ->
            "APP_TYPE"

        SplitFieldOWNEDCONTENT ->
            "OWNED_CONTENT"

        SplitFieldPINFORMAT ->
            "PIN_FORMAT"





{-| Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
-}
userAccountAnalytics : Posix -> Posix -> Maybe FromClaimedContent -> Maybe PinFormat -> Maybe AppTypes -> Maybe List MetricTypes -> Maybe SplitField -> Maybe String -> Api.Request (Dict.Dict String Api.Data.AnalyticsMetricsResponse)
userAccountAnalytics startDate_query endDate_query fromClaimedContent_query pinFormat_query appTypes_query metricTypes_query splitField_query adAccountId_query =
    Api.request
        "GET"
        "/user_account/analytics"
        []
        [ ( "start_date", Just <| Api.Time.dateToString startDate_query ), ( "end_date", Just <| Api.Time.dateToString endDate_query ), ( "from_claimed_content", Maybe.map stringFromFromClaimedContent fromClaimedContent_query ), ( "pin_format", Maybe.map stringFromPinFormat pinFormat_query ), ( "app_types", Maybe.map stringFromAppTypes appTypes_query ), ( "metric_types", Maybe.map String.join "," << List.map stringFromMetricTypes metricTypes_query ), ( "split_field", Maybe.map stringFromSplitField splitField_query ), ( "ad_account_id", Maybe.map identity adAccountId_query ) ]
        []
        Nothing
        (Json.Decode.dict Api.Data.analyticsMetricsResponseDecoder)



{-| Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.
-}
userAccountGet : Maybe String -> Api.Request Api.Data.Account
userAccountGet adAccountId_query =
    Api.request
        "GET"
        "/user_account"
        []
        [ ( "ad_account_id", Maybe.map identity adAccountId_query ) ]
        []
        Nothing
        Api.Data.accountDecoder
