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

# Unit tests for PinterestSdkClient::BoardUpdate
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::BoardUpdate do
  let(:instance) { PinterestSdkClient::BoardUpdate.new }

  describe 'test an instance of BoardUpdate' do
    it 'should create an instance of BoardUpdate' do
      expect(instance).to be_instance_of(PinterestSdkClient::BoardUpdate)
    end
  end
  describe 'test attribute "name"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "description"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "privacy"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["PUBLIC", "SECRET"])
      # validator.allowable_values.each do |value|
      #   expect { instance.privacy = value }.not_to raise_error
      # end
    end
  end

end
