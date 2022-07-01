--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed class
local catalogs_feed = {}
local catalogs_feed_mt = {
	__name = "catalogs_feed";
	__index = catalogs_feed;
}

local function cast_catalogs_feed(t)
	return setmetatable(t, catalogs_feed_mt)
end

local function new_catalogs_feed(created_at, id, updated_at, default_country, default_availability, default_currency, name, format, default_locale, credentials, location, preferred_processing_schedule, status)
	return cast_catalogs_feed({
		["created_at"] = created_at;
		["id"] = id;
		["updated_at"] = updated_at;
		["default_country"] = default_country;
		["default_availability"] = default_availability;
		["default_currency"] = default_currency;
		["name"] = name;
		["format"] = format;
		["default_locale"] = default_locale;
		["credentials"] = credentials;
		["location"] = location;
		["preferred_processing_schedule"] = preferred_processing_schedule;
		["status"] = status;
	})
end

return {
	cast = cast_catalogs_feed;
	new = new_catalogs_feed;
}
