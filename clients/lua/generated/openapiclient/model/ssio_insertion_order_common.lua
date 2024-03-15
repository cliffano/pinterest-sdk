--[[
  Pinterest REST API

  Pinterest's REST API

  The version of the OpenAPI document: 5.12.0
  Contact: blah+oapicf@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- ssio_insertion_order_common class
local ssio_insertion_order_common = {}
local ssio_insertion_order_common_mt = {
	__name = "ssio_insertion_order_common";
	__index = ssio_insertion_order_common;
}

local function cast_ssio_insertion_order_common(t)
	return setmetatable(t, ssio_insertion_order_common_mt)
end

local function new_ssio_insertion_order_common(start_date, end_date, po_number, budget_amount, billing_contact_firstname, billing_contact_lastname, billing_contact_email, media_contact_firstname, media_contact_lastname, media_contact_email, agency_link, user_email)
	return cast_ssio_insertion_order_common({
		["start_date"] = start_date;
		["end_date"] = end_date;
		["po_number"] = po_number;
		["budget_amount"] = budget_amount;
		["billing_contact_firstname"] = billing_contact_firstname;
		["billing_contact_lastname"] = billing_contact_lastname;
		["billing_contact_email"] = billing_contact_email;
		["media_contact_firstname"] = media_contact_firstname;
		["media_contact_lastname"] = media_contact_lastname;
		["media_contact_email"] = media_contact_email;
		["agency_link"] = agency_link;
		["user_email"] = user_email;
	})
end

return {
	cast = cast_ssio_insertion_order_common;
	new = new_ssio_insertion_order_common;
}
