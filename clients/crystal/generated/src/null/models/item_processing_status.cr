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
  class ItemProcessingStatus
    SUCCESS = "SUCCESS"
  
    FAILURE = "FAILURE"
  
    PROCESSING = "PROCESSING"
   
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
      when "SUCCESS"
        SUCCESS
      when "FAILURE"
        FAILURE
      when "PROCESSING"
        PROCESSING
      else
        raise "Invalid ENUM value #{value} for class #ItemProcessingStatus"
      end
    end
  end
end
