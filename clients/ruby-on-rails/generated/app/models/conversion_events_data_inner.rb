=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class ConversionEventsDataInner < ApplicationRecord
  validates_presence_of :event_name
  validates_presence_of :action_source
  validates_presence_of :event_time
  validates_presence_of :event_id
  validates_presence_of :user_data

end
