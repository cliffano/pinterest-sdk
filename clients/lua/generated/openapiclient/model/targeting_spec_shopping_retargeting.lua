--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- targeting_spec_shopping_retargeting class
local targeting_spec_shopping_retargeting = {}
local targeting_spec_shopping_retargeting_mt = {
	__name = "targeting_spec_shopping_retargeting";
	__index = targeting_spec_shopping_retargeting;
}

local function cast_targeting_spec_shopping_retargeting(t)
	return setmetatable(t, targeting_spec_shopping_retargeting_mt)
end

local function new_targeting_spec_shopping_retargeting(lookback_window, tag_types, exclusion_window)
	return cast_targeting_spec_shopping_retargeting({
		["lookback_window"] = lookback_window;
		["tag_types"] = tag_types;
		["exclusion_window"] = exclusion_window;
	})
end

return {
	cast = cast_targeting_spec_shopping_retargeting;
	new = new_targeting_spec_shopping_retargeting;
}