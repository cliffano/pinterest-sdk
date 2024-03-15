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

import model_currency

type OrderLineType* {.pure.} = enum
  BUDGET
  PERPETUALS

type SSIOCreateInsertionOrderRequest* = object
  ## 
  startDate*: string ## Starting date of time period. Format: YYYY-MM-DD
  endDate*: string ## End date of time period. Format: YYYY-MM-DD
  poNumber*: string ## The po number
  budgetAmount*: float ## If Budget order line, the budget amount.
  billingContactFirstname*: string ## The billing contact first name
  billingContactLastname*: string ## The billing contact last name
  billingContactEmail*: string ## The billing contact email
  mediaContactFirstname*: string ## The media contact first name
  mediaContactLastname*: string ## The media contact last name
  mediaContactEmail*: string ## The media contact email
  agencyLink*: string ## URL link for agency
  userEmail*: string ## The email of user submitting the insertion order
  acceptedTermsTime*: int ## The UTC timestamp (to the nearest sec) of when terms were accepted
  pmpId*: string ## The pmp id
  orderName*: string ## The order name
  orderLineType*: OrderLineType ## Type can be Budget or Perpetual
  acceptedTermsId*: string ## The SFDC id for the terms
  billtoCompanyId*: string ## The bill-to company id
  billtoBusinessAddressId*: string ## The bill-to business address id
  billtoBillingAddressId*: string ## The bill-to billing address id
  estimatedMonthlySpend*: float ## If Ongoing (perpetual) order line, the estimated monthly spend
  currencyInfo*: Currency

func `%`*(v: OrderLineType): JsonNode =
  let str = case v:
    of OrderLineType.BUDGET: "BUDGET"
    of OrderLineType.PERPETUALS: "PERPETUALS"

  JsonNode(kind: JString, str: str)

func `$`*(v: OrderLineType): string =
  result = case v:
    of OrderLineType.BUDGET: "BUDGET"
    of OrderLineType.PERPETUALS: "PERPETUALS"
