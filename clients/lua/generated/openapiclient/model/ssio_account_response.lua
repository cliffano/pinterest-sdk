--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ssio_account_response class
local ssio_account_response = {}
local ssio_account_response_mt = {
	__name = "ssio_account_response";
	__index = ssio_account_response;
}

local function cast_ssio_account_response(t)
	return setmetatable(t, ssio_account_response_mt)
end

local function new_ssio_account_response(eligible, can_edit, billto_infos, currency, pmp_names, error)
	return cast_ssio_account_response({
		["eligible"] = eligible;
		["can_edit"] = can_edit;
		["billto_infos"] = billto_infos;
		["currency"] = currency;
		["pmp_names"] = pmp_names;
		["error"] = error;
	})
end

return {
	cast = cast_ssio_account_response;
	new = new_ssio_account_response;
}
