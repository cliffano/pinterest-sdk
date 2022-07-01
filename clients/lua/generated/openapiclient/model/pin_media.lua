--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pin_media class
local pin_media = {}
local pin_media_mt = {
	__name = "pin_media";
	__index = pin_media;
}

local function cast_pin_media(t)
	return setmetatable(t, pin_media_mt)
end

local function new_pin_media(media_type)
	return cast_pin_media({
		["media_type"] = media_type;
	})
end

return {
	cast = cast_pin_media;
	new = new_pin_media;
}
