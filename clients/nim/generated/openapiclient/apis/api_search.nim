#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by: https://openapi-generator.tech
#

import httpclient
import json
import logging
import marshal
import options
import strformat
import strutils
import tables
import typetraits
import uri

import ../models/model_error
import ../models/model_pins_list_200_response
import ../models/model_search_partner_pins_200_response
import ../models/model_search_user_boards_get_200_response

const basepath = "https://api.pinterest.com/v5"

template constructResult[T](response: Response): untyped =
  if response.code in {Http200, Http201, Http202, Http204, Http206}:
    try:
      when name(stripGenericParams(T.typedesc).typedesc) == name(Table):
        (some(json.to(parseJson(response.body), T.typedesc)), response)
      else:
        (some(marshal.to[T](response.body)), response)
    except JsonParsingError:
      # The server returned a malformed response though the response code is 2XX
      # TODO: need better error handling
      error("JsonParsingError")
      (none(T.typedesc), response)
  else:
    (none(T.typedesc), response)


proc searchPartnerPins*(httpClient: HttpClient, term: string, countryCode: string, bookmark: string, locale: string, limit: int): (Option[search_partner_pins_200_response], Response) =
  ## Search pins by a given search term
  let query_for_api_call = encodeQuery([
    ("term", $term), # Search term to look up pins.
    ("country_code", $countryCode), # Two letter country code (ISO 3166-1 alpha-2)
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("locale", $locale), # Search locale.
    ("limit", $limit), # Max search result size
  ])

  let response = httpClient.get(basepath & "/search/partner/pins" & "?" & query_for_api_call)
  constructResult[search_partner_pins_200_response](response)


proc searchUserBoardsGet*(httpClient: HttpClient, adAccountId: string, bookmark: string, pageSize: int, query: string): (Option[search_user_boards_get_200_response], Response) =
  ## Search user's boards
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("query", $query), # Search query. Can contain pin description keywords or comma-separated pin IDs.
  ])

  let response = httpClient.get(basepath & "/search/boards" & "?" & query_for_api_call)
  constructResult[search_user_boards_get_200_response](response)


proc searchUserPinsList*(httpClient: HttpClient, query: string, adAccountId: string, bookmark: string): (Option[pins_list_200_response], Response) =
  ## Search user's Pins
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
    ("query", $query), # Search query. Can contain pin description keywords or comma-separated pin IDs.
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
  ])

  let response = httpClient.get(basepath & "/search/pins" & "?" & query_for_api_call)
  constructResult[pins_list_200_response](response)
