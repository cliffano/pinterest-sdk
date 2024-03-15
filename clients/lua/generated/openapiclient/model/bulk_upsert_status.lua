--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- bulk_upsert_status class
local bulk_upsert_status = {}
local bulk_upsert_status_mt = {
	__name = "bulk_upsert_status";
	__index = bulk_upsert_status;
}

local function cast_bulk_upsert_status(t)
	return setmetatable(t, bulk_upsert_status_mt)
end

local function new_bulk_upsert_status()
	return cast_bulk_upsert_status({
	})
end

return {
	cast = cast_bulk_upsert_status;
	new = new_bulk_upsert_status;
}
