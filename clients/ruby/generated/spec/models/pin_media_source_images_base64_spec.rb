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

# Unit tests for PinterestSdkClient::PinMediaSourceImagesBase64
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::PinMediaSourceImagesBase64 do
  let(:instance) { PinterestSdkClient::PinMediaSourceImagesBase64.new }

  describe 'test an instance of PinMediaSourceImagesBase64' do
    it 'should create an instance of PinMediaSourceImagesBase64' do
      # uncomment below to test the instance creation
      #expect(instance).to be_instance_of(PinterestSdkClient::PinMediaSourceImagesBase64)
    end
  end

  describe 'test attribute "source_type"' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["multiple_image_base64"])
      # validator.allowable_values.each do |value|
      #   expect { instance.source_type = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "items"' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  describe 'test attribute "index"' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
