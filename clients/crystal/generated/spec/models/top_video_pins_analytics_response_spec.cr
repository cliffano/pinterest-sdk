# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.12.0
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.4.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::TopVideoPinsAnalyticsResponse
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenAPIClient::TopVideoPinsAnalyticsResponse do

  describe "test an instance of TopVideoPinsAnalyticsResponse" do
    it "should create an instance of TopVideoPinsAnalyticsResponse" do
      #instance = OpenAPIClient::TopVideoPinsAnalyticsResponse.new
      #expect(instance).to be_instance_of(OpenAPIClient::TopVideoPinsAnalyticsResponse)
    end
  end
  describe "test attribute 'date_availability'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'pins'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'sort_by'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
      # validator = Petstore::EnumTest::EnumAttributeValidator.new("String", ["SAVE", "IMPRESSION", "OUTBOUND_CLICK", "VIDEO_MRC_VIEW", "VIDEO_AVG_WATCH_TIME", "VIDEO_V50_WATCH_TIME", "QUARTILE_95_PERCENT_VIEW", "VIDEO_10S_VIEW", "VIDEO_START"])
      # validator.allowable_values.each do |value|
      #   expect { instance.sort_by = value }.not_to raise_error
      # end
    end
  end

end
