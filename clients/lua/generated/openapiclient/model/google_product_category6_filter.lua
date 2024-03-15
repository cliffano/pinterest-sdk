--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- google_product_category6_filter class
local google_product_category6_filter = {}
local google_product_category6_filter_mt = {
	__name = "google_product_category6_filter";
	__index = google_product_category6_filter;
}

local function cast_google_product_category6_filter(t)
	return setmetatable(t, google_product_category6_filter_mt)
end

local function new_google_product_category6_filter(google_product_category_6)
	return cast_google_product_category6_filter({
		["GOOGLE_PRODUCT_CATEGORY_6"] = google_product_category_6;
	})
end

return {
	cast = cast_google_product_category6_filter;
	new = new_google_product_category6_filter;
}
