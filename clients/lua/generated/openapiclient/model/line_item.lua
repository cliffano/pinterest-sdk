--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- line_item class
local line_item = {}
local line_item_mt = {
	__name = "line_item";
	__index = line_item;
}

local function cast_line_item(t)
	return setmetatable(t, line_item_mt)
end

local function new_line_item(product_brand, product_category, product_id, product_name, product_price, product_quantity, product_variant, product_variant_id)
	return cast_line_item({
		["product_brand"] = product_brand;
		["product_category"] = product_category;
		["product_id"] = product_id;
		["product_name"] = product_name;
		["product_price"] = product_price;
		["product_quantity"] = product_quantity;
		["product_variant"] = product_variant;
		["product_variant_id"] = product_variant_id;
	})
end

return {
	cast = cast_line_item;
	new = new_line_item;
}