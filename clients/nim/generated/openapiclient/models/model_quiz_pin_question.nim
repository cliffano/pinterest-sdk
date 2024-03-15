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

import model_quiz_pin_option

type QuizPinQuestion* = object
  ## A specific quiz inquiry.
  questionId*: float
  questionText*: string
  options*: seq[QuizPinOption]