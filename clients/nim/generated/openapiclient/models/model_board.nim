#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_board_owner

type Privacy* {.pure.} = enum
  PUBLIC
  PROTECTED
  SECRET

type Board* = object
  ## Board
  id*: string
  name*: string
  description*: string
  owner*: BoardOwner
  privacy*: Privacy ## Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>

func `%`*(v: Privacy): JsonNode =
  let str = case v:
    of Privacy.PUBLIC: "PUBLIC"
    of Privacy.PROTECTED: "PROTECTED"
    of Privacy.SECRET: "SECRET"

  JsonNode(kind: JString, str: str)

func `$`*(v: Privacy): string =
  result = case v:
    of Privacy.PUBLIC: "PUBLIC"
    of Privacy.PROTECTED: "PROTECTED"
    of Privacy.SECRET: "SECRET"
