=begin
#Pinterest REST API

#Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech
Generator version: 7.4.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for PinterestSdkClient::UserWebsiteVerifyRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::UserWebsiteVerifyRequest do
  let(:instance) { PinterestSdkClient::UserWebsiteVerifyRequest.new }

  describe 'test an instance of UserWebsiteVerifyRequest' do
    it 'should create an instance of UserWebsiteVerifyRequest' do
      # uncomment below to test the instance creation
      #expect(instance).to be_instance_of(PinterestSdkClient::UserWebsiteVerifyRequest)
    end
  end

  describe 'test attribute "website"' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  describe 'test attribute "verification_method"' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["FILENAME", "METATAG", "DNSTXT"])
      # validator.allowable_values.each do |value|
      #   expect { instance.verification_method = value }.not_to raise_error
      # end
    end
  end

end