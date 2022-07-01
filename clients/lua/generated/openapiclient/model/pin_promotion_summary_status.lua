--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pin_promotion_summary_status class
local pin_promotion_summary_status = {}
local pin_promotion_summary_status_mt = {
	__name = "pin_promotion_summary_status";
	__index = pin_promotion_summary_status;
}

local function cast_pin_promotion_summary_status(t)
	return setmetatable(t, pin_promotion_summary_status_mt)
end

local function new_pin_promotion_summary_status()
	return cast_pin_promotion_summary_status({
	})
end

return {
	cast = cast_pin_promotion_summary_status;
	new = new_pin_promotion_summary_status;
}
