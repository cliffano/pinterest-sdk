=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsProductGroupFilterKeys < ApplicationRecord
  validates_presence_of :min_price
  validates_presence_of :max_price
  validates_presence_of :currency
  validates_presence_of :item_id
  validates_presence_of :availability
  validates_presence_of :brand
  validates_presence_of :condition
  validates_presence_of :custom_label_0
  validates_presence_of :custom_label_1
  validates_presence_of :custom_label_2
  validates_presence_of :custom_label_3
  validates_presence_of :custom_label_4
  validates_presence_of :item_group_id
  validates_presence_of :gender
  validates_presence_of :product_type_4
  validates_presence_of :product_type_3
  validates_presence_of :product_type_2
  validates_presence_of :product_type_1
  validates_presence_of :product_type_0
  validates_presence_of :google_product_category_6
  validates_presence_of :google_product_category_5
  validates_presence_of :google_product_category_4
  validates_presence_of :google_product_category_3
  validates_presence_of :google_product_category_2
  validates_presence_of :google_product_category_1
  validates_presence_of :google_product_category_0

end