#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
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

import ../models/model_board
import ../models/model_board_section
import ../models/model_board_update
import ../models/model_error
import ../models/model_paginated
import ../models/model_object

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


proc boardSectionsCreate*(httpClient: HttpClient, boardId: string, boardSection: BoardSection): (Option[BoardSection], Response) =
  ## Create board section
  httpClient.headers["Content-Type"] = "application/json"

  let response = httpClient.post(basepath & fmt"/boards/{board_id}/sections", $(%boardSection))
  constructResult[BoardSection](response)


proc boardSectionsDelete*(httpClient: HttpClient, boardId: string, sectionId: string): Response =
  ## Delete board section
  httpClient.delete(basepath & fmt"/boards/{board_id}/sections/{section_id}")


proc boardSectionsList*(httpClient: HttpClient, boardId: string, bookmark: string, pageSize: int): (Option[Paginated], Response) =
  ## List board sections
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
  ])

  let response = httpClient.get(basepath & fmt"/boards/{board_id}/sections" & "?" & query_for_api_call)
  constructResult[Paginated](response)


proc boardSectionsListPins*(httpClient: HttpClient, boardId: string, sectionId: string, bookmark: string, pageSize: int): (Option[Paginated], Response) =
  ## List Pins on board section
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
  ])

  let response = httpClient.get(basepath & fmt"/boards/{board_id}/sections/{section_id}/pins" & "?" & query_for_api_call)
  constructResult[Paginated](response)


proc boardSectionsUpdate*(httpClient: HttpClient, boardId: string, sectionId: string, boardSection: BoardSection): (Option[BoardSection], Response) =
  ## Update board section
  httpClient.headers["Content-Type"] = "application/json"

  let response = httpClient.patch(basepath & fmt"/boards/{board_id}/sections/{section_id}", $(%boardSection))
  constructResult[BoardSection](response)


proc boardsCreate*(httpClient: HttpClient, board: Board): (Option[Board], Response) =
  ## Create board
  httpClient.headers["Content-Type"] = "application/json"

  let response = httpClient.post(basepath & "/boards", $(%board))
  constructResult[Board](response)


proc boardsDelete*(httpClient: HttpClient, boardId: string): Response =
  ## Delete board
  httpClient.delete(basepath & fmt"/boards/{board_id}")


proc boardsGet*(httpClient: HttpClient, boardId: string): (Option[Board], Response) =
  ## Get board

  let response = httpClient.get(basepath & fmt"/boards/{board_id}")
  constructResult[Board](response)


proc boardsList*(httpClient: HttpClient, bookmark: string, pageSize: int, privacy: string): (Option[Paginated], Response) =
  ## List boards
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
    ("privacy", $privacy), # Privacy setting for a board.
  ])

  let response = httpClient.get(basepath & "/boards" & "?" & query_for_api_call)
  constructResult[Paginated](response)


proc boardsListPins*(httpClient: HttpClient, boardId: string, bookmark: string, pageSize: int): (Option[Paginated], Response) =
  ## List Pins on board
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
  ])

  let response = httpClient.get(basepath & fmt"/boards/{board_id}/pins" & "?" & query_for_api_call)
  constructResult[Paginated](response)


proc boardsUpdate*(httpClient: HttpClient, boardId: string, boardUpdate: BoardUpdate): (Option[Board], Response) =
  ## Update board
  httpClient.headers["Content-Type"] = "application/json"

  let response = httpClient.patch(basepath & fmt"/boards/{board_id}", $(%boardUpdate))
  constructResult[Board](response)

