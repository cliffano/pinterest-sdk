--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- user_website_verify_request class
local user_website_verify_request = {}
local user_website_verify_request_mt = {
	__name = "user_website_verify_request";
	__index = user_website_verify_request;
}

local function cast_user_website_verify_request(t)
	return setmetatable(t, user_website_verify_request_mt)
end

local function new_user_website_verify_request(website, verification_method)
	return cast_user_website_verify_request({
		["website"] = website;
		["verification_method"] = verification_method;
	})
end

return {
	cast = cast_user_website_verify_request;
	new = new_user_website_verify_request;
}
