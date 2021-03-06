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

# Unit tests for PinterestSdkClient::OauthAccessTokenResponseCode
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe PinterestSdkClient::OauthAccessTokenResponseCode do
  let(:instance) { PinterestSdkClient::OauthAccessTokenResponseCode.new }

  describe 'test an instance of OauthAccessTokenResponseCode' do
    it 'should create an instance of OauthAccessTokenResponseCode' do
      expect(instance).to be_instance_of(PinterestSdkClient::OauthAccessTokenResponseCode)
    end
  end
  describe 'test attribute "refresh_token"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "refresh_token_expires_in"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
