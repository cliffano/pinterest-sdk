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

import model_template_response_date_range_absolute_date_range
import model_template_response_date_range_dynamic_date_range
import model_template_response_date_range_relative_date_range

type TemplateResponseDateRange* = object
  ## 
  dynamicDateRange*: TemplateResponse_date_range_dynamic_date_range
  relativeDateRange*: TemplateResponse_date_range_relative_date_range
  absoluteDateRange*: TemplateResponse_date_range_absolute_date_range
