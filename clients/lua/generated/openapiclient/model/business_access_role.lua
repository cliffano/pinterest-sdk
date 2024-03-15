--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- business_access_role class
local business_access_role = {}
local business_access_role_mt = {
	__name = "business_access_role";
	__index = business_access_role;
}

local function cast_business_access_role(t)
	return setmetatable(t, business_access_role_mt)
end

local function new_business_access_role()
	return cast_business_access_role({
	})
end

return {
	cast = cast_business_access_role;
	new = new_business_access_role;
}