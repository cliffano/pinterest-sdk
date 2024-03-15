--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pin_analytics_metrics_response class
local pin_analytics_metrics_response = {}
local pin_analytics_metrics_response_mt = {
	__name = "pin_analytics_metrics_response";
	__index = pin_analytics_metrics_response;
}

local function cast_pin_analytics_metrics_response(t)
	return setmetatable(t, pin_analytics_metrics_response_mt)
end

local function new_pin_analytics_metrics_response(lifetime_metrics, daily_metrics, summary_metrics)
	return cast_pin_analytics_metrics_response({
		["lifetime_metrics"] = lifetime_metrics;
		["daily_metrics"] = daily_metrics;
		["summary_metrics"] = summary_metrics;
	})
end

return {
	cast = cast_pin_analytics_metrics_response;
	new = new_pin_analytics_metrics_response;
}