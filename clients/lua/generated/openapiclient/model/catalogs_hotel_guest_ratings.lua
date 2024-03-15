--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- catalogs_hotel_guest_ratings class
local catalogs_hotel_guest_ratings = {}
local catalogs_hotel_guest_ratings_mt = {
	__name = "catalogs_hotel_guest_ratings";
	__index = catalogs_hotel_guest_ratings;
}

local function cast_catalogs_hotel_guest_ratings(t)
	return setmetatable(t, catalogs_hotel_guest_ratings_mt)
end

local function new_catalogs_hotel_guest_ratings(score, number_of_reviewers, max_score, rating_system)
	return cast_catalogs_hotel_guest_ratings({
		["score"] = score;
		["number_of_reviewers"] = number_of_reviewers;
		["max_score"] = max_score;
		["rating_system"] = rating_system;
	})
end

return {
	cast = cast_catalogs_hotel_guest_ratings;
	new = new_catalogs_hotel_guest_ratings;
}
