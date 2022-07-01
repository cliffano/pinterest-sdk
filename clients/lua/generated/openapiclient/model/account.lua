--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- account class
local account = {}
local account_mt = {
	__name = "account";
	__index = account;
}

local function cast_account(t)
	return setmetatable(t, account_mt)
end

local function new_account(account_type, profile_image, website_url, username)
	return cast_account({
		["account_type"] = account_type;
		["profile_image"] = profile_image;
		["website_url"] = website_url;
		["username"] = username;
	})
end

return {
	cast = cast_account;
	new = new_account;
}
