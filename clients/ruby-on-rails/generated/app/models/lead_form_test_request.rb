=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class LeadFormTestRequest < ApplicationRecord
  validates_presence_of :answers

  serialize :answers, Array
end
