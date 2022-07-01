--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- media_upload_status class
local media_upload_status = {}
local media_upload_status_mt = {
	__name = "media_upload_status";
	__index = media_upload_status;
}

local function cast_media_upload_status(t)
	return setmetatable(t, media_upload_status_mt)
end

local function new_media_upload_status()
	return cast_media_upload_status({
	})
end

return {
	cast = cast_media_upload_status;
	new = new_media_upload_status;
}
