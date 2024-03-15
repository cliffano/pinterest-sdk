=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsItemsFilters < ApplicationRecord
  validates_presence_of :catalog_type
  validates_presence_of :item_ids
  validates_presence_of :hotel_ids

  serialize :item_ids, Array
  serialize :hotel_ids, Array
end
