--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- trending_keywords_response class
local trending_keywords_response = {}
local trending_keywords_response_mt = {
	__name = "trending_keywords_response";
	__index = trending_keywords_response;
}

local function cast_trending_keywords_response(t)
	return setmetatable(t, trending_keywords_response_mt)
end

local function new_trending_keywords_response(trends)
	return cast_trending_keywords_response({
		["trends"] = trends;
	})
end

return {
	cast = cast_trending_keywords_response;
	new = new_trending_keywords_response;
}
