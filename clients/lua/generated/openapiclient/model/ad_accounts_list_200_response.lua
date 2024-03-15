--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ad_accounts_list_200_response class
local ad_accounts_list_200_response = {}
local ad_accounts_list_200_response_mt = {
	__name = "ad_accounts_list_200_response";
	__index = ad_accounts_list_200_response;
}

local function cast_ad_accounts_list_200_response(t)
	return setmetatable(t, ad_accounts_list_200_response_mt)
end

local function new_ad_accounts_list_200_response(items, bookmark)
	return cast_ad_accounts_list_200_response({
		["items"] = items;
		["bookmark"] = bookmark;
	})
end

return {
	cast = cast_ad_accounts_list_200_response;
	new = new_ad_accounts_list_200_response;
}
