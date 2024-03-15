--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ad_common class
local ad_common = {}
local ad_common_mt = {
	__name = "ad_common";
	__index = ad_common;
}

local function cast_ad_common(t)
	return setmetatable(t, ad_common_mt)
end

local function new_ad_common(ad_group_id, android_deep_link, carousel_android_deep_links, carousel_destination_urls, carousel_ios_deep_links, click_tracking_url, creative_type, destination_url, ios_deep_link, is_pin_deleted, is_removable, name, status, tracking_urls, view_tracking_url, lead_form_id, grid_click_type, customizable_cta_type, quiz_pin_data)
	return cast_ad_common({
		["ad_group_id"] = ad_group_id;
		["android_deep_link"] = android_deep_link;
		["carousel_android_deep_links"] = carousel_android_deep_links;
		["carousel_destination_urls"] = carousel_destination_urls;
		["carousel_ios_deep_links"] = carousel_ios_deep_links;
		["click_tracking_url"] = click_tracking_url;
		["creative_type"] = creative_type;
		["destination_url"] = destination_url;
		["ios_deep_link"] = ios_deep_link;
		["is_pin_deleted"] = is_pin_deleted;
		["is_removable"] = is_removable;
		["name"] = name;
		["status"] = status;
		["tracking_urls"] = tracking_urls;
		["view_tracking_url"] = view_tracking_url;
		["lead_form_id"] = lead_form_id;
		["grid_click_type"] = grid_click_type;
		["customizable_cta_type"] = customizable_cta_type;
		["quiz_pin_data"] = quiz_pin_data;
	})
end

return {
	cast = cast_ad_common;
	new = new_ad_common;
}