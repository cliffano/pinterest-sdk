--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_items_batch class
local catalogs_items_batch = {}
local catalogs_items_batch_mt = {
	__name = "catalogs_items_batch";
	__index = catalogs_items_batch;
}

local function cast_catalogs_items_batch(t)
	return setmetatable(t, catalogs_items_batch_mt)
end

local function new_catalogs_items_batch(catalog_type, batch_id, created_time, completed_time, status, items)
	return cast_catalogs_items_batch({
		["catalog_type"] = catalog_type;
		["batch_id"] = batch_id;
		["created_time"] = created_time;
		["completed_time"] = completed_time;
		["status"] = status;
		["items"] = items;
	})
end

return {
	cast = cast_catalogs_items_batch;
	new = new_catalogs_items_batch;
}
