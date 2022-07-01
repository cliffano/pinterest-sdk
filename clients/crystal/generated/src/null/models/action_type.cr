# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "json"
require "time"

module 
  class ActionType
    CLICKTHROUGH = "CLICKTHROUGH"
  
    IMPRESSION = "IMPRESSION"
  
    VIDEO_V_50_MRC = "VIDEO_V_50_MRC"
  
    BILLABLE_ENGAGEMENT = "BILLABLE_ENGAGEMENT"
   
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
      when "CLICKTHROUGH"
        CLICKTHROUGH
      when "IMPRESSION"
        IMPRESSION
      when "VIDEO_V_50_MRC"
        VIDEO_V_50_MRC
      when "BILLABLE_ENGAGEMENT"
        BILLABLE_ENGAGEMENT
      else
        raise "Invalid ENUM value #{value} for class #ActionType"
      end
    end
  end
end
