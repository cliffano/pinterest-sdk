note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.12.0
 	    Contact: blah+oapicf@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	PRODUCTGROUPS_API

inherit

    API_I


feature -- API Access


	ad_accounts_catalogs_product_groups_list (ad_account_id: STRING_32; feed_profile_id: STRING_32): detachable AD_ACCOUNTS_CATALOGS_PRODUCT_GROUPS_LIST_200_RESPONSE
			-- Get catalog product groups
			-- This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: feed_profile_id The feed profile id whose catalog product groups we want to return. (optional, default to null)
			-- 
			-- 
			-- Result AD_ACCOUNTS_CATALOGS_PRODUCT_GROUPS_LIST_200_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/product_groups/catalogs"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "feed_profile_id", feed_profile_id));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_ACCOUNTS_CATALOGS_PRODUCT_GROUPS_LIST_200_RESPONSE } l_response.data ({ AD_ACCOUNTS_CATALOGS_PRODUCT_GROUPS_LIST_200_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end
