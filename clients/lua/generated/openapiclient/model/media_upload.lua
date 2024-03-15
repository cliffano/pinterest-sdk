--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- media_upload class
local media_upload = {}
local media_upload_mt = {
	__name = "media_upload";
	__index = media_upload;
}

local function cast_media_upload(t)
	return setmetatable(t, media_upload_mt)
end

local function new_media_upload(media_id, media_type, upload_url, upload_parameters)
	return cast_media_upload({
		["media_id"] = media_id;
		["media_type"] = media_type;
		["upload_url"] = upload_url;
		["upload_parameters"] = upload_parameters;
	})
end

return {
	cast = cast_media_upload;
	new = new_media_upload;
}
