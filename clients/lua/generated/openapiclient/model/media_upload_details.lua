--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- media_upload_details class
local media_upload_details = {}
local media_upload_details_mt = {
	__name = "media_upload_details";
	__index = media_upload_details;
}

local function cast_media_upload_details(t)
	return setmetatable(t, media_upload_details_mt)
end

local function new_media_upload_details(media_id, media_type, status)
	return cast_media_upload_details({
		["media_id"] = media_id;
		["media_type"] = media_type;
		["status"] = status;
	})
end

return {
	cast = cast_media_upload_details;
	new = new_media_upload_details;
}
