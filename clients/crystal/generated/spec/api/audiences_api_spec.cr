# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.12.0
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.4.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::AudiencesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "AudiencesApi" do
  describe "test an instance of AudiencesApi" do
    it "should create an instance of AudiencesApi" do
      api_instance = OpenAPIClient::AudiencesApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::AudiencesApi)
    end
  end

  # unit tests for audiences_create
  # Create audience
  # Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt;.
  # @param ad_account_id Unique identifier of an ad account.
  # @param audience_create_request List of ads to create, size limit [1, 30]
  # @param [Hash] opts the optional parameters
  # @return [Audience]
  describe "audiences_create test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for audiences_create_custom
  # Create custom audience
  # Create a custom audience and find the audiences you want your ads to reach.
  # @param ad_account_id Unique identifier of an ad account.
  # @param audience_create_custom_request Custom audience to create.
  # @param [Hash] opts the optional parameters
  # @return [Audience]
  describe "audiences_create_custom test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for audiences_get
  # Get audience
  # Get a specific audience given the audience ID.
  # @param ad_account_id Unique identifier of an ad account.
  # @param audience_id Unique identifier of an audience
  # @param [Hash] opts the optional parameters
  # @return [Audience]
  describe "audiences_get test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for audiences_list
  # List audiences
  # Get list of audiences for the ad account.
  # @param ad_account_id Unique identifier of an ad account.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @option opts [String] :order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. For received audiences, it is sorted by sharing event time. Note that higher-value IDs are associated with more-recently added items.
  # @option opts [Int32] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @option opts [String] :ownership_type &lt;strong&gt;This feature is currently in beta and not available to all apps.&lt;/strong&gt; Filter audiences by ownership type.
  # @return [AudiencesList200Response]
  describe "audiences_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for audiences_update
  # Update audience
  # Update (edit or remove) an existing targeting audience.
  # @param ad_account_id Unique identifier of an ad account.
  # @param audience_id Unique identifier of an audience
  # @param [Hash] opts the optional parameters
  # @option opts [AudienceUpdateRequest] :audience_update_request The audience to be updated.
  # @return [Audience]
  describe "audiences_update test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
