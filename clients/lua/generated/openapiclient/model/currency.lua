--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- currency class
local currency = {}
local currency_mt = {
	__name = "currency";
	__index = currency;
}

local function cast_currency(t)
	return setmetatable(t, currency_mt)
end

local function new_currency()
	return cast_currency({
	})
end

return {
	cast = cast_currency;
	new = new_currency;
}