# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.12.0
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.4.0
#

require "big"
require "json"
require "time"

module OpenAPIClient
  # Request object for updating a hotel product group.
  module CatalogsVerticalProductGroupUpdateRequest
    class << self
      # List of class defined in oneOf (OpenAPI v3)
      def openapi_one_of
        [
          :'CatalogsHotelProductGroupUpdateRequest'
        ]
      end

      # Discriminator's property name (OpenAPI v3)
      def openapi_discriminator_name
        :'catalog_type'
      end

      # Discriminator's mapping (OpenAPI v3)
      def openapi_discriminator_mapping
        {
          :'HOTEL' => :'CatalogsHotelProductGroupUpdateRequest'
        }
      end

      # Builds the object
      # @param [Mixed] Data to be matched against the list of oneOf items
      # @return [Object] Returns the model or the data itself
      def build(data)
        discriminator_value = data[openapi_discriminator_name]
        return nil unless discriminator_value

        klass = openapi_discriminator_mapping[discriminator_value.to_sym]
        return nil unless klass

        OpenAPIClient.const_get(klass).build_from_hash(data)
      end
    end
  end

end
