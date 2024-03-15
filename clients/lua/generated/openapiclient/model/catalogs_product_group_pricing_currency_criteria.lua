--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_product_group_pricing_currency_criteria class
local catalogs_product_group_pricing_currency_criteria = {}
local catalogs_product_group_pricing_currency_criteria_mt = {
	__name = "catalogs_product_group_pricing_currency_criteria";
	__index = catalogs_product_group_pricing_currency_criteria;
}

local function cast_catalogs_product_group_pricing_currency_criteria(t)
	return setmetatable(t, catalogs_product_group_pricing_currency_criteria_mt)
end

local function new_catalogs_product_group_pricing_currency_criteria(operator, value, currency, negated)
	return cast_catalogs_product_group_pricing_currency_criteria({
		["operator"] = operator;
		["value"] = value;
		["currency"] = currency;
		["negated"] = negated;
	})
end

return {
	cast = cast_catalogs_product_group_pricing_currency_criteria;
	new = new_catalogs_product_group_pricing_currency_criteria;
}
