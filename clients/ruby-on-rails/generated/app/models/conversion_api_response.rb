=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class ConversionApiResponse < ApplicationRecord
  validates_presence_of :num_events_received
  validates_presence_of :num_events_processed
  validates_presence_of :events

  serialize :events, Array
end
