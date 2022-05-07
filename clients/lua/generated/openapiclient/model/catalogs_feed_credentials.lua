--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_feed_credentials class
local catalogs_feed_credentials = {}
local catalogs_feed_credentials_mt = {
	__name = "catalogs_feed_credentials";
	__index = catalogs_feed_credentials;
}

local function cast_catalogs_feed_credentials(t)
	return setmetatable(t, catalogs_feed_credentials_mt)
end

local function new_catalogs_feed_credentials(password, username)
	return cast_catalogs_feed_credentials({
		["password"] = password;
		["username"] = username;
	})
end

return {
	cast = cast_catalogs_feed_credentials;
	new = new_catalogs_feed_credentials;
}
