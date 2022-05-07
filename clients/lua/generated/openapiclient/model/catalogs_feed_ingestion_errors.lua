--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed_ingestion_errors class
local catalogs_feed_ingestion_errors = {}
local catalogs_feed_ingestion_errors_mt = {
	__name = "catalogs_feed_ingestion_errors";
	__index = catalogs_feed_ingestion_errors;
}

local function cast_catalogs_feed_ingestion_errors(t)
	return setmetatable(t, catalogs_feed_ingestion_errors_mt)
end

local function new_catalogs_feed_ingestion_errors(image_download_error, image_download_connection_timeout, image_format_unrecognize, line_level_internal_error, large_product_count_decrease)
	return cast_catalogs_feed_ingestion_errors({
		["image_download_error"] = image_download_error;
		["image_download_connection_timeout"] = image_download_connection_timeout;
		["image_format_unrecognize"] = image_format_unrecognize;
		["line_level_internal_error"] = line_level_internal_error;
		["large_product_count_decrease"] = large_product_count_decrease;
	})
end

return {
	cast = cast_catalogs_feed_ingestion_errors;
	new = new_catalogs_feed_ingestion_errors;
}
