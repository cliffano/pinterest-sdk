--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- terms_of_service class
local terms_of_service = {}
local terms_of_service_mt = {
	__name = "terms_of_service";
	__index = terms_of_service;
}

local function cast_terms_of_service(t)
	return setmetatable(t, terms_of_service_mt)
end

local function new_terms_of_service(id, html, has_accepted, ad_account_id)
	return cast_terms_of_service({
		["id"] = id;
		["html"] = html;
		["has_accepted"] = has_accepted;
		["ad_account_id"] = ad_account_id;
	})
end

return {
	cast = cast_terms_of_service;
	new = new_terms_of_service;
}
