--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_update_retail_item class
local catalogs_update_retail_item = {}
local catalogs_update_retail_item_mt = {
	__name = "catalogs_update_retail_item";
	__index = catalogs_update_retail_item;
}

local function cast_catalogs_update_retail_item(t)
	return setmetatable(t, catalogs_update_retail_item_mt)
end

local function new_catalogs_update_retail_item(item_id, operation, attributes, update_mask)
	return cast_catalogs_update_retail_item({
		["item_id"] = item_id;
		["operation"] = operation;
		["attributes"] = attributes;
		["update_mask"] = update_mask;
	})
end

return {
	cast = cast_catalogs_update_retail_item;
	new = new_catalogs_update_retail_item;
}