--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- item_attributes class
local item_attributes = {}
local item_attributes_mt = {
	__name = "item_attributes";
	__index = item_attributes;
}

local function cast_item_attributes(t)
	return setmetatable(t, item_attributes_mt)
end

local function new_item_attributes(ad_link, additional_image_link, adult, age_group, availability, average_review_rating, brand, color, condition, custom_label_0, custom_label_1, custom_label_2, custom_label_3, custom_label_4, description, free_shipping_label, free_shipping_limit, gender, google_product_category, gtin, id, image_link, item_group_id, last_updated_time, link, material, min_ad_price, mobile_link, mpn, number_of_ratings, number_of_reviews, pattern, price, product_type, sale_price, shipping, shipping_height, shipping_weight, shipping_width, size, size_system, size_type, tax, title)
	return cast_item_attributes({
		["ad_link"] = ad_link;
		["additional_image_link"] = additional_image_link;
		["adult"] = adult;
		["age_group"] = age_group;
		["availability"] = availability;
		["average_review_rating"] = average_review_rating;
		["brand"] = brand;
		["color"] = color;
		["condition"] = condition;
		["custom_label_0"] = custom_label_0;
		["custom_label_1"] = custom_label_1;
		["custom_label_2"] = custom_label_2;
		["custom_label_3"] = custom_label_3;
		["custom_label_4"] = custom_label_4;
		["description"] = description;
		["free_shipping_label"] = free_shipping_label;
		["free_shipping_limit"] = free_shipping_limit;
		["gender"] = gender;
		["google_product_category"] = google_product_category;
		["gtin"] = gtin;
		["id"] = id;
		["image_link"] = image_link;
		["item_group_id"] = item_group_id;
		["last_updated_time"] = last_updated_time;
		["link"] = link;
		["material"] = material;
		["min_ad_price"] = min_ad_price;
		["mobile_link"] = mobile_link;
		["mpn"] = mpn;
		["number_of_ratings"] = number_of_ratings;
		["number_of_reviews"] = number_of_reviews;
		["pattern"] = pattern;
		["price"] = price;
		["product_type"] = product_type;
		["sale_price"] = sale_price;
		["shipping"] = shipping;
		["shipping_height"] = shipping_height;
		["shipping_weight"] = shipping_weight;
		["shipping_width"] = shipping_width;
		["size"] = size;
		["size_system"] = size_system;
		["size_type"] = size_type;
		["tax"] = tax;
		["title"] = title;
	})
end

return {
	cast = cast_item_attributes;
	new = new_item_attributes;
}
