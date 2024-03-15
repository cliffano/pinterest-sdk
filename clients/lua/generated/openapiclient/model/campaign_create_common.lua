--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- campaign_create_common class
local campaign_create_common = {}
local campaign_create_common_mt = {
	__name = "campaign_create_common";
	__index = campaign_create_common;
}

local function cast_campaign_create_common(t)
	return setmetatable(t, campaign_create_common_mt)
end

local function new_campaign_create_common(ad_account_id, name, status, lifetime_spend_cap, daily_spend_cap, order_line_id, tracking_urls, start_time, end_time, summary_status, is_flexible_daily_budgets, default_ad_group_budget_in_micro_currency, is_automated_campaign)
	return cast_campaign_create_common({
		["ad_account_id"] = ad_account_id;
		["name"] = name;
		["status"] = status;
		["lifetime_spend_cap"] = lifetime_spend_cap;
		["daily_spend_cap"] = daily_spend_cap;
		["order_line_id"] = order_line_id;
		["tracking_urls"] = tracking_urls;
		["start_time"] = start_time;
		["end_time"] = end_time;
		["summary_status"] = summary_status;
		["is_flexible_daily_budgets"] = is_flexible_daily_budgets;
		["default_ad_group_budget_in_micro_currency"] = default_ad_group_budget_in_micro_currency;
		["is_automated_campaign"] = is_automated_campaign;
	})
end

return {
	cast = cast_campaign_create_common;
	new = new_campaign_create_common;
}