--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- order_line_single_response class
local order_line_single_response = {}
local order_line_single_response_mt = {
	__name = "order_line_single_response";
	__index = order_line_single_response;
}

local function cast_order_line_single_response(t)
	return setmetatable(t, order_line_single_response_mt)
end

local function new_order_line_single_response(data)
	return cast_order_line_single_response({
		["data"] = data;
	})
end

return {
	cast = cast_order_line_single_response;
	new = new_order_line_single_response;
}
