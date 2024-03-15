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

# Unit tests for PinterestSdkClient::BoardsApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BoardsApi' do
  before do
    # run before each test
    @api_instance = PinterestSdkClient::BoardsApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BoardsApi' do
    it 'should create an instance of BoardsApi' do
      expect(@api_instance).to be_instance_of(PinterestSdkClient::BoardsApi)
    end
  end

  # unit tests for board_sections_create
  # Create board section
  # Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param board_section Create a board section.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [BoardSection]
  describe 'board_sections_create test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for board_sections_delete
  # Delete board section
  # Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param section_id Unique identifier of a board section.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [nil]
  describe 'board_sections_delete test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for board_sections_list
  # List board sections
  # Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @return [BoardSectionsList200Response]
  describe 'board_sections_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for board_sections_list_pins
  # List Pins on board section
  # Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param section_id Unique identifier of a board section.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @return [BoardsListPins200Response]
  describe 'board_sections_list_pins test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for board_sections_update
  # Update board section
  # Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param section_id Unique identifier of a board section.
  # @param board_section Update a board section.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [BoardSection]
  describe 'board_sections_update test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_create
  # Create board
  # Create a board owned by the \&quot;operation user_account\&quot;. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board Create a board using a single board json object.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [Board]
  describe 'boards_create test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_delete
  # Delete board
  # Delete a board owned by the \&quot;operation user_account\&quot;. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [nil]
  describe 'boards_delete test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_get
  # Get board
  # Get a board owned by the operation user_account - or a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [Board]
  describe 'boards_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_list
  # List boards
  # Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @option opts [String] :privacy Privacy setting for a board.
  # @return [BoardsList200Response]
  describe 'boards_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_list_pins
  # List Pins on board
  # Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [Integer] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @option opts [Array<String>] :creative_types Pin creative types filter. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @option opts [Boolean] :pin_metrics Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
  # @return [BoardsListPins200Response]
  describe 'boards_list_pins test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for boards_update
  # Update board
  # Update a board owned by the \&quot;operating user_account\&quot;. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param board_id Unique identifier of a board.
  # @param board_update Update a board.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [Board]
  describe 'boards_update test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
