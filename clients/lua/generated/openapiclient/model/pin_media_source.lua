--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pin_media_source class
local pin_media_source = {}
local pin_media_source_mt = {
	__name = "pin_media_source";
	__index = pin_media_source;
}

local function cast_pin_media_source(t)
	return setmetatable(t, pin_media_source_mt)
end

local function new_pin_media_source(source_type, content_type, data, url, cover_image_url, media_id)
	return cast_pin_media_source({
		["source_type"] = source_type;
		["content_type"] = content_type;
		["data"] = data;
		["url"] = url;
		["cover_image_url"] = cover_image_url;
		["media_id"] = media_id;
	})
end

return {
	cast = cast_pin_media_source;
	new = new_pin_media_source;
}
