--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- oauth_access_token_request class
local oauth_access_token_request = {}
local oauth_access_token_request_mt = {
	__name = "oauth_access_token_request";
	__index = oauth_access_token_request;
}

local function cast_oauth_access_token_request(t)
	return setmetatable(t, oauth_access_token_request_mt)
end

local function new_oauth_access_token_request(grant_type)
	return cast_oauth_access_token_request({
		["grant_type"] = grant_type;
	})
end

return {
	cast = cast_oauth_access_token_request;
	new = new_oauth_access_token_request;
}
