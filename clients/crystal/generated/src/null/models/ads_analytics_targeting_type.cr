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
  class AdsAnalyticsTargetingType
    KEYWORD = "KEYWORD"
  
    APPTYPE = "APPTYPE"
  
    GENDER = "GENDER"
  
    LOCATION = "LOCATION"
  
    PLACEMENT = "PLACEMENT"
  
    COUNTRY = "COUNTRY"
  
    TARGETED_INTEREST = "TARGETED_INTEREST"
  
    PINNER_INTEREST = "PINNER_INTEREST"
  
    AUDIENCE_INCLUDE = "AUDIENCE_INCLUDE"
  
    AUDIENCE_EXCLUDE = "AUDIENCE_EXCLUDE"
  
    GEO = "GEO"
  
    AGE_BUCKET = "AGE_BUCKET"
  
    REGION = "REGION"
   
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
      when "KEYWORD"
        KEYWORD
      when "APPTYPE"
        APPTYPE
      when "GENDER"
        GENDER
      when "LOCATION"
        LOCATION
      when "PLACEMENT"
        PLACEMENT
      when "COUNTRY"
        COUNTRY
      when "TARGETED_INTEREST"
        TARGETED_INTEREST
      when "PINNER_INTEREST"
        PINNER_INTEREST
      when "AUDIENCE_INCLUDE"
        AUDIENCE_INCLUDE
      when "AUDIENCE_EXCLUDE"
        AUDIENCE_EXCLUDE
      when "GEO"
        GEO
      when "AGE_BUCKET"
        AGE_BUCKET
      when "REGION"
        REGION
      else
        raise "Invalid ENUM value #{value} for class #AdsAnalyticsTargetingType"
      end
    end
  end
end
