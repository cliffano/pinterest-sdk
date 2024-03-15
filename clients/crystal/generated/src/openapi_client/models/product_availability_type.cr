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
  class ProductAvailabilityType
    IN_STOCK = "IN_STOCK"
  
    OUT_OF_STOCK = "OUT_OF_STOCK"
  
    PREORDER = "PREORDER"
  
    NULL = "null"
   
    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      case value
      when "IN_STOCK"
        IN_STOCK
      when "OUT_OF_STOCK"
        OUT_OF_STOCK
      when "PREORDER"
        PREORDER
      when "null"
        NULL
      else
        raise "Invalid ENUM value #{value} for class #ProductAvailabilityType"
      end
    end
  end
end
