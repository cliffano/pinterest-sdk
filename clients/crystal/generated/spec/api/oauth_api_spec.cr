# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: pinterest-api@pinterest.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for ::OauthApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "OauthApi" do
  describe "test an instance of OauthApi" do
    it "should create an instance of OauthApi" do
      api_instance = ::OauthApi.new
      # TODO expect(api_instance).to be_instance_of(::OauthApi)
    end
  end

  # unit tests for oauth_token
  # Generate OAuth access token
  # Generate an OAuth access token by using an authorization code or a refresh token.  See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Authentication&#39;&gt;Authentication&lt;/a&gt; for more.
  # @param grant_type 
  # @param [Hash] opts the optional parameters
  # @return [OauthAccessTokenResponse]
  describe "oauth_token test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end