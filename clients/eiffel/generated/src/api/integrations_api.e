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
	INTEGRATIONS_API

inherit

    API_I


feature -- API Access


	integrations_commerce_del (external_business_id: STRING_32)
			-- Delete commerce integration
			-- Delete commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: external_business_id External business ID for the integration. (required)
			-- 
			-- 
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/integrations/commerce/{external_business_id}"
			l_path.replace_substring_all ("{"+"external_business_id"+"}", api_client.url_encode (external_business_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Delete", l_request, agent serializer, Void)
			if l_response.has_error then
				last_error := l_response.error
			end
		end

	integrations_commerce_get (external_business_id: STRING_32): detachable INTEGRATION_METADATA
			-- Get commerce integration
			-- Get commerce integration metadata associated with the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: external_business_id External business ID for the integration. (required)
			-- 
			-- 
			-- Result INTEGRATION_METADATA
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/integrations/commerce/{external_business_id}"
			l_path.replace_substring_all ("{"+"external_business_id"+"}", api_client.url_encode (external_business_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATION_METADATA } l_response.data ({ INTEGRATION_METADATA }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	integrations_commerce_patch (external_business_id: STRING_32; integration_request_patch: detachable INTEGRATION_REQUEST_PATCH): detachable INTEGRATION_METADATA
			-- Update commerce integration
			-- Update commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: external_business_id External business ID for the integration. (required)
			-- 
			-- argument: integration_request_patch Parameters to get create/update the Integration Metadata (optional)
			-- 
			-- 
			-- Result INTEGRATION_METADATA
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(integration_request_patch)
			l_path := "/integrations/commerce/{external_business_id}"
			l_path.replace_substring_all ("{"+"external_business_id"+"}", api_client.url_encode (external_business_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Patch", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATION_METADATA } l_response.data ({ INTEGRATION_METADATA }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	integrations_commerce_post (integration_request: detachable INTEGRATION_REQUEST): detachable INTEGRATION_METADATA
			-- Create commerce integration
			-- Create commerce integration metadata to link an external business ID with a Pinterest merchant &amp; ad account. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: integration_request Parameters to get create/update the Integration Metadata (optional)
			-- 
			-- 
			-- Result INTEGRATION_METADATA
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(integration_request)
			l_path := "/integrations/commerce"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATION_METADATA } l_response.data ({ INTEGRATION_METADATA }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	integrations_get_by_id (id: STRING_32): detachable INTEGRATION_RECORD
			-- Get integration metadata
			-- Get integration metadata by ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: id Integration ID. (required)
			-- 
			-- 
			-- Result INTEGRATION_RECORD
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/integrations/{id}"
			l_path.replace_substring_all ("{"+"id"+"}", api_client.url_encode (id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATION_RECORD } l_response.data ({ INTEGRATION_RECORD }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	integrations_get_list (bookmark: STRING_32; page_size: INTEGER_32): detachable INTEGRATIONS_GET_LIST_200_RESPONSE
			-- Get integration metadata list
			-- Get integration metadata list. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- 
			-- Result INTEGRATIONS_GET_LIST_200_RESPONSE
		require
			page_size_is_less_or_equal_than: page_size <= 250
     		page_size_is_greater_or_equal_than: page_size >= 1
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/integrations"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "bookmark", bookmark));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "page_size", page_size));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATIONS_GET_LIST_200_RESPONSE } l_response.data ({ INTEGRATIONS_GET_LIST_200_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	integrations_logs_post (integration_logs_request: INTEGRATION_LOGS_REQUEST): detachable INTEGRATION_LOGS_SUCCESS_RESPONSE
			-- Receives batched logs from integration applications.
			-- This endpoint receives batched logs from integration applications on partner platforms. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
			-- 
			-- argument: integration_logs_request Ingest log information from external integration application. (required)
			-- 
			-- 
			-- Result INTEGRATION_LOGS_SUCCESS_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(integration_logs_request)
			l_path := "/integrations/logs"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { INTEGRATION_LOGS_SUCCESS_RESPONSE } l_response.data ({ INTEGRATION_LOGS_SUCCESS_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end