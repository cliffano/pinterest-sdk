--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ad_account_analytics_response_inner class
local ad_account_analytics_response_inner = {}
local ad_account_analytics_response_inner_mt = {
	__name = "ad_account_analytics_response_inner";
	__index = ad_account_analytics_response_inner;
}

local function cast_ad_account_analytics_response_inner(t)
	return setmetatable(t, ad_account_analytics_response_inner_mt)
end

local function new_ad_account_analytics_response_inner(AD_ACCOUNT_ID, DATE)
	return cast_ad_account_analytics_response_inner({
		["AD_ACCOUNT_ID"] = AD_ACCOUNT_ID;
		["DATE"] = DATE;
	})
end

return {
	cast = cast_ad_account_analytics_response_inner;
	new = new_ad_account_analytics_response_inner;
}
