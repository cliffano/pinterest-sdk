--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- item_id_filter class
local item_id_filter = {}
local item_id_filter_mt = {
	__name = "item_id_filter";
	__index = item_id_filter;
}

local function cast_item_id_filter(t)
	return setmetatable(t, item_id_filter_mt)
end

local function new_item_id_filter(ITEM_ID)
	return cast_item_id_filter({
		["ITEM_ID"] = ITEM_ID;
	})
end

return {
	cast = cast_item_id_filter;
	new = new_item_id_filter;
}
