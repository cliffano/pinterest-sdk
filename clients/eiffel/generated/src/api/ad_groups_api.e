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
	ADGROUPS_API

inherit

    API_I


feature -- API Access


	ad_groups_analytics (ad_account_id: STRING_32; start_date: DATE; end_date: DATE; ad_group_ids: LIST [STRING_32]; columns: LIST [STRING_32]; granularity: GRANULARITY; click_window_days: INTEGER_32; engagement_window_days: INTEGER_32; view_window_days: INTEGER_32; conversion_report_time: STRING_32): detachable LIST [AD_GROUPS_ANALYTICS_RESPONSE_INNER]
			-- Get ad group analytics
			-- Get analytics for the specified ad groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: start_date Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. (required)
			-- 
			-- argument: end_date Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. (required)
			-- 
			-- argument: ad_group_ids List of Ad group Ids to use to filter the results. (required)
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
			-- Result LIST [AD_GROUPS_ANALYTICS_RESPONSE_INNER]
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/ad_groups/analytics"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("", "start_date", start_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "end_date", end_date));
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "ad_group_ids", ad_group_ids));
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
			elseif attached { LIST [AD_GROUPS_ANALYTICS_RESPONSE_INNER] } l_response.data ({ LIST [AD_GROUPS_ANALYTICS_RESPONSE_INNER] }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_audience_sizing (ad_account_id: STRING_32; ad_group_audience_sizing_request: detachable AD_GROUP_AUDIENCE_SIZING_REQUEST): detachable AD_GROUP_AUDIENCE_SIZING_RESPONSE
			-- Get audience sizing
			-- Get potential audience size for an ad group with given targeting criteria.  Potential audience size estimates the number of people you may be able to reach per month with your campaign.  It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ad_group_audience_sizing_request  (optional)
			-- 
			-- 
			-- Result AD_GROUP_AUDIENCE_SIZING_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(ad_group_audience_sizing_request)
			l_path := "/ad_accounts/{ad_account_id}/ad_groups/audience_sizing"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_GROUP_AUDIENCE_SIZING_RESPONSE } l_response.data ({ AD_GROUP_AUDIENCE_SIZING_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_bid_floor_get (ad_account_id: STRING_32; bid_floor_request: BID_FLOOR_REQUEST): detachable BID_FLOOR
			-- Get bid floors
			-- List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; For more on bid floors see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-your-bid\&quot;&gt; Set your bid&lt;/a&gt;.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: bid_floor_request Parameters to get bid_floor info (required)
			-- 
			-- 
			-- Result BID_FLOOR
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(bid_floor_request)
			l_path := "/ad_accounts/{ad_account_id}/bid_floor"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { BID_FLOOR } l_response.data ({ BID_FLOOR }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_create (ad_account_id: STRING_32; ad_group_create_request: LIST [AD_GROUP_CREATE_REQUEST]): detachable AD_GROUP_ARRAY_RESPONSE
			-- Create ad groups
			-- Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/campaign-structure\&quot; target&#x3D;\&quot;_blank\&quot;&gt; click here&lt;/a&gt;.&lt;/p&gt; &lt;strong&gt;Note:&lt;/strong&gt; - &#39;bid_in_micro_currency&#39; and &#39;budget_in_micro_currency&#39; should be expressed in microcurrency amounts based on the currency field set in the advertiser&#39;s profile.&lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message. - Start and end time cannot be set for ad groups that belong to CBO campaigns. Currently, campaigns with the following objective types: TRAFFIC, AWARENESS, WEB_CONVERSIONS, and CATALOG_SALES will default to CBO.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ad_group_create_request List of ad groups to create, size limit [1, 30]. (required)
			-- 
			-- 
			-- Result AD_GROUP_ARRAY_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(ad_group_create_request)
			l_path := "/ad_accounts/{ad_account_id}/ad_groups"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_GROUP_ARRAY_RESPONSE } l_response.data ({ AD_GROUP_ARRAY_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_get (ad_account_id: STRING_32; ad_group_id: STRING_32): detachable AD_GROUP_RESPONSE
			-- Get ad group
			-- Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ad_group_id Unique identifier of an ad group. (required)
			-- 
			-- 
			-- Result AD_GROUP_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/ad_accounts/{ad_account_id}/ad_groups/{ad_group_id}"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_path.replace_substring_all ("{"+"ad_group_id"+"}", api_client.url_encode (ad_group_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_GROUP_RESPONSE } l_response.data ({ AD_GROUP_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_list (ad_account_id: STRING_32; campaign_ids: detachable LIST [STRING_32]; ad_group_ids: detachable LIST [STRING_32]; entity_statuses: detachable LIST [STRING_32]; page_size: INTEGER_32; order: STRING_32; bookmark: STRING_32; translate_interests_to_names: BOOLEAN): detachable AD_GROUPS_LIST_200_RESPONSE
			-- List ad groups
			-- List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id. Do not provide both.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: campaign_ids List of Campaign Ids to use to filter the results. (optional, default to null)
			-- 
			-- argument: ad_group_ids List of Ad group Ids to use to filter the results. (optional, default to null)
			-- 
			-- argument: entity_statuses Entity status (optional, default to ["ACTIVE","PAUSED"])
			-- 
			-- argument: page_size Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
			-- 
			-- argument: order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional, default to null)
			-- 
			-- argument: bookmark Cursor used to fetch the next page of items (optional, default to null)
			-- 
			-- argument: translate_interests_to_names Return interests as text names (if value is true) rather than topic IDs. (optional, default to false)
			-- 
			-- 
			-- Result AD_GROUPS_LIST_200_RESPONSE
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
			
			l_path := "/ad_accounts/{ad_account_id}/ad_groups"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "campaign_ids", campaign_ids));
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "ad_group_ids", ad_group_ids));
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "entity_statuses", entity_statuses));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "page_size", page_size));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "order", order));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "bookmark", bookmark));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "translate_interests_to_names", translate_interests_to_names));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_GROUPS_LIST_200_RESPONSE } l_response.data ({ AD_GROUPS_LIST_200_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	ad_groups_targeting_analytics_get (ad_account_id: STRING_32; ad_group_ids: LIST [STRING_32]; start_date: DATE; end_date: DATE; targeting_types: LIST [ADS_ANALYTICS_TARGETING_TYPE]; columns: LIST [STRING_32]; granularity: GRANULARITY; click_window_days: INTEGER_32; engagement_window_days: INTEGER_32; view_window_days: INTEGER_32; conversion_report_time: STRING_32; attribution_types: detachable CONVERSION_REPORT_ATTRIBUTION_TYPE): detachable METRICS_RESPONSE
			-- Get targeting analytics for ad groups
			-- Get targeting analytics for one or more ad groups. For the requested ad group(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ad_group_ids List of Ad group Ids to use to filter the results. (required)
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
			
			l_path := "/ad_accounts/{ad_account_id}/ad_groups/targeting_analytics"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))
			l_request.fill_query_params(api_client.parameter_to_tuple("multi", "ad_group_ids", ad_group_ids));
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

	ad_groups_update (ad_account_id: STRING_32; ad_group_update_request: LIST [AD_GROUP_UPDATE_REQUEST]): detachable AD_GROUP_ARRAY_RESPONSE
			-- Update ad groups
			-- Update multiple existing ad groups.
			-- 
			-- argument: ad_account_id Unique identifier of an ad account. (required)
			-- 
			-- argument: ad_group_update_request List of ad groups to update, size limit [1, 30]. (required)
			-- 
			-- 
			-- Result AD_GROUP_ARRAY_RESPONSE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(ad_group_update_request)
			l_path := "/ad_accounts/{ad_account_id}/ad_groups"
			l_path.replace_substring_all ("{"+"ad_account_id"+"}", api_client.url_encode (ad_account_id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<"application/json">>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<"pinterest_oauth2">>)
			l_response := api_client.call_api (l_path, "Patch", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { AD_GROUP_ARRAY_RESPONSE } l_response.data ({ AD_GROUP_ARRAY_RESPONSE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end