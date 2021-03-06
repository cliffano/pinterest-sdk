--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- campaign_response_all_of_1 class
local campaign_response_all_of_1 = {}
local campaign_response_all_of_1_mt = {
	__name = "campaign_response_all_of_1";
	__index = campaign_response_all_of_1;
}

local function cast_campaign_response_all_of_1(t)
	return setmetatable(t, campaign_response_all_of_1_mt)
end

local function new_campaign_response_all_of_1(objective_type, created_time, updated_time, type)
	return cast_campaign_response_all_of_1({
		["objective_type"] = objective_type;
		["created_time"] = created_time;
		["updated_time"] = updated_time;
		["type"] = type;
	})
end

return {
	cast = cast_campaign_response_all_of_1;
	new = new_campaign_response_all_of_1;
}
