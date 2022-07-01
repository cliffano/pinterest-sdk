--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- product_type3_filter class
local product_type3_filter = {}
local product_type3_filter_mt = {
	__name = "product_type3_filter";
	__index = product_type3_filter;
}

local function cast_product_type3_filter(t)
	return setmetatable(t, product_type3_filter_mt)
end

local function new_product_type3_filter(product_type_3)
	return cast_product_type3_filter({
		["PRODUCT_TYPE_3"] = product_type_3;
	})
end

return {
	cast = cast_product_type3_filter;
	new = new_product_type3_filter;
}
