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

import model_order_line_paid_type
import model_order_line_status

type OrderLines* = object
  ## Order Line
  id*: string ## Order line ID.
  `type`*: string ## Always \"orderline\".
  adAccountId*: string ## Ad account ID.
  purchaseOrderId*: string ## Purchase order ID.
  startTime*: float ## Start time. Unix timestamp.
  endTime*: float ## End time. Unix timestamp.
  budget*: float ## Order line budget in micro currency.
  paidBudget*: float ## Order line paid budget in micro currency.
  status*: OrderLineStatus ## Order line status.
  name*: string ## Order line name.
  paidType*: OrderLinePaidType ## Order line paid type.
