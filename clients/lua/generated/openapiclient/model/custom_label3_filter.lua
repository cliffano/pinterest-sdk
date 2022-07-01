--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- custom_label3_filter class
local custom_label3_filter = {}
local custom_label3_filter_mt = {
	__name = "custom_label3_filter";
	__index = custom_label3_filter;
}

local function cast_custom_label3_filter(t)
	return setmetatable(t, custom_label3_filter_mt)
end

local function new_custom_label3_filter(custom_label_3)
	return cast_custom_label3_filter({
		["CUSTOM_LABEL_3"] = custom_label_3;
	})
end

return {
	cast = cast_custom_label3_filter;
	new = new_custom_label3_filter;
}
