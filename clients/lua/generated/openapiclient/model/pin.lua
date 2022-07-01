--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pin class
local pin = {}
local pin_mt = {
	__name = "pin";
	__index = pin;
}

local function cast_pin(t)
	return setmetatable(t, pin_mt)
end

local function new_pin(id, created_at, link, title, description, alt_text, board_id, board_section_id, board_owner, media, media_source)
	return cast_pin({
		["id"] = id;
		["created_at"] = created_at;
		["link"] = link;
		["title"] = title;
		["description"] = description;
		["alt_text"] = alt_text;
		["board_id"] = board_id;
		["board_section_id"] = board_section_id;
		["board_owner"] = board_owner;
		["media"] = media;
		["media_source"] = media_source;
	})
end

return {
	cast = cast_pin;
	new = new_pin;
}
