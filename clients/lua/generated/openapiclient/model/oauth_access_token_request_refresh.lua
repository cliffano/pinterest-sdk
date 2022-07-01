--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- oauth_access_token_request_refresh class
local oauth_access_token_request_refresh = {}
local oauth_access_token_request_refresh_mt = {
	__name = "oauth_access_token_request_refresh";
	__index = oauth_access_token_request_refresh;
}

local function cast_oauth_access_token_request_refresh(t)
	return setmetatable(t, oauth_access_token_request_refresh_mt)
end

local function new_oauth_access_token_request_refresh(grant_type, refresh_token, scope)
	return cast_oauth_access_token_request_refresh({
		["grant_type"] = grant_type;
		["refresh_token"] = refresh_token;
		["scope"] = scope;
	})
end

return {
	cast = cast_oauth_access_token_request_refresh;
	new = new_oauth_access_token_request_refresh;
}
