note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: pinterest-api@pinterest.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class CONVERSION_REPORT_ATTRIBUTION_TYPE

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_individual: CONVERSION_REPORT_ATTRIBUTION_TYPE
    once
      create Result
      Result.set_value ("INDIVIDUAL")
    end

 val_household: CONVERSION_REPORT_ATTRIBUTION_TYPE
    once
      create Result
      Result.set_value ("HOUSEHOLD")
    end


feature -- Element Change

  set_value (a_val: like value)
      -- Set `value' with `a_value'.
    do
      value := a_val
    ensure
      value_set: value = a_val
    end


end

