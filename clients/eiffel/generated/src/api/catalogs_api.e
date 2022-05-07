note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: pinterest-api@pinterest.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	CATALOGS_API

inherit

    API_I


feature -- API Access


	catalogs_product_groups_create (catalogs_product_group_create_request: CATALOGS_PRODUCT_GROUP_CREATE_REQUEST): detachable ANY
			-- Create product group
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create product group to use in Catalogs.
			-- 
			-- argument: catalogs_product_group_create_request Request object used to created a catalogs product group. (required)
			-- 
			-- 
			-- Result ANY
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(catalogs_product_group_create_request)
			l_path := "/catalogs/product_groups"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ANY } l_response.data ({ ANY }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	catalogs_product_groups_delete (product_group_id: STRING_32)
			-- Delete product group
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a product group from being in use in Catalogs.
			-- 
			-- argument: product_group_id Unique identifier of a product group (required)
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
			
			l_path := "/catalogs/product_groups/{product_group_id}"
			l_path.replace_substring_all ("{"+"product_group_id"+"}", api_client.url_encode (product_group_id.out))


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

	catalogs_product_groups_list (feed_id: STRING_32; bookmark: STRING_32; page_size: INTEGER_32): detachable PAGINATED
			-- Get product groups list
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a list of product groups for a given Catalogs Feed Id.
			-- 
			-- argument: feed_id Unique identifier of a feed (required)
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- 
			-- Result PAGINATED
		require
			page_size_is_less_or_equal_than: page_size <= 100
     		page_size_is_greater_or_equal_than: page_size >= 1
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/product_groups"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "feed_id", feed_id));
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
			elseif attached { PAGINATED } l_response.data ({ PAGINATED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	catalogs_product_groups_update (product_group_id: STRING_32; catalogs_product_group_update_request: CATALOGS_PRODUCT_GROUP_UPDATE_REQUEST): detachable CATALOGS_PRODUCT_GROUP
			-- Update product group
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update product group to use in Catalogs.
			-- 
			-- argument: product_group_id Unique identifier of a product group (required)
			-- 
			-- argument: catalogs_product_group_update_request Request object used to Update a catalogs product group. (required)
			-- 
			-- 
			-- Result CATALOGS_PRODUCT_GROUP
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(catalogs_product_group_update_request)
			l_path := "/catalogs/product_groups/{product_group_id}"
			l_path.replace_substring_all ("{"+"product_group_id"+"}", api_client.url_encode (product_group_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Patch", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_PRODUCT_GROUP } l_response.data ({ CATALOGS_PRODUCT_GROUP }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	feed_processing_results_list (feed_id: STRING_32; bookmark: STRING_32; page_size: INTEGER_32): detachable PAGINATED
			-- List processing results for a given feed
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch a feed processing results owned by the owner user account.
			-- 
			-- argument: feed_id Unique identifier of a feed (required)
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- 
			-- Result PAGINATED
		require
			page_size_is_less_or_equal_than: page_size <= 100
     		page_size_is_greater_or_equal_than: page_size >= 1
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/feeds/{feed_id}/processing_results"
			l_path.replace_substring_all ("{"+"feed_id"+"}", api_client.url_encode (feed_id.out))
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
			elseif attached { PAGINATED } l_response.data ({ PAGINATED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	feeds_create (catalogs_feeds_create_request: CATALOGS_FEEDS_CREATE_REQUEST): detachable CATALOGS_FEED
			-- Create feed
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create a new feed owned by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: catalogs_feeds_create_request Request object used to created a feed. (required)
			-- 
			-- 
			-- Result CATALOGS_FEED
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(catalogs_feeds_create_request)
			l_path := "/catalogs/feeds"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_FEED } l_response.data ({ CATALOGS_FEED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	feeds_delete (feed_id: STRING_32)
			-- Delete feed
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a feed owned by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: feed_id Unique identifier of a feed (required)
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
			
			l_path := "/catalogs/feeds/{feed_id}"
			l_path.replace_substring_all ("{"+"feed_id"+"}", api_client.url_encode (feed_id.out))


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

	feeds_get (feed_id: STRING_32): detachable CATALOGS_FEED
			-- Get feed
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single feed owned by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: feed_id Unique identifier of a feed (required)
			-- 
			-- 
			-- Result CATALOGS_FEED
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/feeds/{feed_id}"
			l_path.replace_substring_all ("{"+"feed_id"+"}", api_client.url_encode (feed_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_FEED } l_response.data ({ CATALOGS_FEED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	feeds_list (bookmark: STRING_32; page_size: INTEGER_32): detachable PAGINATED
			-- List feeds
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch feeds owned by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- 
			-- Result PAGINATED
		require
			page_size_is_less_or_equal_than: page_size <= 100
     		page_size_is_greater_or_equal_than: page_size >= 1
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/feeds"
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
			elseif attached { PAGINATED } l_response.data ({ PAGINATED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	feeds_update (feed_id: STRING_32; catalogs_feeds_update_request: CATALOGS_FEEDS_UPDATE_REQUEST): detachable CATALOGS_FEED
			-- Update feed
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update a feed owned by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: feed_id Unique identifier of a feed (required)
			-- 
			-- argument: catalogs_feeds_update_request Request object used to update a feed. (required)
			-- 
			-- 
			-- Result CATALOGS_FEED
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(catalogs_feeds_update_request)
			l_path := "/catalogs/feeds/{feed_id}"
			l_path.replace_substring_all ("{"+"feed_id"+"}", api_client.url_encode (feed_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Patch", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_FEED } l_response.data ({ CATALOGS_FEED }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	items_batch_get (batch_id: STRING_32): detachable CATALOGS_ITEMS_BATCH
			-- Get catalogs items batch
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single catalogs items batch created by the \&quot;operating user_account\&quot;.
			-- 
			-- argument: batch_id Id of a catalogs items batch to fetch (required)
			-- 
			-- 
			-- Result CATALOGS_ITEMS_BATCH
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/items/batch/{batch_id}"
			l_path.replace_substring_all ("{"+"batch_id"+"}", api_client.url_encode (batch_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_ITEMS_BATCH } l_response.data ({ CATALOGS_ITEMS_BATCH }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	items_batch_post (catalogs_items_batch_request: CATALOGS_ITEMS_BATCH_REQUEST): detachable CATALOGS_ITEMS_BATCH
			-- Perform an operation on an item batch
			-- &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  This endpoint supports multiple operations on a set of one or more catalog items.
			-- 
			-- argument: catalogs_items_batch_request Request object used to create catalogs items in a batch (required)
			-- 
			-- 
			-- Result CATALOGS_ITEMS_BATCH
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(catalogs_items_batch_request)
			l_path := "/catalogs/items/batch"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_ITEMS_BATCH } l_response.data ({ CATALOGS_ITEMS_BATCH }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	items_get (country: STRING_32; item_ids: LIST [STRING_32]; language: STRING_32): detachable CATALOGS_ITEMS
			-- Get catalogs items
			-- Get the items of the catalog created by the \&quot;operating user_account\&quot;
			-- 
			-- argument: country Country for the Catalogs Items (required)
			-- 
			-- argument: item_ids Catalos Item ids (required)
			-- 
			-- argument: language Language for the Catalogs Items (required)
			-- 
			-- 
			-- Result CATALOGS_ITEMS
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/catalogs/items"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "country", country));
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "item_ids", item_ids));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "language", language));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CATALOGS_ITEMS } l_response.data ({ CATALOGS_ITEMS }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end
