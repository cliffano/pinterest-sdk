# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: pinterest-api@pinterest.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "uri"

module 
  class PinsApi
    property api_client : ApiClient

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Get Pin analytics
    # Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
    # @param pin_id [String] Unique identifier of a Pin.
    # @param start_date [Time] Metric report start date (UTC). Format: YYYY-MM-DD
    # @param end_date [Time] Metric report end date (UTC). Format: YYYY-MM-DD
    # @param metric_types [Array(String)] Pin metric types to get data for, default is all.
    # @return [Hash(String, AnalyticsMetricsResponse)]
    def pins_analytics(pin_id : String, start_date : Time, end_date : Time, metric_types : Array(String), app_types : String?, split_field : String?, ad_account_id : String?)
      data, _status_code, _headers = pins_analytics_with_http_info(pin_id, start_date, end_date, metric_types, app_types, split_field, ad_account_id)
      data
    end

    # Get Pin analytics
    # Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
    # @param pin_id [String] Unique identifier of a Pin.
    # @param start_date [Time] Metric report start date (UTC). Format: YYYY-MM-DD
    # @param end_date [Time] Metric report end date (UTC). Format: YYYY-MM-DD
    # @param metric_types [Array(String)] Pin metric types to get data for, default is all.
    # @return [Array<(Hash(String, AnalyticsMetricsResponse), Integer, Hash)>] Hash(String, AnalyticsMetricsResponse) data, response status code and response headers
    def pins_analytics_with_http_info(pin_id : String, start_date : Time, end_date : Time, metric_types : Array(String), app_types : String?, split_field : String?, ad_account_id : String?)
      if @api_client.config.debugging
        Log.debug {"Calling API: PinsApi.pins_analytics ..."}
      end
      # verify the required parameter "pin_id" is set
      if @api_client.config.client_side_validation && pin_id.nil?
        raise ArgumentError.new("Missing the required parameter 'pin_id' when calling PinsApi.pins_analytics")
      end
      # verify the required parameter "start_date" is set
      if @api_client.config.client_side_validation && start_date.nil?
        raise ArgumentError.new("Missing the required parameter 'start_date' when calling PinsApi.pins_analytics")
      end
      # verify the required parameter "end_date" is set
      if @api_client.config.client_side_validation && end_date.nil?
        raise ArgumentError.new("Missing the required parameter 'end_date' when calling PinsApi.pins_analytics")
      end
      # verify the required parameter "metric_types" is set
      if @api_client.config.client_side_validation && metric_types.nil?
        raise ArgumentError.new("Missing the required parameter 'metric_types' when calling PinsApi.pins_analytics")
      end
      allowable_values = ["ALL", "MOBILE", "TABLET", "WEB"]
      if @api_client.config.client_side_validation && app_types && !allowable_values.includes?(app_types)
        raise ArgumentError.new("invalid value for \"app_types\", must be one of #{allowable_values}")
      end
      allowable_values = ["NO_SPLIT", "APP_TYPE"]
      if @api_client.config.client_side_validation && split_field && !allowable_values.includes?(split_field)
        raise ArgumentError.new("invalid value for \"split_field\", must be one of #{allowable_values}")
      end
      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id.nil? && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling PinsApi.pins_analytics, must conform to the pattern #{pattern}.")
      end

      # resource path
      local_var_path = "/pins/{pin_id}/analytics".sub("{" + "pin_id" + "}", URI.encode_path(pin_id.to_s))

      # query parameters
      query_params = Hash(String, String).new
      query_params["start_date"] = start_date.to_s unless start_date.nil?
      query_params["end_date"] = end_date.to_s unless end_date.nil?
      query_params["app_types"] = app_types.to_s unless app_types.nil?
      query_params["metric_types"] = @api_client.build_collection_param(metric_types, :csv)
      query_params["split_field"] = split_field.to_s unless split_field.nil?
      query_params["ad_account_id"] = ad_account_id.to_s unless ad_account_id.nil?

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new

      # http body (model)
      post_body = nil

      # return_type
      return_type = "Hash(String, AnalyticsMetricsResponse)"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:GET,
                                                        local_var_path,
                                                        :"PinsApi.pins_analytics",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: PinsApi#pins_analytics\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return Hash(String, AnalyticsMetricsResponse).from_json(data), status_code, headers
    end

    # Create Pin
    # Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user's Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account's permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called 'curated content', please use our <a href='/docs/add-ons/save-button'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href='/docs/solutions/content-apps'>Content App Solutions Guide</a>.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
    # @param pin [Pin] Create a new Pin.
    # @return [Pin]
    def pins_create(pin : Pin)
      data, _status_code, _headers = pins_create_with_http_info(pin)
      data
    end

    # Create Pin
    # Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
    # @param pin [Pin] Create a new Pin.
    # @return [Array<(Pin, Integer, Hash)>] Pin data, response status code and response headers
    def pins_create_with_http_info(pin : Pin)
      if @api_client.config.debugging
        Log.debug {"Calling API: PinsApi.pins_create ..."}
      end
      # verify the required parameter "pin" is set
      if @api_client.config.client_side_validation && pin.nil?
        raise ArgumentError.new("Missing the required parameter 'pin' when calling PinsApi.pins_create")
      end
      # resource path
      local_var_path = "/pins"

      # query parameters
      query_params = Hash(String, String).new

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])
      # HTTP header "Content-Type"
      header_params["Content-Type"] = @api_client.select_header_content_type(["application/json"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new

      # http body (model)
      post_body = pin.to_json

      # return_type
      return_type = "Pin"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:POST,
                                                        local_var_path,
                                                        :"PinsApi.pins_create",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: PinsApi#pins_create\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return Pin.from_json(data), status_code, headers
    end

    # Delete Pin
    # Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
    # @param pin_id [String] Unique identifier of a Pin.
    # @return [nil]
    def pins_delete(pin_id : String)
      pins_delete_with_http_info(pin_id)
      nil
    end

    # Delete Pin
    # Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    # @param pin_id [String] Unique identifier of a Pin.
    # @return [Array<(nil, Integer, Hash)>] nil, response status code and response headers
    def pins_delete_with_http_info(pin_id : String)
      if @api_client.config.debugging
        Log.debug {"Calling API: PinsApi.pins_delete ..."}
      end
      # verify the required parameter "pin_id" is set
      if @api_client.config.client_side_validation && pin_id.nil?
        raise ArgumentError.new("Missing the required parameter 'pin_id' when calling PinsApi.pins_delete")
      end
      # resource path
      local_var_path = "/pins/{pin_id}".sub("{" + "pin_id" + "}", URI.encode_path(pin_id.to_s))

      # query parameters
      query_params = Hash(String, String).new

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new

      # http body (model)
      post_body = nil

      # return_type
      return_type = nil

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:DELETE,
                                                        local_var_path,
                                                        :"PinsApi.pins_delete",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: PinsApi#pins_delete\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return nil, status_code, headers
    end

    # Get Pin
    # Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
    # @param pin_id [String] Unique identifier of a Pin.
    # @return [Pin]
    def pins_get(pin_id : String, ad_account_id : String?)
      data, _status_code, _headers = pins_get_with_http_info(pin_id, ad_account_id)
      data
    end

    # Get Pin
    # Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
    # @param pin_id [String] Unique identifier of a Pin.
    # @return [Array<(Pin, Integer, Hash)>] Pin data, response status code and response headers
    def pins_get_with_http_info(pin_id : String, ad_account_id : String?)
      if @api_client.config.debugging
        Log.debug {"Calling API: PinsApi.pins_get ..."}
      end
      # verify the required parameter "pin_id" is set
      if @api_client.config.client_side_validation && pin_id.nil?
        raise ArgumentError.new("Missing the required parameter 'pin_id' when calling PinsApi.pins_get")
      end
      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id.nil? && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling PinsApi.pins_get, must conform to the pattern #{pattern}.")
      end

      # resource path
      local_var_path = "/pins/{pin_id}".sub("{" + "pin_id" + "}", URI.encode_path(pin_id.to_s))

      # query parameters
      query_params = Hash(String, String).new
      query_params["ad_account_id"] = ad_account_id.to_s unless ad_account_id.nil?

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new

      # http body (model)
      post_body = nil

      # return_type
      return_type = "Pin"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:GET,
                                                        local_var_path,
                                                        :"PinsApi.pins_get",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: PinsApi#pins_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return Pin.from_json(data), status_code, headers
    end
  end
end