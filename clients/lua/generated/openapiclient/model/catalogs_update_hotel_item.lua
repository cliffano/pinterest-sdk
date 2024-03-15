--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_update_hotel_item class
local catalogs_update_hotel_item = {}
local catalogs_update_hotel_item_mt = {
	__name = "catalogs_update_hotel_item";
	__index = catalogs_update_hotel_item;
}

local function cast_catalogs_update_hotel_item(t)
	return setmetatable(t, catalogs_update_hotel_item_mt)
end

local function new_catalogs_update_hotel_item(hotel_id, operation, attributes)
	return cast_catalogs_update_hotel_item({
		["hotel_id"] = hotel_id;
		["operation"] = operation;
		["attributes"] = attributes;
	})
end

return {
	cast = cast_catalogs_update_hotel_item;
	new = new_catalogs_update_hotel_item;
}
