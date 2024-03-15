--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ad_response class
local ad_response = {}
local ad_response_mt = {
	__name = "ad_response";
	__index = ad_response;
}

local function cast_ad_response(t)
	return setmetatable(t, ad_response_mt)
end

local function new_ad_response(ad_group_id, android_deep_link, carousel_android_deep_links, carousel_destination_urls, carousel_ios_deep_links, click_tracking_url, creative_type, destination_url, ios_deep_link, is_pin_deleted, is_removable, name, status, tracking_urls, view_tracking_url, lead_form_id, grid_click_type, customizable_cta_type, quiz_pin_data, pin_id, ad_account_id, campaign_id, collection_items_destination_url_template, created_time, id, rejected_reasons, rejection_labels, review_status, type, updated_time, summary_status)
	return cast_ad_response({
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
		["pin_id"] = pin_id;
		["ad_account_id"] = ad_account_id;
		["campaign_id"] = campaign_id;
		["collection_items_destination_url_template"] = collection_items_destination_url_template;
		["created_time"] = created_time;
		["id"] = id;
		["rejected_reasons"] = rejected_reasons;
		["rejection_labels"] = rejection_labels;
		["review_status"] = review_status;
		["type"] = type;
		["updated_time"] = updated_time;
		["summary_status"] = summary_status;
	})
end

return {
	cast = cast_ad_response;
	new = new_ad_response;
}
