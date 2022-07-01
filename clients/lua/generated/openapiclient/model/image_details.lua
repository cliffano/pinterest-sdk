--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- image_details class
local image_details = {}
local image_details_mt = {
	__name = "image_details";
	__index = image_details;
}

local function cast_image_details(t)
	return setmetatable(t, image_details_mt)
end

local function new_image_details(width, height, url)
	return cast_image_details({
		["width"] = width;
		["height"] = height;
		["url"] = url;
	})
end

return {
	cast = cast_image_details;
	new = new_image_details;
}
