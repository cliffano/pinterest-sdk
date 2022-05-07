--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- brand_filter class
local brand_filter = {}
local brand_filter_mt = {
	__name = "brand_filter";
	__index = brand_filter;
}

local function cast_brand_filter(t)
	return setmetatable(t, brand_filter_mt)
end

local function new_brand_filter(BRAND)
	return cast_brand_filter({
		["BRAND"] = BRAND;
	})
end

return {
	cast = cast_brand_filter;
	new = new_brand_filter;
}
