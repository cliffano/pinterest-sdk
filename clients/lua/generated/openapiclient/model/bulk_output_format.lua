--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- bulk_output_format class
local bulk_output_format = {}
local bulk_output_format_mt = {
	__name = "bulk_output_format";
	__index = bulk_output_format;
}

local function cast_bulk_output_format(t)
	return setmetatable(t, bulk_output_format_mt)
end

local function new_bulk_output_format()
	return cast_bulk_output_format({
	})
end

return {
	cast = cast_bulk_output_format;
	new = new_bulk_output_format;
}
