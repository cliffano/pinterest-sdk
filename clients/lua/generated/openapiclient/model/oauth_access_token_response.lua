--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- oauth_access_token_response class
local oauth_access_token_response = {}
local oauth_access_token_response_mt = {
	__name = "oauth_access_token_response";
	__index = oauth_access_token_response;
}

local function cast_oauth_access_token_response(t)
	return setmetatable(t, oauth_access_token_response_mt)
end

local function new_oauth_access_token_response(response_type, access_token, token_type, expires_in, scope)
	return cast_oauth_access_token_response({
		["response_type"] = response_type;
		["access_token"] = access_token;
		["token_type"] = token_type;
		["expires_in"] = expires_in;
		["scope"] = scope;
	})
end

return {
	cast = cast_oauth_access_token_response;
	new = new_oauth_access_token_response;
}
