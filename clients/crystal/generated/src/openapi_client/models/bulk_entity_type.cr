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
  class BulkEntityType
    CAMPAIGN = "CAMPAIGN"
  
    AD_GROUP = "AD_GROUP"
  
    PRODUCT_GROUP = "PRODUCT_GROUP"
  
    AD = "AD"
  
    KEYWORD = "KEYWORD"
   
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
      when "CAMPAIGN"
        CAMPAIGN
      when "AD_GROUP"
        AD_GROUP
      when "PRODUCT_GROUP"
        PRODUCT_GROUP
      when "AD"
        AD
      when "KEYWORD"
        KEYWORD
      else
        raise "Invalid ENUM value #{value} for class #BulkEntityType"
      end
    end
  end
end