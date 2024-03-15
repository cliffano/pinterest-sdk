--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- user_summary class
local user_summary = {}
local user_summary_mt = {
	__name = "user_summary";
	__index = user_summary;
}

local function cast_user_summary(t)
	return setmetatable(t, user_summary_mt)
end

local function new_user_summary(username, type)
	return cast_user_summary({
		["username"] = username;
		["type"] = type;
	})
end

return {
	cast = cast_user_summary;
	new = new_user_summary;
}
