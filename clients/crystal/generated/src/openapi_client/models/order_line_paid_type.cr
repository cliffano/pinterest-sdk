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
  class OrderLinePaidType
    PAID = "PAID"
  
    BONUS = "BONUS"
  
    MAKE_GOOD = "MAKE_GOOD"
  
    TEST = "TEST"
  
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
      when "PAID"
        PAID
      when "BONUS"
        BONUS
      when "MAKE_GOOD"
        MAKE_GOOD
      when "TEST"
        TEST
      when "null"
        NULL
      else
        raise "Invalid ENUM value #{value} for class #OrderLinePaidType"
      end
    end
  end
end
