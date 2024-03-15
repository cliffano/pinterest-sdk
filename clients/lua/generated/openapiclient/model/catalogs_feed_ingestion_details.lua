--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed_ingestion_details class
local catalogs_feed_ingestion_details = {}
local catalogs_feed_ingestion_details_mt = {
	__name = "catalogs_feed_ingestion_details";
	__index = catalogs_feed_ingestion_details;
}

local function cast_catalogs_feed_ingestion_details(t)
	return setmetatable(t, catalogs_feed_ingestion_details_mt)
end

local function new_catalogs_feed_ingestion_details(errors, info, warnings)
	return cast_catalogs_feed_ingestion_details({
		["errors"] = errors;
		["info"] = info;
		["warnings"] = warnings;
	})
end

return {
	cast = cast_catalogs_feed_ingestion_details;
	new = new_catalogs_feed_ingestion_details;
}
