# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: pinterest-api@pinterest.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "json"
require "time"

module 
  class ConversionAttributionWindowDays
    N1 = "1"
  
    N7 = "7"
  
    N30 = "30"
  
    N60 = "60"
   
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
      when "1"
        N1
      when "7"
        N7
      when "30"
        N30
      when "60"
        N60
      else
        raise "Invalid ENUM value #{value} for class #ConversionAttributionWindowDays"
      end
    end
  end
end