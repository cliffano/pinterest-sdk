--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- campaign_id class
local campaign_id = {}
local campaign_id_mt = {
	__name = "campaign_id";
	__index = campaign_id;
}

local function cast_campaign_id(t)
	return setmetatable(t, campaign_id_mt)
end

local function new_campaign_id(id)
	return cast_campaign_id({
		["id"] = id;
	})
end

return {
	cast = cast_campaign_id;
	new = new_campaign_id;
}