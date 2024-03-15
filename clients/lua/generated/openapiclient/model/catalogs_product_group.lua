--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_product_group class
local catalogs_product_group = {}
local catalogs_product_group_mt = {
	__name = "catalogs_product_group";
	__index = catalogs_product_group;
}

local function cast_catalogs_product_group(t)
	return setmetatable(t, catalogs_product_group_mt)
end

local function new_catalogs_product_group(id, name, description, filters, is_featured, type, status, created_at, updated_at, feed_id, catalog_type)
	return cast_catalogs_product_group({
		["id"] = id;
		["name"] = name;
		["description"] = description;
		["filters"] = filters;
		["is_featured"] = is_featured;
		["type"] = type;
		["status"] = status;
		["created_at"] = created_at;
		["updated_at"] = updated_at;
		["feed_id"] = feed_id;
		["catalog_type"] = catalog_type;
	})
end

return {
	cast = cast_catalogs_product_group;
	new = new_catalogs_product_group;
}