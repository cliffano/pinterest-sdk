--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- oauth_access_token_response_everlasting_refresh class
local oauth_access_token_response_everlasting_refresh = {}
local oauth_access_token_response_everlasting_refresh_mt = {
	__name = "oauth_access_token_response_everlasting_refresh";
	__index = oauth_access_token_response_everlasting_refresh;
}

local function cast_oauth_access_token_response_everlasting_refresh(t)
	return setmetatable(t, oauth_access_token_response_everlasting_refresh_mt)
end

local function new_oauth_access_token_response_everlasting_refresh(response_type, access_token, token_type, expires_in, scope, refresh_token, refresh_token_expires_in, refresh_token_expires_at)
	return cast_oauth_access_token_response_everlasting_refresh({
		["response_type"] = response_type;
		["access_token"] = access_token;
		["token_type"] = token_type;
		["expires_in"] = expires_in;
		["scope"] = scope;
		["refresh_token"] = refresh_token;
		["refresh_token_expires_in"] = refresh_token_expires_in;
		["refresh_token_expires_at"] = refresh_token_expires_at;
	})
end

return {
	cast = cast_oauth_access_token_response_everlasting_refresh;
	new = new_oauth_access_token_response_everlasting_refresh;
}
