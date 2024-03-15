--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- video_metadata class
local video_metadata = {}
local video_metadata_mt = {
	__name = "video_metadata";
	__index = video_metadata;
}

local function cast_video_metadata(t)
	return setmetatable(t, video_metadata_mt)
end

local function new_video_metadata(item_type, cover_image_url, video_url, duration, height, width)
	return cast_video_metadata({
		["item_type"] = item_type;
		["cover_image_url"] = cover_image_url;
		["video_url"] = video_url;
		["duration"] = duration;
		["height"] = height;
		["width"] = width;
	})
end

return {
	cast = cast_video_metadata;
	new = new_video_metadata;
}