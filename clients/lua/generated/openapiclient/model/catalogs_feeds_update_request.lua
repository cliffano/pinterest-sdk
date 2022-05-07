--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feeds_update_request class
local catalogs_feeds_update_request = {}
local catalogs_feeds_update_request_mt = {
	__name = "catalogs_feeds_update_request";
	__index = catalogs_feeds_update_request;
}

local function cast_catalogs_feeds_update_request(t)
	return setmetatable(t, catalogs_feeds_update_request_mt)
end

local function new_catalogs_feeds_update_request(default_availability, default_currency, name, format, credentials, location, preferred_processing_schedule, status)
	return cast_catalogs_feeds_update_request({
		["default_availability"] = default_availability;
		["default_currency"] = default_currency;
		["name"] = name;
		["format"] = format;
		["credentials"] = credentials;
		["location"] = location;
		["preferred_processing_schedule"] = preferred_processing_schedule;
		["status"] = status;
	})
end

return {
	cast = cast_catalogs_feeds_update_request;
	new = new_catalogs_feeds_update_request;
}
