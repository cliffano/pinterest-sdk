--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- non_nullable_catalogs_currency class
local non_nullable_catalogs_currency = {}
local non_nullable_catalogs_currency_mt = {
	__name = "non_nullable_catalogs_currency";
	__index = non_nullable_catalogs_currency;
}

local function cast_non_nullable_catalogs_currency(t)
	return setmetatable(t, non_nullable_catalogs_currency_mt)
end

local function new_non_nullable_catalogs_currency()
	return cast_non_nullable_catalogs_currency({
	})
end

return {
	cast = cast_non_nullable_catalogs_currency;
	new = new_non_nullable_catalogs_currency;
}
