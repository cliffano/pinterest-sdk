--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- integration_logs_success_response class
local integration_logs_success_response = {}
local integration_logs_success_response_mt = {
	__name = "integration_logs_success_response";
	__index = integration_logs_success_response;
}

local function cast_integration_logs_success_response(t)
	return setmetatable(t, integration_logs_success_response_mt)
end

local function new_integration_logs_success_response(message)
	return cast_integration_logs_success_response({
		["message"] = message;
	})
end

return {
	cast = cast_integration_logs_success_response;
	new = new_integration_logs_success_response;
}
