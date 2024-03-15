--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- audiences_list_200_response class
local audiences_list_200_response = {}
local audiences_list_200_response_mt = {
	__name = "audiences_list_200_response";
	__index = audiences_list_200_response;
}

local function cast_audiences_list_200_response(t)
	return setmetatable(t, audiences_list_200_response_mt)
end

local function new_audiences_list_200_response(items, bookmark)
	return cast_audiences_list_200_response({
		["items"] = items;
		["bookmark"] = bookmark;
	})
end

return {
	cast = cast_audiences_list_200_response;
	new = new_audiences_list_200_response;
}