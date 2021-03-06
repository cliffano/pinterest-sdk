=begin
#Pinterest REST API

#Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.4.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for PinterestSdkClient::PinMediaSourceImageURL
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::PinMediaSourceImageURL do
  let(:instance) { PinterestSdkClient::PinMediaSourceImageURL.new }

  describe 'test an instance of PinMediaSourceImageURL' do
    it 'should create an instance of PinMediaSourceImageURL' do
      expect(instance).to be_instance_of(PinterestSdkClient::PinMediaSourceImageURL)
    end
  end
  describe 'test attribute "source_type"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["image_url"])
      # validator.allowable_values.each do |value|
      #   expect { instance.source_type = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "url"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
