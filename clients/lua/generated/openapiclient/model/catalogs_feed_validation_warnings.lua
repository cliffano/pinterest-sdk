--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed_validation_warnings class
local catalogs_feed_validation_warnings = {}
local catalogs_feed_validation_warnings_mt = {
	__name = "catalogs_feed_validation_warnings";
	__index = catalogs_feed_validation_warnings;
}

local function cast_catalogs_feed_validation_warnings(t)
	return setmetatable(t, catalogs_feed_validation_warnings_mt)
end

local function new_catalogs_feed_validation_warnings(title_length_too_long, description_length_too_long, gender_invalid, age_group_invalid, size_type_invalid, link_format_warning, duplicate_products, duplicate_links, sales_price_invalid, product_category_depth_warning, adwords_same_as_link, duplicate_headers, fetch_same_signature, adwords_format_warning, additional_image_link_warning, image_link_warning, shipping_invalid, tax_invalid, shipping_weight_invalid, expiration_date_invalid, availability_date_invalid, sale_date_invalid, weight_unit_invalid, is_bundle_invalid, updated_time_invalid, custom_label_length_too_long, product_type_length_too_long, too_many_additional_image_links, multipack_invalid, indexed_product_count_large_delta, item_additional_image_download_failure, optional_product_category_missing, optional_product_category_invalid, optional_condition_missing, optional_condition_invalid, ios_deep_link_invalid, android_deep_link_invalid, availability_normalized, condition_normalized, gender_normalized, size_type_normalized, age_group_normalized, utm_source_auto_corrected, country_does_not_map_to_currency, min_ad_price_invalid)
	return cast_catalogs_feed_validation_warnings({
		["title_length_too_long"] = title_length_too_long;
		["description_length_too_long"] = description_length_too_long;
		["gender_invalid"] = gender_invalid;
		["age_group_invalid"] = age_group_invalid;
		["size_type_invalid"] = size_type_invalid;
		["link_format_warning"] = link_format_warning;
		["duplicate_products"] = duplicate_products;
		["duplicate_links"] = duplicate_links;
		["sales_price_invalid"] = sales_price_invalid;
		["product_category_depth_warning"] = product_category_depth_warning;
		["adwords_same_as_link"] = adwords_same_as_link;
		["duplicate_headers"] = duplicate_headers;
		["fetch_same_signature"] = fetch_same_signature;
		["adwords_format_warning"] = adwords_format_warning;
		["additional_image_link_warning"] = additional_image_link_warning;
		["image_link_warning"] = image_link_warning;
		["shipping_invalid"] = shipping_invalid;
		["tax_invalid"] = tax_invalid;
		["shipping_weight_invalid"] = shipping_weight_invalid;
		["expiration_date_invalid"] = expiration_date_invalid;
		["availability_date_invalid"] = availability_date_invalid;
		["sale_date_invalid"] = sale_date_invalid;
		["weight_unit_invalid"] = weight_unit_invalid;
		["is_bundle_invalid"] = is_bundle_invalid;
		["updated_time_invalid"] = updated_time_invalid;
		["custom_label_length_too_long"] = custom_label_length_too_long;
		["product_type_length_too_long"] = product_type_length_too_long;
		["too_many_additional_image_links"] = too_many_additional_image_links;
		["multipack_invalid"] = multipack_invalid;
		["indexed_product_count_large_delta"] = indexed_product_count_large_delta;
		["item_additional_image_download_failure"] = item_additional_image_download_failure;
		["optional_product_category_missing"] = optional_product_category_missing;
		["optional_product_category_invalid"] = optional_product_category_invalid;
		["optional_condition_missing"] = optional_condition_missing;
		["optional_condition_invalid"] = optional_condition_invalid;
		["ios_deep_link_invalid"] = ios_deep_link_invalid;
		["android_deep_link_invalid"] = android_deep_link_invalid;
		["availability_normalized"] = availability_normalized;
		["condition_normalized"] = condition_normalized;
		["gender_normalized"] = gender_normalized;
		["size_type_normalized"] = size_type_normalized;
		["age_group_normalized"] = age_group_normalized;
		["utm_source_auto_corrected"] = utm_source_auto_corrected;
		["country_does_not_map_to_currency"] = country_does_not_map_to_currency;
		["min_ad_price_invalid"] = min_ad_price_invalid;
	})
end

return {
	cast = cast_catalogs_feed_validation_warnings;
	new = new_catalogs_feed_validation_warnings;
}
