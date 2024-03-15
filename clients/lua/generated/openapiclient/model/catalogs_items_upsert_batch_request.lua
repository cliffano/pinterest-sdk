--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_items_upsert_batch_request class
local catalogs_items_upsert_batch_request = {}
local catalogs_items_upsert_batch_request_mt = {
	__name = "catalogs_items_upsert_batch_request";
	__index = catalogs_items_upsert_batch_request;
}

local function cast_catalogs_items_upsert_batch_request(t)
	return setmetatable(t, catalogs_items_upsert_batch_request_mt)
end

local function new_catalogs_items_upsert_batch_request(country, language, operation, items)
	return cast_catalogs_items_upsert_batch_request({
		["country"] = country;
		["language"] = language;
		["operation"] = operation;
		["items"] = items;
	})
end

return {
	cast = cast_catalogs_items_upsert_batch_request;
	new = new_catalogs_items_upsert_batch_request;
}
