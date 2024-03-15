--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- bulk_download_request_campaign_filter class
local bulk_download_request_campaign_filter = {}
local bulk_download_request_campaign_filter_mt = {
	__name = "bulk_download_request_campaign_filter";
	__index = bulk_download_request_campaign_filter;
}

local function cast_bulk_download_request_campaign_filter(t)
	return setmetatable(t, bulk_download_request_campaign_filter_mt)
end

local function new_bulk_download_request_campaign_filter(start_time, end_time, name, campaign_status, objective_type)
	return cast_bulk_download_request_campaign_filter({
		["start_time"] = start_time;
		["end_time"] = end_time;
		["name"] = name;
		["campaign_status"] = campaign_status;
		["objective_type"] = objective_type;
	})
end

return {
	cast = cast_bulk_download_request_campaign_filter;
	new = new_bulk_download_request_campaign_filter;
}