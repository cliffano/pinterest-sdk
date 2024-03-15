--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- audience_create_request class
local audience_create_request = {}
local audience_create_request_mt = {
	__name = "audience_create_request";
	__index = audience_create_request;
}

local function cast_audience_create_request(t)
	return setmetatable(t, audience_create_request_mt)
end

local function new_audience_create_request(ad_account_id, name, rule, description, audience_type)
	return cast_audience_create_request({
		["ad_account_id"] = ad_account_id;
		["name"] = name;
		["rule"] = rule;
		["description"] = description;
		["audience_type"] = audience_type;
	})
end

return {
	cast = cast_audience_create_request;
	new = new_audience_create_request;
}
