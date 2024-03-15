--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- tracking_urls class
local tracking_urls = {}
local tracking_urls_mt = {
	__name = "tracking_urls";
	__index = tracking_urls;
}

local function cast_tracking_urls(t)
	return setmetatable(t, tracking_urls_mt)
end

local function new_tracking_urls(impression, click, engagement, buyable_button, audience_verification)
	return cast_tracking_urls({
		["impression"] = impression;
		["click"] = click;
		["engagement"] = engagement;
		["buyable_button"] = buyable_button;
		["audience_verification"] = audience_verification;
	})
end

return {
	cast = cast_tracking_urls;
	new = new_tracking_urls;
}
