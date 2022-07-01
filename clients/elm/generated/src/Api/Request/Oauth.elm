{-
   Pinterest REST API
   Pinterest's REST API

   The version of the OpenAPI document: 5.3.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Oauth exposing
    ( oauthToken, GrantType(..), grantTypeVariants
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode


type GrantType
    = GrantTypeAuthorizationCode
    | GrantTypeRefreshToken


grantTypeVariants : List GrantType
grantTypeVariants =
    [ GrantTypeAuthorizationCode
    , GrantTypeRefreshToken
    ]


stringFromGrantType : GrantType -> String
stringFromGrantType model =
    case model of
        GrantTypeAuthorizationCode ->
            "authorization_code"

        GrantTypeRefreshToken ->
            "refresh_token"





{-| Generate an OAuth access token by using an authorization code or a refresh token.  See <a href='/docs/api/v5/#tag/Authentication'>Authentication</a> for more.
-}
oauthToken : GrantType -> Api.Request Api.Data.OauthAccessTokenResponse
oauthToken grantType =
    Api.request
        "POST"
        "/oauth/token"
        []
        []
        []
        Nothing
        Api.Data.oauthAccessTokenResponseDecoder
