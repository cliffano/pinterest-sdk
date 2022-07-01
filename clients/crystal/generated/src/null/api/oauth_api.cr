# #Pinterest REST API
#
##Pinterest's REST API
#
#The version of the OpenAPI document: 5.3.0
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 5.4.0
#

require "uri"

module 
  class OauthApi
    property api_client : ApiClient

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Generate OAuth access token
    # Generate an OAuth access token by using an authorization code or a refresh token.  See <a href='/docs/api/v5/#tag/Authentication'>Authentication</a> for more.
    # @param grant_type [String] 
    # @return [OauthAccessTokenResponse]
    def oauth_token(grant_type : String)
      data, _status_code, _headers = oauth_token_with_http_info(grant_type)
      data
    end

    # Generate OAuth access token
    # Generate an OAuth access token by using an authorization code or a refresh token.  See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Authentication&#39;&gt;Authentication&lt;/a&gt; for more.
    # @param grant_type [String] 
    # @return [Array<(OauthAccessTokenResponse, Integer, Hash)>] OauthAccessTokenResponse data, response status code and response headers
    def oauth_token_with_http_info(grant_type : String)
      if @api_client.config.debugging
        Log.debug {"Calling API: OauthApi.oauth_token ..."}
      end
      # verify the required parameter "grant_type" is set
      if @api_client.config.client_side_validation && grant_type.nil?
        raise ArgumentError.new("Missing the required parameter 'grant_type' when calling OauthApi.oauth_token")
      end
      # verify enum value
      allowable_values = ["authorization_code", "refresh_token"]
      if @api_client.config.client_side_validation && !allowable_values.includes?(grant_type)
        raise ArgumentError.new("invalid value for \"grant_type\", must be one of #{allowable_values}")
      end
      # resource path
      local_var_path = "/oauth/token"

      # query parameters
      query_params = Hash(String, String).new

      # header parameters
      header_params = Hash(String, String).new
      # HTTP header "Accept" (if needed)
      header_params["Accept"] = @api_client.select_header_accept(["application/json"])
      # HTTP header "Content-Type"
      header_params["Content-Type"] = @api_client.select_header_content_type(["application/x-www-form-urlencoded"])

      # form parameters
      form_params = Hash(Symbol, (String | ::File)).new
      form_params[:"grant_type"] = grant_type unless grant_type.nil?

      # http body (model)
      post_body = nil

      # return_type
      return_type = "OauthAccessTokenResponse"

      # auth_names
      auth_names = [] of String

      data, status_code, headers = @api_client.call_api(:POST,
                                                        local_var_path,
                                                        :"OauthApi.oauth_token",
                                                        return_type,
                                                        post_body,
                                                        auth_names,
                                                        header_params,
                                                        query_params,
                                                        form_params)
      if @api_client.config.debugging
        Log.debug {"API called: OauthApi#oauth_token\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"}
      end
      return OauthAccessTokenResponse.from_json(data), status_code, headers
    end
  end
end
