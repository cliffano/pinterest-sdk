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

# Unit tests for PinterestSdkClient::OrderLinesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'OrderLinesApi' do
  before do
    # run before each test
    @api_instance = PinterestSdkClient::OrderLinesApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of OrderLinesApi' do
    it 'should create an instance of OrderLinesApi' do
      expect(@api_instance).to be_instance_of(PinterestSdkClient::OrderLinesApi)
    end
  end

  # unit tests for order_lines_get
  # Get order line
  # Get a specific existing order line associated with an ad account.
  # @param ad_account_id Unique identifier of an ad account.
  # @param order_line_id Unique identifier of an order line.
  # @param [Hash] opts the optional parameters
  # @return [OrderLine]
  describe 'order_lines_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for order_lines_list
  # Get order lines
  # List existing order lines associated with an ad account.
  # @param ad_account_id Unique identifier of an ad account.
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @option opts [String] :order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @return [OrderLinesList200Response]
  describe 'order_lines_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end