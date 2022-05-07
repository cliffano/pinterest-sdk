--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_product_group_status class
local catalogs_product_group_status = {}
local catalogs_product_group_status_mt = {
	__name = "catalogs_product_group_status";
	__index = catalogs_product_group_status;
}

local function cast_catalogs_product_group_status(t)
	return setmetatable(t, catalogs_product_group_status_mt)
end

local function new_catalogs_product_group_status()
	return cast_catalogs_product_group_status({
	})
end

return {
	cast = cast_catalogs_product_group_status;
	new = new_catalogs_product_group_status;
}
