--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- campaign_common class
local campaign_common = {}
local campaign_common_mt = {
	__name = "campaign_common";
	__index = campaign_common;
}

local function cast_campaign_common(t)
	return setmetatable(t, campaign_common_mt)
end

local function new_campaign_common(ad_account_id, name, status, lifetime_spend_cap, daily_spend_cap, order_line_id, tracking_urls, start_time, end_time)
	return cast_campaign_common({
		["ad_account_id"] = ad_account_id;
		["name"] = name;
		["status"] = status;
		["lifetime_spend_cap"] = lifetime_spend_cap;
		["daily_spend_cap"] = daily_spend_cap;
		["order_line_id"] = order_line_id;
		["tracking_urls"] = tracking_urls;
		["start_time"] = start_time;
		["end_time"] = end_time;
	})
end

return {
	cast = cast_campaign_common;
	new = new_campaign_common;
}
