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

# Unit tests for OpenAPIClient::AudienceInsightsApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "AudienceInsightsApi" do
  describe "test an instance of AudienceInsightsApi" do
    it "should create an instance of AudienceInsightsApi" do
      api_instance = OpenAPIClient::AudienceInsightsApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::AudienceInsightsApi)
    end
  end

  # unit tests for audience_insights_get
  # Get audience insights
  # Get Audience Insights for an ad account. The response will return insights for 3 types of audiences: the ad account&#39;s engaged audience on Pinterest, the ad account&#39;s total audience on Pinterest and Pinterest&#39;s total audience.&lt;p/&gt; &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-insights\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Learn more about Audience Insights&lt;/a&gt;.
  # @param ad_account_id Unique identifier of an ad account.
  # @param audience_insight_type Type of audience insights.
  # @param [Hash] opts the optional parameters
  # @return [AudienceInsightsResponse]
  describe "audience_insights_get test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for audience_insights_scope_and_type_get
  # Get audience insights scope and type
  # Get the scope and type of available audiences, which along with a date, is an audience that has recently had an interaction (referred to here as a type) on pins. Interacted pins can belong to at least the most common **partner** or **Pinterest** scopes. This means that user interactions made on advertiser or partner pins will have the **partner** scope. You can also have user interactions performed in general on Pinterest with the **Pinterest** scope. In that case, you can then use the returned type and scope values together on requests to other endpoints to retrieve insight metrics for a desired audience.
  # @param ad_account_id Unique identifier of an ad account.
  # @param [Hash] opts the optional parameters
  # @return [AudienceDefinitionResponse]
  describe "audience_insights_scope_and_type_get test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
