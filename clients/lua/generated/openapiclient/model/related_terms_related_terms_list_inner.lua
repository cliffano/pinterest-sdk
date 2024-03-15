--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- related_terms_related_terms_list_inner class
local related_terms_related_terms_list_inner = {}
local related_terms_related_terms_list_inner_mt = {
	__name = "related_terms_related_terms_list_inner";
	__index = related_terms_related_terms_list_inner;
}

local function cast_related_terms_related_terms_list_inner(t)
	return setmetatable(t, related_terms_related_terms_list_inner_mt)
end

local function new_related_terms_related_terms_list_inner(term, related_terms)
	return cast_related_terms_related_terms_list_inner({
		["term"] = term;
		["related_terms"] = related_terms;
	})
end

return {
	cast = cast_related_terms_related_terms_list_inner;
	new = new_related_terms_related_terms_list_inner;
}
