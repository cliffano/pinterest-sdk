=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: blah@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsProductGroupPricingCriteria < ApplicationRecord
  validates_presence_of :inclusion
  validates_presence_of :values
  validates_presence_of :negated

end
