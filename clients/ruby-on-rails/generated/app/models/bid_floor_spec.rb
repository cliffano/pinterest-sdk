=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class BidFloorSpec < ApplicationRecord
  validates_presence_of :currency
  validates_presence_of :billable_event

  serialize :countries, Array
end