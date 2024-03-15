--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- custom_label2_filter class
local custom_label2_filter = {}
local custom_label2_filter_mt = {
	__name = "custom_label2_filter";
	__index = custom_label2_filter;
}

local function cast_custom_label2_filter(t)
	return setmetatable(t, custom_label2_filter_mt)
end

local function new_custom_label2_filter(custom_label_2)
	return cast_custom_label2_filter({
		["CUSTOM_LABEL_2"] = custom_label_2;
	})
end

return {
	cast = cast_custom_label2_filter;
	new = new_custom_label2_filter;
}
