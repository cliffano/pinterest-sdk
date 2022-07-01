--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
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

local function new_catalogs_items_batch(items, batch_id, created_time, completed_time, status)
	return cast_catalogs_items_batch({
		["items"] = items;
		["batch_id"] = batch_id;
		["created_time"] = created_time;
		["completed_time"] = completed_time;
		["status"] = status;
	})
end

return {
	cast = cast_catalogs_items_batch;
	new = new_catalogs_items_batch;
}
