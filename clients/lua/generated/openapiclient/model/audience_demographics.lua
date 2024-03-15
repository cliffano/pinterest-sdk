--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- audience_demographics class
local audience_demographics = {}
local audience_demographics_mt = {
	__name = "audience_demographics";
	__index = audience_demographics;
}

local function cast_audience_demographics(t)
	return setmetatable(t, audience_demographics_mt)
end

local function new_audience_demographics(ages, genders, devices, metros, countries)
	return cast_audience_demographics({
		["ages"] = ages;
		["genders"] = genders;
		["devices"] = devices;
		["metros"] = metros;
		["countries"] = countries;
	})
end

return {
	cast = cast_audience_demographics;
	new = new_audience_demographics;
}
