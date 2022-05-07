--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- oauth_access_token_request_code class
local oauth_access_token_request_code = {}
local oauth_access_token_request_code_mt = {
	__name = "oauth_access_token_request_code";
	__index = oauth_access_token_request_code;
}

local function cast_oauth_access_token_request_code(t)
	return setmetatable(t, oauth_access_token_request_code_mt)
end

local function new_oauth_access_token_request_code(grant_type, code, redirect_uri)
	return cast_oauth_access_token_request_code({
		["grant_type"] = grant_type;
		["code"] = code;
		["redirect_uri"] = redirect_uri;
	})
end

return {
	cast = cast_oauth_access_token_request_code;
	new = new_oauth_access_token_request_code;
}
