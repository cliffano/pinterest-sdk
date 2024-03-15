--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_vertical_batch_request class
local catalogs_vertical_batch_request = {}
local catalogs_vertical_batch_request_mt = {
	__name = "catalogs_vertical_batch_request";
	__index = catalogs_vertical_batch_request;
}

local function cast_catalogs_vertical_batch_request(t)
	return setmetatable(t, catalogs_vertical_batch_request_mt)
end

local function new_catalogs_vertical_batch_request(catalog_type, country, language, items, catalog_id)
	return cast_catalogs_vertical_batch_request({
		["catalog_type"] = catalog_type;
		["country"] = country;
		["language"] = language;
		["items"] = items;
		["catalog_id"] = catalog_id;
	})
end

return {
	cast = cast_catalogs_vertical_batch_request;
	new = new_catalogs_vertical_batch_request;
}
