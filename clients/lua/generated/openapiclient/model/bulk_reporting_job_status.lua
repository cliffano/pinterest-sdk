--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- bulk_reporting_job_status class
local bulk_reporting_job_status = {}
local bulk_reporting_job_status_mt = {
	__name = "bulk_reporting_job_status";
	__index = bulk_reporting_job_status;
}

local function cast_bulk_reporting_job_status(t)
	return setmetatable(t, bulk_reporting_job_status_mt)
end

local function new_bulk_reporting_job_status()
	return cast_bulk_reporting_job_status({
	})
end

return {
	cast = cast_bulk_reporting_job_status;
	new = new_bulk_reporting_job_status;
}
