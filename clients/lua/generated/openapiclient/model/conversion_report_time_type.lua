--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- conversion_report_time_type class
local conversion_report_time_type = {}
local conversion_report_time_type_mt = {
	__name = "conversion_report_time_type";
	__index = conversion_report_time_type;
}

local function cast_conversion_report_time_type(t)
	return setmetatable(t, conversion_report_time_type_mt)
end

local function new_conversion_report_time_type()
	return cast_conversion_report_time_type({
	})
end

return {
	cast = cast_conversion_report_time_type;
	new = new_conversion_report_time_type;
}