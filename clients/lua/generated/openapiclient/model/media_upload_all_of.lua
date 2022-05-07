--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- media_upload_all_of class
local media_upload_all_of = {}
local media_upload_all_of_mt = {
	__name = "media_upload_all_of";
	__index = media_upload_all_of;
}

local function cast_media_upload_all_of(t)
	return setmetatable(t, media_upload_all_of_mt)
end

local function new_media_upload_all_of(media_id, media_type, upload_url, upload_parameters)
	return cast_media_upload_all_of({
		["media_id"] = media_id;
		["media_type"] = media_type;
		["upload_url"] = upload_url;
		["upload_parameters"] = upload_parameters;
	})
end

return {
	cast = cast_media_upload_all_of;
	new = new_media_upload_all_of;
}
