--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ad_group_array_response class
local ad_group_array_response = {}
local ad_group_array_response_mt = {
	__name = "ad_group_array_response";
	__index = ad_group_array_response;
}

local function cast_ad_group_array_response(t)
	return setmetatable(t, ad_group_array_response_mt)
end

local function new_ad_group_array_response(items)
	return cast_ad_group_array_response({
		["items"] = items;
	})
end

return {
	cast = cast_ad_group_array_response;
	new = new_ad_group_array_response;
}