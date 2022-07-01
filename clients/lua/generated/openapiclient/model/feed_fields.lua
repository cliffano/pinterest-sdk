--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- feed_fields class
local feed_fields = {}
local feed_fields_mt = {
	__name = "feed_fields";
	__index = feed_fields;
}

local function cast_feed_fields(t)
	return setmetatable(t, feed_fields_mt)
end

local function new_feed_fields(default_country, default_availability, default_currency, name, format, default_locale, credentials, location, preferred_processing_schedule, status)
	return cast_feed_fields({
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
	cast = cast_feed_fields;
	new = new_feed_fields;
}
