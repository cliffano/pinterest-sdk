=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsProductGroupFiltersRequest < ApplicationRecord
  validates_presence_of :any_of
  validates_presence_of :all_of

  serialize :any_of, Array
  serialize :all_of, Array
end
