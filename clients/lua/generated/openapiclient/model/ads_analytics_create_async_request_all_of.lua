--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ads_analytics_create_async_request_all_of class
local ads_analytics_create_async_request_all_of = {}
local ads_analytics_create_async_request_all_of_mt = {
	__name = "ads_analytics_create_async_request_all_of";
	__index = ads_analytics_create_async_request_all_of;
}

local function cast_ads_analytics_create_async_request_all_of(t)
	return setmetatable(t, ads_analytics_create_async_request_all_of_mt)
end

local function new_ads_analytics_create_async_request_all_of(start_date, end_date, granularity, click_window_days, engagement_window_days, view_window_days, conversion_report_time, attribution_types)
	return cast_ads_analytics_create_async_request_all_of({
		["start_date"] = start_date;
		["end_date"] = end_date;
		["granularity"] = granularity;
		["click_window_days"] = click_window_days;
		["engagement_window_days"] = engagement_window_days;
		["view_window_days"] = view_window_days;
		["conversion_report_time"] = conversion_report_time;
		["attribution_types"] = attribution_types;
	})
end

return {
	cast = cast_ads_analytics_create_async_request_all_of;
	new = new_ads_analytics_create_async_request_all_of;
}
