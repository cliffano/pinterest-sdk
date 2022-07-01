--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ads_analytics_filter_column class
local ads_analytics_filter_column = {}
local ads_analytics_filter_column_mt = {
	__name = "ads_analytics_filter_column";
	__index = ads_analytics_filter_column;
}

local function cast_ads_analytics_filter_column(t)
	return setmetatable(t, ads_analytics_filter_column_mt)
end

local function new_ads_analytics_filter_column()
	return cast_ads_analytics_filter_column({
	})
end

return {
	cast = cast_ads_analytics_filter_column;
	new = new_ads_analytics_filter_column;
}
