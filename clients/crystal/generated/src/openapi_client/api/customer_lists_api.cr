# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.12.0
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.4.0
#

require "uri"

module OpenAPIClient
  class CustomerListsApi
    property api_client : ApiClient

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Create customer lists
    # <p>Create a customer list from your records(hashed or plain-text email addresses, or hashed MAIDs or IDFAs).</p> <p>A customer list is one of the four types of Pinterest audiences: for more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a> or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.<p/> <p><b>Please review our <u><a href=\"https://help.pinterest.com/en/business/article/audience-targeting#section-13341\" target=\"_blank\">requirements</a></u> for what type of information is allowed when uploading a customer list.</b></p> <p>When you create a customer list, the system scans the list for existing Pinterest accounts; the list must include at least 100 Pinterest accounts. Your original list will be deleted when the matching process is complete. The filtered list – containing only the Pinterest accounts that were included in your starting list – is what will be used to create the audience.</p> <p>Note that once you have created your customer list, you must convert it into an audience (of the “CUSTOMER_LIST” type) using the <a href=\"#operation/create_audience_handler\">create audience endpoint</a> before it can be used.</p>
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_request [CustomerListRequest] Parameters to get Customer lists info
    # @return [CustomerList]
    def customer_lists_create(ad_account_id : String, customer_list_request : CustomerListRequest)
      data, _status_code, _headers = customer_lists_create_with_http_info(ad_account_id, customer_list_request)
      data
    end

    # Create customer lists
    # &lt;p&gt;Create a customer list from your records(hashed or plain-text email addresses, or hashed MAIDs or IDFAs).&lt;/p&gt; &lt;p&gt;A customer list is one of the four types of Pinterest audiences: for more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt; or the &lt;a href&#x3D;\&quot;/docs/ads/targeting/#Audiences\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audiences&lt;/a&gt; section of the ads management guide.&lt;p/&gt; &lt;p&gt;&lt;b&gt;Please review our &lt;u&gt;&lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting#section-13341\&quot; target&#x3D;\&quot;_blank\&quot;&gt;requirements&lt;/a&gt;&lt;/u&gt; for what type of information is allowed when uploading a customer list.&lt;/b&gt;&lt;/p&gt; &lt;p&gt;When you create a customer list, the system scans the list for existing Pinterest accounts; the list must include at least 100 Pinterest accounts. Your original list will be deleted when the matching process is complete. The filtered list – containing only the Pinterest accounts that were included in your starting list – is what will be used to create the audience.&lt;/p&gt; &lt;p&gt;Note that once you have created your customer list, you must convert it into an audience (of the “CUSTOMER_LIST” type) using the &lt;a href&#x3D;\&quot;#operation/create_audience_handler\&quot;&gt;create audience endpoint&lt;/a&gt; before it can be used.&lt;/p&gt;
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_request [CustomerListRequest] Parameters to get Customer lists info
    # @return [Array<(CustomerList, Integer, Hash)>] CustomerList data, response status code and response headers
    def customer_lists_create_with_http_info(ad_account_id : String, customer_list_request : CustomerListRequest)
      if @api_client.config.debugging
        Log.debug {"Calling API: CustomerListsApi.customer_lists_create ..."}
      end
      # verify the required parameter "ad_account_id" is set
      if @api_client.config.client_side_validation && ad_account_id.nil?
        raise ArgumentError.new("Missing the required parameter 'ad_account_id' when calling CustomerListsApi.customer_lists_create")
      end
      if @api_client.config.client_side_validation && ad_account_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_create, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_create, must conform to the pattern #{pattern}.")
      end

      # verify the required parameter "customer_list_request" is set
      if @api_client.config.client_side_validation && customer_list_request.nil?
        raise ArgumentError.new("Missing the required parameter 'customer_list_request' when calling CustomerListsApi.customer_lists_create")
      end
      # resource path
      local_var_path = "/ad_accounts/{ad_account_id}/customer_lists".sub("{" + "ad_account_id" + "}", URI.encode_path(ad_account_id.to_s))

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
      post_body = customer_list_request.to_json

      # return_type
      return_type = "CustomerList"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:POST,
                                                        local_var_path,
                                                        :"CustomerListsApi.customer_lists_create",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: CustomerListsApi#customer_lists_create\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return CustomerList.from_json(data), status_code, headers
    end

    # Get customer list
    # Gets a specific customer list given the customer list ID.
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_id [String] Unique identifier of a customer list
    # @return [CustomerList]
    def customer_lists_get(ad_account_id : String, customer_list_id : String)
      data, _status_code, _headers = customer_lists_get_with_http_info(ad_account_id, customer_list_id)
      data
    end

    # Get customer list
    # Gets a specific customer list given the customer list ID.
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_id [String] Unique identifier of a customer list
    # @return [Array<(CustomerList, Integer, Hash)>] CustomerList data, response status code and response headers
    def customer_lists_get_with_http_info(ad_account_id : String, customer_list_id : String)
      if @api_client.config.debugging
        Log.debug {"Calling API: CustomerListsApi.customer_lists_get ..."}
      end
      # verify the required parameter "ad_account_id" is set
      if @api_client.config.client_side_validation && ad_account_id.nil?
        raise ArgumentError.new("Missing the required parameter 'ad_account_id' when calling CustomerListsApi.customer_lists_get")
      end
      if @api_client.config.client_side_validation && ad_account_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_get, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_get, must conform to the pattern #{pattern}.")
      end

      # verify the required parameter "customer_list_id" is set
      if @api_client.config.client_side_validation && customer_list_id.nil?
        raise ArgumentError.new("Missing the required parameter 'customer_list_id' when calling CustomerListsApi.customer_lists_get")
      end
      if @api_client.config.client_side_validation && customer_list_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"customer_list_id\" when calling CustomerListsApi.customer_lists_get, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && customer_list_id !~ pattern
        raise ArgumentError.new("invalid value for \"customer_list_id\" when calling CustomerListsApi.customer_lists_get, must conform to the pattern #{pattern}.")
      end

      # resource path
      local_var_path = "/ad_accounts/{ad_account_id}/customer_lists/{customer_list_id}".sub("{" + "ad_account_id" + "}", URI.encode_path(ad_account_id.to_s)).sub("{" + "customer_list_id" + "}", URI.encode_path(customer_list_id.to_s))

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
      return_type = "CustomerList"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:GET,
                                                        local_var_path,
                                                        :"CustomerListsApi.customer_lists_get",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: CustomerListsApi#customer_lists_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return CustomerList.from_json(data), status_code, headers
    end

    # Get customer lists
    # <p>Get a set of customer lists including id and name based on the filters provided.</p> <p>(Customer lists are a type of audience.) For more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>  or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.</p>
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @return [CustomerListsList200Response]
    def customer_lists_list(ad_account_id : String, page_size : Int32?, order : String?, bookmark : String?)
      data, _status_code, _headers = customer_lists_list_with_http_info(ad_account_id, page_size, order, bookmark)
      data
    end

    # Get customer lists
    # &lt;p&gt;Get a set of customer lists including id and name based on the filters provided.&lt;/p&gt; &lt;p&gt;(Customer lists are a type of audience.) For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt;  or the &lt;a href&#x3D;\&quot;/docs/ads/targeting/#Audiences\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audiences&lt;/a&gt; section of the ads management guide.&lt;/p&gt;
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @return [Array<(CustomerListsList200Response, Integer, Hash)>] CustomerListsList200Response data, response status code and response headers
    def customer_lists_list_with_http_info(ad_account_id : String, page_size : Int32?, order : String?, bookmark : String?)
      if @api_client.config.debugging
        Log.debug {"Calling API: CustomerListsApi.customer_lists_list ..."}
      end
      # verify the required parameter "ad_account_id" is set
      if @api_client.config.client_side_validation && ad_account_id.nil?
        raise ArgumentError.new("Missing the required parameter 'ad_account_id' when calling CustomerListsApi.customer_lists_list")
      end
      if @api_client.config.client_side_validation && ad_account_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_list, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_list, must conform to the pattern #{pattern}.")
      end

      if @api_client.config.client_side_validation && !page_size.nil? && page_size > 250
        raise ArgumentError.new("invalid value for \"page_size\" when calling CustomerListsApi.customer_lists_list, must be smaller than or equal to 250.")
      end

      if @api_client.config.client_side_validation && !page_size.nil? && page_size < 1
        raise ArgumentError.new("invalid value for \"page_size\" when calling CustomerListsApi.customer_lists_list, must be greater than or equal to 1.")
      end

      allowable_values = ["ASCENDING", "DESCENDING"]
      if @api_client.config.client_side_validation && order && !allowable_values.includes?(order)
        raise ArgumentError.new("invalid value for \"order\", must be one of #{allowable_values}")
      end
      # resource path
      local_var_path = "/ad_accounts/{ad_account_id}/customer_lists".sub("{" + "ad_account_id" + "}", URI.encode_path(ad_account_id.to_s))

      # query parameters
      query_params = Hash(String, String).new
      query_params["page_size"] = page_size.to_s unless page_size.nil?
      query_params["order"] = order.to_s unless order.nil?
      query_params["bookmark"] = bookmark.to_s unless bookmark.nil?

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new

      # http body (model)
      post_body = nil

      # return_type
      return_type = "CustomerListsList200Response"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:GET,
                                                        local_var_path,
                                                        :"CustomerListsApi.customer_lists_list",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: CustomerListsApi#customer_lists_list\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return CustomerListsList200Response.from_json(data), status_code, headers
    end

    # Update customer list
    # <p>Append or remove records to/from an existing customer list. (A customer list is one of the four types of Pinterest audiences.)</p> <p>When you add records to an existing customer list, the system scans the additions for existing Pinterest accounts; those are the records that will be added to your “CUSTOMER_LIST” audience. Your original list of records to add will be deleted when the matching process is complete.</p> <p>For more information, see <a href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a> or the <a href=\"/docs/ads/targeting/#Audiences\" target=\"_blank\">Audiences</a> section of the ads management guide.</p>
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_id [String] Unique identifier of a customer list
    # @param customer_list_update_request [CustomerListUpdateRequest] 
    # @return [CustomerList]
    def customer_lists_update(ad_account_id : String, customer_list_id : String, customer_list_update_request : CustomerListUpdateRequest)
      data, _status_code, _headers = customer_lists_update_with_http_info(ad_account_id, customer_list_id, customer_list_update_request)
      data
    end

    # Update customer list
    # &lt;p&gt;Append or remove records to/from an existing customer list. (A customer list is one of the four types of Pinterest audiences.)&lt;/p&gt; &lt;p&gt;When you add records to an existing customer list, the system scans the additions for existing Pinterest accounts; those are the records that will be added to your “CUSTOMER_LIST” audience. Your original list of records to add will be deleted when the matching process is complete.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt; or the &lt;a href&#x3D;\&quot;/docs/ads/targeting/#Audiences\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audiences&lt;/a&gt; section of the ads management guide.&lt;/p&gt;
    # @param ad_account_id [String] Unique identifier of an ad account.
    # @param customer_list_id [String] Unique identifier of a customer list
    # @param customer_list_update_request [CustomerListUpdateRequest] 
    # @return [Array<(CustomerList, Integer, Hash)>] CustomerList data, response status code and response headers
    def customer_lists_update_with_http_info(ad_account_id : String, customer_list_id : String, customer_list_update_request : CustomerListUpdateRequest)
      if @api_client.config.debugging
        Log.debug {"Calling API: CustomerListsApi.customer_lists_update ..."}
      end
      # verify the required parameter "ad_account_id" is set
      if @api_client.config.client_side_validation && ad_account_id.nil?
        raise ArgumentError.new("Missing the required parameter 'ad_account_id' when calling CustomerListsApi.customer_lists_update")
      end
      if @api_client.config.client_side_validation && ad_account_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_update, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && ad_account_id !~ pattern
        raise ArgumentError.new("invalid value for \"ad_account_id\" when calling CustomerListsApi.customer_lists_update, must conform to the pattern #{pattern}.")
      end

      # verify the required parameter "customer_list_id" is set
      if @api_client.config.client_side_validation && customer_list_id.nil?
        raise ArgumentError.new("Missing the required parameter 'customer_list_id' when calling CustomerListsApi.customer_lists_update")
      end
      if @api_client.config.client_side_validation && customer_list_id.to_s.size > 18
        raise ArgumentError.new("invalid value for \"customer_list_id\" when calling CustomerListsApi.customer_lists_update, the character length must be smaller than or equal to 18.")
      end

      pattern = Regexp.new(/^\d+$/)
      if @api_client.config.client_side_validation && customer_list_id !~ pattern
        raise ArgumentError.new("invalid value for \"customer_list_id\" when calling CustomerListsApi.customer_lists_update, must conform to the pattern #{pattern}.")
      end

      # verify the required parameter "customer_list_update_request" is set
      if @api_client.config.client_side_validation && customer_list_update_request.nil?
        raise ArgumentError.new("Missing the required parameter 'customer_list_update_request' when calling CustomerListsApi.customer_lists_update")
      end
      # resource path
      local_var_path = "/ad_accounts/{ad_account_id}/customer_lists/{customer_list_id}".sub("{" + "ad_account_id" + "}", URI.encode_path(ad_account_id.to_s)).sub("{" + "customer_list_id" + "}", URI.encode_path(customer_list_id.to_s))

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
      post_body = customer_list_update_request.to_json

      # return_type
      return_type = "CustomerList"

      # auth_names
      auth_names = ["pinterest_oauth2"]

      data, status_code, headers = @api_client.call_api(:PATCH,
                                                        local_var_path,
                                                        :"CustomerListsApi.customer_lists_update",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: CustomerListsApi#customer_lists_update\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return CustomerList.from_json(data), status_code, headers
    end
  end
end
