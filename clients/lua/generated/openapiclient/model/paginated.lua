--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.3.0
  Contact: pinterest-api@pinterest.com
  Generated by: https://openapi-generator.tech
]]

-- paginated class
local paginated = {}
local paginated_mt = {
	__name = "paginated";
	__index = paginated;
}

local function cast_paginated(t)
	return setmetatable(t, paginated_mt)
end

local function new_paginated(items, bookmark)
	return cast_paginated({
		["items"] = items;
		["bookmark"] = bookmark;
	})
end

return {
	cast = cast_paginated;
	new = new_paginated;
}
