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

# Unit tests for PinterestSdkClient::IntegrationsApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'IntegrationsApi' do
  before do
    # run before each test
    @api_instance = PinterestSdkClient::IntegrationsApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of IntegrationsApi' do
    it 'should create an instance of IntegrationsApi' do
      expect(@api_instance).to be_instance_of(PinterestSdkClient::IntegrationsApi)
    end
  end

  # unit tests for integrations_commerce_del
  # Delete commerce integration
  # Delete commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param external_business_id External business ID for the integration.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'integrations_commerce_del test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_commerce_get
  # Get commerce integration
  # Get commerce integration metadata associated with the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param external_business_id External business ID for the integration.
  # @param [Hash] opts the optional parameters
  # @return [IntegrationMetadata]
  describe 'integrations_commerce_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_commerce_patch
  # Update commerce integration
  # Update commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param external_business_id External business ID for the integration.
  # @param [Hash] opts the optional parameters
  # @option opts [IntegrationRequestPatch] :integration_request_patch Parameters to get create/update the Integration Metadata
  # @return [IntegrationMetadata]
  describe 'integrations_commerce_patch test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_commerce_post
  # Create commerce integration
  # Create commerce integration metadata to link an external business ID with a Pinterest merchant &amp; ad account. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param [Hash] opts the optional parameters
  # @option opts [IntegrationRequest] :integration_request Parameters to get create/update the Integration Metadata
  # @return [IntegrationMetadata]
  describe 'integrations_commerce_post test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_get_by_id
  # Get integration metadata
  # Get integration metadata by ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param id Integration ID.
  # @param [Hash] opts the optional parameters
  # @return [IntegrationRecord]
  describe 'integrations_get_by_id test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_get_list
  # Get integration metadata list
  # Get integration metadata list. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @return [IntegrationsGetList200Response]
  describe 'integrations_get_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for integrations_logs_post
  # Receives batched logs from integration applications.
  # This endpoint receives batched logs from integration applications on partner platforms. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param integration_logs_request Ingest log information from external integration application.
  # @param [Hash] opts the optional parameters
  # @return [IntegrationLogsSuccessResponse]
  describe 'integrations_logs_post test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
