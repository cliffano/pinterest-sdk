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
	ADACCOUNTS_API

inherit

    API_I


feature -- API Access


	ad_account_analytics (ad_account_id: STRING_32; start_date: DATE; end_date: DATE; columns: LIST [STRING_32]; granularity: GRANULARITY; click_window_days: INTEGER_32; engagement_window_days: INTEGER_32; view_window_days: INTEGER_32; conversion_report_time: STRING_32): detachable LIST [AD_ACCOUNT_ANALYTICS_RESPONSE_INNER]
			-- Get ad account analytics
			-- Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: start_date Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. (required)
			-- 
			-- argument: end_date Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. (required)
			-- 
			-- argument: columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned (required)
			-- 
			-- argument: granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (required)
			-- 
			-- argument: click_window_days Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
			-- 
			-- argument: engagement_window_days Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
			-- 
			-- argument: view_window_days Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)
			-- 
			-- argument: conversion_report_time The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to TIME_OF_AD_ACTION)
			-- 
			-- 
			-- Result LIST [AD_ACCOUNT_ANALYTICS_RESPONSE_INNER]
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/analytics"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "start_date", start_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "end_date", end_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("csv", "columns", columns));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "granularity", granularity));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "click_window_days", click_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "engagement_window_days", engagement_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "view_window_days", view_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "conversion_report_time", conversion_report_time));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { LIST [AD_ACCOUNT_ANALYTICS_RESPONSE_INNER] } l_response.data ({ LIST [AD_ACCOUNT_ANALYTICS_RESPONSE_INNER] }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_account_targeting_analytics_get (ad_account_id: STRING_32; start_date: DATE; end_date: DATE; targeting_types: LIST [ADS_ANALYTICS_TARGETING_TYPE]; columns: LIST [STRING_32]; granularity: GRANULARITY; click_window_days: INTEGER_32; engagement_window_days: INTEGER_32; view_window_days: INTEGER_32; conversion_report_time: STRING_32; attribution_types: detachable CONVERSION_REPORT_ATTRIBUTION_TYPE): detachable METRICS_RESPONSE
			-- Get targeting analytics for an ad account
			-- Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: start_date Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. (required)
			-- 
			-- argument: end_date Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. (required)
			-- 
			-- argument: targeting_types Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other. (required)
			-- 
			-- argument: columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned (required)
			-- 
			-- argument: granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (required)
			-- 
			-- argument: click_window_days Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
			-- 
			-- argument: engagement_window_days Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)
			-- 
			-- argument: view_window_days Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)
			-- 
			-- argument: conversion_report_time The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to TIME_OF_AD_ACTION)
			-- 
			-- argument: attribution_types List of types of attribution for the conversion report (optional, default to null)
			-- 
			-- 
			-- Result METRICS_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/targeting_analytics"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "start_date", start_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "end_date", end_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("csv", "targeting_types", targeting_types));
			l_request.fill_query_params(api_client.parameter_to_tuple("csv", "columns", columns));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "granularity", granularity));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "click_window_days", click_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "engagement_window_days", engagement_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "view_window_days", view_window_days));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "conversion_report_time", conversion_report_time));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "attribution_types", attribution_types));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { METRICS_RESPONSE } l_response.data ({ METRICS_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_accounts_create (ad_account_create_request: AD_ACCOUNT_CREATE_REQUEST): detachable AD_ACCOUNT
			-- Create ad account
			-- Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. &lt;p/&gt; You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/create-an-advertiser-account\&quot;&gt;Create an advertiser account&lt;/a&gt;.
			-- 
			-- argument: ad_account_create_request Ad account to create. (required)
			-- 
			-- 
			-- Result AD_ACCOUNT
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(ad_account_create_request)
			l_path := "/ad_accounts"


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_ACCOUNT } l_response.data ({ AD_ACCOUNT }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_accounts_get (ad_account_id: STRING_32): detachable AD_ACCOUNT
			-- Get ad account
			-- Get an ad account
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- 
			-- Result AD_ACCOUNT
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_ACCOUNT } l_response.data ({ AD_ACCOUNT }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_accounts_list (bookmark: STRING_32; page_size: INTEGER_32; include_shared_accounts: BOOLEAN): detachable AD_ACCOUNTS_LIST_200_RESPONSE
			-- List ad accounts
			-- Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- argument: include_shared_accounts Include shared ad accounts (optional, default to true)
			-- 
			-- 
			-- Result AD_ACCOUNTS_LIST_200_RESPONSE
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
			
			l_path := "/ad_accounts"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "bookmark", bookmark));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "page_size", page_size));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "include_shared_accounts", include_shared_accounts));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_ACCOUNTS_LIST_200_RESPONSE } l_response.data ({ AD_ACCOUNTS_LIST_200_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	analytics_create_mmm_report (ad_account_id: STRING_32; create_mmm_report_request: CREATE_MMM_REPORT_REQUEST): detachable CREATE_MMM_REPORT_RESPONSE
			-- Create a request for a Marketing Mix Modeling (MMM) report
			-- This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it&#39;s in beta release.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: create_mmm_report_request  (required)
			-- 
			-- 
			-- Result CREATE_MMM_REPORT_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(create_mmm_report_request)
			l_path := "/ad_accounts/{ad_account_id}/mmm_reports"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { CREATE_MMM_REPORT_RESPONSE } l_response.data ({ CREATE_MMM_REPORT_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	analytics_create_report (ad_account_id: STRING_32; ads_analytics_create_async_request: ADS_ANALYTICS_CREATE_ASYNC_REQUEST): detachable ADS_ANALYTICS_CREATE_ASYNC_RESPONSE
			-- Create async request for an account analytics report
			-- This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days. - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days. - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ads_analytics_create_async_request  (required)
			-- 
			-- 
			-- Result ADS_ANALYTICS_CREATE_ASYNC_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(ads_analytics_create_async_request)
			l_path := "/ad_accounts/{ad_account_id}/reports"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ADS_ANALYTICS_CREATE_ASYNC_RESPONSE } l_response.data ({ ADS_ANALYTICS_CREATE_ASYNC_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	analytics_create_template_report (ad_account_id: STRING_32; template_id: STRING_32; start_date: DATE; end_date: DATE; granularity: detachable GRANULARITY): detachable ADS_ANALYTICS_CREATE_ASYNC_RESPONSE
			-- Create async request for an analytics report using a template
			-- This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the template. It returns a token that you can use to download the report when it is ready.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: template_id Unique identifier of a template. (required)
			-- 
			-- argument: start_date Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years back from today. (optional, default to null)
			-- 
			-- argument: end_date Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years past start date. (optional, default to null)
			-- 
			-- argument: granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (optional, default to null)
			-- 
			-- 
			-- Result ADS_ANALYTICS_CREATE_ASYNC_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/templates/{template_id}/reports"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_path.replace_substring_all ("{"+"template_id"+"}", api_client.url_encode (template_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "start_date", start_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "end_date", end_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "granularity", granularity));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ADS_ANALYTICS_CREATE_ASYNC_RESPONSE } l_response.data ({ ADS_ANALYTICS_CREATE_ASYNC_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	analytics_get_mmm_report (ad_account_id: STRING_32; token: STRING_32): detachable GET_MMM_REPORT_RESPONSE
			-- Get advertiser Marketing Mix Modeling (MMM) report.
			-- Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the create mmm report endpoint.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: token Token returned from the post request creation call (required)
			-- 
			-- 
			-- Result GET_MMM_REPORT_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/mmm_reports"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "token", token));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { GET_MMM_REPORT_RESPONSE } l_response.data ({ GET_MMM_REPORT_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	analytics_get_report (ad_account_id: STRING_32; token: STRING_32): detachable ADS_ANALYTICS_GET_ASYNC_RESPONSE
			-- Get the account analytics report created by the async call
			-- This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: token Token returned from the post request creation call (required)
			-- 
			-- 
			-- Result ADS_ANALYTICS_GET_ASYNC_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/reports"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "token", token));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ADS_ANALYTICS_GET_ASYNC_RESPONSE } l_response.data ({ ADS_ANALYTICS_GET_ASYNC_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	sandbox_delete (ad_account_id: STRING_32): detachable STRING_32
			-- Delete ads data for ad account in API Sandbox
			-- Delete an ad account and all the ads data associated with that account.  A string message is returned indicating the status of the delete operation.  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5).  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- 
			-- Result STRING_32
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/sandbox"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Delete", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { STRING_32 } l_response.data ({ STRING_32 }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	templates_list (ad_account_id: STRING_32; page_size: INTEGER_32; order: STRING_32; bookmark: STRING_32): detachable TEMPLATES_LIST_200_RESPONSE
			-- List templates
			-- Gets all Templates associated with an ad account ID.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- argument: order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional, default to null)
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- 
			-- Result TEMPLATES_LIST_200_RESPONSE
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
			
			l_path := "/ad_accounts/{ad_account_id}/templates"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "page_size", page_size));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "order", order));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "bookmark", bookmark));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { TEMPLATES_LIST_200_RESPONSE } l_response.data ({ TEMPLATES_LIST_200_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end
