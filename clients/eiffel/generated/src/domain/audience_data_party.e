note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.12.0
 	    Contact: blah+oapicf@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class AUDIENCE_DATA_PARTY

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_1p: AUDIENCE_DATA_PARTY
    once
      create Result
      Result.set_value ("1p")
    end

 val_3p: AUDIENCE_DATA_PARTY
    once
      create Result
      Result.set_value ("3p")
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
