--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_product_group_filters_any_of class
local catalogs_product_group_filters_any_of = {}
local catalogs_product_group_filters_any_of_mt = {
	__name = "catalogs_product_group_filters_any_of";
	__index = catalogs_product_group_filters_any_of;
}

local function cast_catalogs_product_group_filters_any_of(t)
	return setmetatable(t, catalogs_product_group_filters_any_of_mt)
end

local function new_catalogs_product_group_filters_any_of(any_of)
	return cast_catalogs_product_group_filters_any_of({
		["any_of"] = any_of;
	})
end

return {
	cast = cast_catalogs_product_group_filters_any_of;
	new = new_catalogs_product_group_filters_any_of;
}
