#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_oauth_access_token_response

type ResponseType* {.pure.} = enum
  AuthorizationCode
  RefreshToken

type OauthAccessTokenResponseRefresh* = object
  ## A successful OAuth access token response for the refresh token flow.
  responseType*: ResponseType
  accessToken*: string
  tokenType*: string
  expiresIn*: int
  scope*: string

func `%`*(v: ResponseType): JsonNode =
  let str = case v:
    of ResponseType.AuthorizationCode: "authorization_code"
    of ResponseType.RefreshToken: "refresh_token"

  JsonNode(kind: JString, str: str)

func `$`*(v: ResponseType): string =
  result = case v:
    of ResponseType.AuthorizationCode: "authorization_code"
    of ResponseType.RefreshToken: "refresh_token"
