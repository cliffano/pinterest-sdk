--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- item_processing_status class
local item_processing_status = {}
local item_processing_status_mt = {
	__name = "item_processing_status";
	__index = item_processing_status;
}

local function cast_item_processing_status(t)
	return setmetatable(t, item_processing_status_mt)
end

local function new_item_processing_status()
	return cast_item_processing_status({
	})
end

return {
	cast = cast_item_processing_status;
	new = new_item_processing_status;
}
