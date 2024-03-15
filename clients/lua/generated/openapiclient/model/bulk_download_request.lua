--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- bulk_download_request class
local bulk_download_request = {}
local bulk_download_request_mt = {
	__name = "bulk_download_request";
	__index = bulk_download_request;
}

local function cast_bulk_download_request(t)
	return setmetatable(t, bulk_download_request_mt)
end

local function new_bulk_download_request(entity_types, entity_ids, updated_since, campaign_filter, output_format)
	return cast_bulk_download_request({
		["entity_types"] = entity_types;
		["entity_ids"] = entity_ids;
		["updated_since"] = updated_since;
		["campaign_filter"] = campaign_filter;
		["output_format"] = output_format;
	})
end

return {
	cast = cast_bulk_download_request;
	new = new_bulk_download_request;
}
