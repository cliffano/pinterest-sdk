=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class CatalogsDeleteHotelItem < ApplicationRecord
  validates_presence_of :hotel_id
  validates_presence_of :operation

end