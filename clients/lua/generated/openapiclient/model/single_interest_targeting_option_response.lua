--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- single_interest_targeting_option_response class
local single_interest_targeting_option_response = {}
local single_interest_targeting_option_response_mt = {
	__name = "single_interest_targeting_option_response";
	__index = single_interest_targeting_option_response;
}

local function cast_single_interest_targeting_option_response(t)
	return setmetatable(t, single_interest_targeting_option_response_mt)
end

local function new_single_interest_targeting_option_response(id, name, child_interests, level)
	return cast_single_interest_targeting_option_response({
		["id"] = id;
		["name"] = name;
		["child_interests"] = child_interests;
		["level"] = level;
	})
end

return {
	cast = cast_single_interest_targeting_option_response;
	new = new_single_interest_targeting_option_response;
}