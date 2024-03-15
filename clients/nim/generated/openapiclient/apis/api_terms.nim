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
import ../models/model_related_terms

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


proc termsRelatedList*(httpClient: HttpClient, terms: seq[string]): (Option[RelatedTerms], Response) =
  ## List related terms
  let query_for_api_call = encodeQuery([
    ("terms", $terms.join(",")), # List of input terms.
  ])

  let response = httpClient.get(basepath & "/terms/related" & "?" & query_for_api_call)
  constructResult[RelatedTerms](response)


proc termsSuggestedList*(httpClient: HttpClient, term: string, limit: int): (Option[seq[string]], Response) =
  ## List suggested terms
  let query_for_api_call = encodeQuery([
    ("term", $term), # Input term.
    ("limit", $limit), # Max suggested terms to return.
  ])

  let response = httpClient.get(basepath & "/terms/suggested" & "?" & query_for_api_call)
  constructResult[seq[string]](response)

