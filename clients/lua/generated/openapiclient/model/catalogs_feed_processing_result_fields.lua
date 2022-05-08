--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed_processing_result_fields class
local catalogs_feed_processing_result_fields = {}
local catalogs_feed_processing_result_fields_mt = {
	__name = "catalogs_feed_processing_result_fields";
	__index = catalogs_feed_processing_result_fields;
}

local function cast_catalogs_feed_processing_result_fields(t)
	return setmetatable(t, catalogs_feed_processing_result_fields_mt)
end

local function new_catalogs_feed_processing_result_fields(ingestion_details, status, product_counts, validation_details)
	return cast_catalogs_feed_processing_result_fields({
		["ingestion_details"] = ingestion_details;
		["status"] = status;
		["product_counts"] = product_counts;
		["validation_details"] = validation_details;
	})
end

return {
	cast = cast_catalogs_feed_processing_result_fields;
	new = new_catalogs_feed_processing_result_fields;
}