--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_product_group_currency_criteria class
local catalogs_product_group_currency_criteria = {}
local catalogs_product_group_currency_criteria_mt = {
	__name = "catalogs_product_group_currency_criteria";
	__index = catalogs_product_group_currency_criteria;
}

local function cast_catalogs_product_group_currency_criteria(t)
	return setmetatable(t, catalogs_product_group_currency_criteria_mt)
end

local function new_catalogs_product_group_currency_criteria(values, negated)
	return cast_catalogs_product_group_currency_criteria({
		["values"] = values;
		["negated"] = negated;
	})
end

return {
	cast = cast_catalogs_product_group_currency_criteria;
	new = new_catalogs_product_group_currency_criteria;
}
