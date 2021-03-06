# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for ::AdResponse
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe ::AdResponse do

  describe "test an instance of AdResponse" do
    it "should create an instance of AdResponse" do
      #instance = ::AdResponse.new
      #expect(instance).to be_instance_of(::AdResponse)
    end
  end
  describe "test attribute 'ad_group_id'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'android_deep_link'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'carousel_android_deep_links'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'carousel_destination_urls'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'carousel_ios_deep_links'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'click_tracking_url'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'creative_type'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
      # validator = Petstore::EnumTest::EnumAttributeValidator.new("String", ["REGULAR", "VIDEO", "SHOPPING", "CAROUSEL", "MAX_VIDEO", "SHOP_THE_PIN", "STORY"])
      # validator.allowable_values.each do |value|
      #   expect { instance.creative_type = value }.not_to raise_error
      # end
    end
  end

  describe "test attribute 'destination_url'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'ios_deep_link'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'is_pin_deleted'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'is_removable'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'name'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'pin_id'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'status'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'tracking_urls'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'view_tracking_url'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'ad_account_id'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'campaign_id'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'collection_items_destination_url_template'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'created_time'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'id'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'rejected_reasons'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
      # validator = Petstore::EnumTest::EnumAttributeValidator.new("Array(String)", ["HASHTAGS", "PROMOTIONS_AND_PRICES", "TARGETING", "LANDING_PAGE", "CAPS_AND_SYMBOLS", "SHOCKING", "WEIGHT_LOSS", "PROHIBITED_PRODUCT", "AUTHENTICITY", "NUDITY", "CONFUSING_DESIGN", "URGENCY", "RATINGS", "APP", "ALCOHOL", "CONTESTS", "POLITICAL", "OTHER", "IMAGE", "NAR", "INCONSISTENT", "CLICKBAIT", "NO_DESCRIPTION", "LOW_QUALITY", "EXAGGERATED_CLAIMS", "PINTEREST_BRAND", "ALCOHOL_NO_SALE", "LANDING_PAGE_SPEED", "LANDING_PAGE_HARDWALL", "LANDING_PAGE_BROKEN", "LANDING_PAGE_QUALITY", "OUT_OF_STOCK", "IMAGE_LOW_QUALITY", "IMAGE_BUSY", "IMAGE_POORLY_EDITED", "IMAGE_BEFORE_AFTER", "UGC", "FAKE_BUTTONS", "WEAPONS", "SENSITIVE", "UNACCEPTABLE_BUSINESS", "SUSPICIOUS_CLAIMS", "PHARMA", "SUSPICIOUS_SUPPLEMENTS", "ILLEGAL_RECREATIONAL_DRUG", "LOW_QUALITY_LANDING_PAGE", "RESTRICTED_HEALTHCARE", "INCONSISTENT_LANG_FR"])
      # validator.allowable_values.each do |value|
      #   expect { instance.rejected_reasons = value }.not_to raise_error
      # end
    end
  end

  describe "test attribute 'rejection_labels'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'review_status'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
      # validator = Petstore::EnumTest::EnumAttributeValidator.new("String", ["OTHER", "PENDING", "REJECTED", "APPROVED"])
      # validator.allowable_values.each do |value|
      #   expect { instance.review_status = value }.not_to raise_error
      # end
    end
  end

  describe "test attribute '_type'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'updated_time'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  describe "test attribute 'summary_status'" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
