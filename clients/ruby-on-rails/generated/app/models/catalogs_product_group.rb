=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsProductGroup < ApplicationRecord
  validates_presence_of :id
  validates_presence_of :filters
  validates_presence_of :feed_id

end