=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsProductMetadata < ApplicationRecord
  validates_presence_of :item_id
  validates_presence_of :item_group_id
  validates_presence_of :availability
  validates_presence_of :price
  validates_presence_of :sale_price
  validates_presence_of :currency

end