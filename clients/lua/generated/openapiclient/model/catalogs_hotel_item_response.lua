--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_hotel_item_response class
local catalogs_hotel_item_response = {}
local catalogs_hotel_item_response_mt = {
	__name = "catalogs_hotel_item_response";
	__index = catalogs_hotel_item_response;
}

local function cast_catalogs_hotel_item_response(t)
	return setmetatable(t, catalogs_hotel_item_response_mt)
end

local function new_catalogs_hotel_item_response(catalog_type, hotel_id, pins, attributes)
	return cast_catalogs_hotel_item_response({
		["catalog_type"] = catalog_type;
		["hotel_id"] = hotel_id;
		["pins"] = pins;
		["attributes"] = attributes;
	})
end

return {
	cast = cast_catalogs_hotel_item_response;
	new = new_catalogs_hotel_item_response;
}
