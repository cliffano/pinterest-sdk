=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsRetailBatchRequestItemsInner < ApplicationRecord
  validates_presence_of :item_id
  validates_presence_of :operation
  validates_presence_of :attributes

  serialize :update_mask, Array
end
