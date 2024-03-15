--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- related_terms class
local related_terms = {}
local related_terms_mt = {
	__name = "related_terms";
	__index = related_terms;
}

local function cast_related_terms(t)
	return setmetatable(t, related_terms_mt)
end

local function new_related_terms(id, related_term_count, related_terms_list)
	return cast_related_terms({
		["id"] = id;
		["related_term_count"] = related_term_count;
		["related_terms_list"] = related_terms_list;
	})
end

return {
	cast = cast_related_terms;
	new = new_related_terms;
}
