--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- product_availability_type class
local product_availability_type = {}
local product_availability_type_mt = {
	__name = "product_availability_type";
	__index = product_availability_type;
}

local function cast_product_availability_type(t)
	return setmetatable(t, product_availability_type_mt)
end

local function new_product_availability_type()
	return cast_product_availability_type({
	})
end

return {
	cast = cast_product_availability_type;
	new = new_product_availability_type;
}
