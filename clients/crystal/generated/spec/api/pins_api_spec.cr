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

# Unit tests for ::PinsApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "PinsApi" do
  describe "test an instance of PinsApi" do
    it "should create an instance of PinsApi" do
      api_instance = ::PinsApi.new
      # TODO expect(api_instance).to be_instance_of(::PinsApi)
    end
  end

  # unit tests for pins_analytics
  # Get Pin analytics
  # Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
  # @param pin_id Unique identifier of a Pin.
  # @param start_date Metric report start date (UTC). Format: YYYY-MM-DD
  # @param end_date Metric report end date (UTC). Format: YYYY-MM-DD
  # @param metric_types Pin metric types to get data for, default is all.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :app_types Apps or devices to get data for, default is all.
  # @option opts [String] :split_field How to split the data into groups. Not including this param means data won&#39;t be split.
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [Hash(String, AnalyticsMetricsResponse)]
  describe "pins_analytics test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for pins_create
  # Create Pin
  # Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
  # @param pin Create a new Pin.
  # @param [Hash] opts the optional parameters
  # @return [Pin]
  describe "pins_create test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for pins_delete
  # Delete Pin
  # Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
  # @param pin_id Unique identifier of a Pin.
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe "pins_delete test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for pins_get
  # Get Pin
  # Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
  # @param pin_id Unique identifier of a Pin.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :ad_account_id Unique identifier of an ad account.
  # @return [Pin]
  describe "pins_get test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
