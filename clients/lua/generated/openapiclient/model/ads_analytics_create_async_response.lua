--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- ads_analytics_create_async_response class
local ads_analytics_create_async_response = {}
local ads_analytics_create_async_response_mt = {
	__name = "ads_analytics_create_async_response";
	__index = ads_analytics_create_async_response;
}

local function cast_ads_analytics_create_async_response(t)
	return setmetatable(t, ads_analytics_create_async_response_mt)
end

local function new_ads_analytics_create_async_response(report_status, token, message)
	return cast_ads_analytics_create_async_response({
		["report_status"] = report_status;
		["token"] = token;
		["message"] = message;
	})
end

return {
	cast = cast_ads_analytics_create_async_response;
	new = new_ads_analytics_create_async_response;
}
