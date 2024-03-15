--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_status class
local catalogs_status = {}
local catalogs_status_mt = {
	__name = "catalogs_status";
	__index = catalogs_status;
}

local function cast_catalogs_status(t)
	return setmetatable(t, catalogs_status_mt)
end

local function new_catalogs_status()
	return cast_catalogs_status({
	})
end

return {
	cast = cast_catalogs_status;
	new = new_catalogs_status;
}
