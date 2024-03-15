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


type ReportStatus* {.pure.} = enum
  DOESNOTEXIST
  FINISHED
  INPROGRESS
  EXPIRED
  FAILED
  CANCELLED

type GetMMMReportResponseData* = object
  ## 
  reportStatus*: ReportStatus
  url*: string
  size*: float

func `%`*(v: ReportStatus): JsonNode =
  let str = case v:
    of ReportStatus.DOESNOTEXIST: "DOES_NOT_EXIST"
    of ReportStatus.FINISHED: "FINISHED"
    of ReportStatus.INPROGRESS: "IN_PROGRESS"
    of ReportStatus.EXPIRED: "EXPIRED"
    of ReportStatus.FAILED: "FAILED"
    of ReportStatus.CANCELLED: "CANCELLED"

  JsonNode(kind: JString, str: str)

func `$`*(v: ReportStatus): string =
  result = case v:
    of ReportStatus.DOESNOTEXIST: "DOES_NOT_EXIST"
    of ReportStatus.FINISHED: "FINISHED"
    of ReportStatus.INPROGRESS: "IN_PROGRESS"
    of ReportStatus.EXPIRED: "EXPIRED"
    of ReportStatus.FAILED: "FAILED"
    of ReportStatus.CANCELLED: "CANCELLED"
