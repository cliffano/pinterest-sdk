--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- user_list_operation_type class
local user_list_operation_type = {}
local user_list_operation_type_mt = {
	__name = "user_list_operation_type";
	__index = user_list_operation_type;
}

local function cast_user_list_operation_type(t)
	return setmetatable(t, user_list_operation_type_mt)
end

local function new_user_list_operation_type()
	return cast_user_list_operation_type({
	})
end

return {
	cast = cast_user_list_operation_type;
	new = new_user_list_operation_type;
}
