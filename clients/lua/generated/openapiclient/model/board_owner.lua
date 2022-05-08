--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- board_owner class
local board_owner = {}
local board_owner_mt = {
	__name = "board_owner";
	__index = board_owner;
}

local function cast_board_owner(t)
	return setmetatable(t, board_owner_mt)
end

local function new_board_owner(username)
	return cast_board_owner({
		["username"] = username;
	})
end

return {
	cast = cast_board_owner;
	new = new_board_owner;
}