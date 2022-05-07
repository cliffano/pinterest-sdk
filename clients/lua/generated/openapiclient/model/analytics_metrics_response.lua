--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- analytics_metrics_response class
local analytics_metrics_response = {}
local analytics_metrics_response_mt = {
	__name = "analytics_metrics_response";
	__index = analytics_metrics_response;
}

local function cast_analytics_metrics_response(t)
	return setmetatable(t, analytics_metrics_response_mt)
end

local function new_analytics_metrics_response(daily_metrics, summary_metrics)
	return cast_analytics_metrics_response({
		["daily_metrics"] = daily_metrics;
		["summary_metrics"] = summary_metrics;
	})
end

return {
	cast = cast_analytics_metrics_response;
	new = new_analytics_metrics_response;
}
