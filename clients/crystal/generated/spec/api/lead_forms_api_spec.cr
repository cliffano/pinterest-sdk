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

# Unit tests for OpenAPIClient::LeadFormsApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "LeadFormsApi" do
  describe "test an instance of LeadFormsApi" do
    it "should create an instance of LeadFormsApi" do
      api_instance = OpenAPIClient::LeadFormsApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::LeadFormsApi)
    end
  end

  # unit tests for lead_form_get
  # Get lead form by id
  # Gets a lead form given it&#39;s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser&#39;s lead form will only contain results if you&#39;re a part of the Lead ads beta. If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param ad_account_id Unique identifier of an ad account.
  # @param lead_form_id Unique identifier of a lead form.
  # @param [Hash] opts the optional parameters
  # @return [LeadFormResponse]
  describe "lead_form_get test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for lead_form_test_create
  # Create lead form test data
  # Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
  # @param ad_account_id Unique identifier of an ad account.
  # @param lead_form_id Unique identifier of a lead form.
  # @param lead_form_test_request Subscription to create.
  # @param [Hash] opts the optional parameters
  # @return [LeadFormTestResponse]
  describe "lead_form_test_create test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for lead_forms_list
  # Get lead forms
  # Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser&#39;s list of lead forms will only contain results if you&#39;re a part of the Lead ads beta.  If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
  # @param ad_account_id Unique identifier of an ad account.
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.
  # @option opts [String] :order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
  # @option opts [String] :bookmark Cursor used to fetch the next page of items
  # @return [LeadFormsList200Response]
  describe "lead_forms_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end