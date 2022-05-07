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
  class PlacementGroupType
    ALL = "ALL"
  
    SEARCH = "SEARCH"
  
    BROWSE = "BROWSE"
  
    OTHER = "OTHER"
   
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
      when "ALL"
        ALL
      when "SEARCH"
        SEARCH
      when "BROWSE"
        BROWSE
      when "OTHER"
        OTHER
      else
        raise "Invalid ENUM value #{value} for class #PlacementGroupType"
      end
    end
  end
end
