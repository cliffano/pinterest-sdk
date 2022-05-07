=begin
#Pinterest REST API

#Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: pinterest-api@pinterest.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.4.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for PinterestSdkClient::CatalogsFeedIngestionErrors
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::CatalogsFeedIngestionErrors do
  let(:instance) { PinterestSdkClient::CatalogsFeedIngestionErrors.new }

  describe 'test an instance of CatalogsFeedIngestionErrors' do
    it 'should create an instance of CatalogsFeedIngestionErrors' do
      expect(instance).to be_instance_of(PinterestSdkClient::CatalogsFeedIngestionErrors)
    end
  end
  describe 'test attribute "image_download_error"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "image_download_connection_timeout"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "image_format_unrecognize"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "line_level_internal_error"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "large_product_count_decrease"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('Integer', [1])
      # validator.allowable_values.each do |value|
      #   expect { instance.large_product_count_decrease = value }.not_to raise_error
      # end
    end
  end

end
