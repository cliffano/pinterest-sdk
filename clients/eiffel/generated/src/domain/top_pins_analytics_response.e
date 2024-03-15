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
class TOP_PINS_ANALYTICS_RESPONSE




feature --Access

    date_availability: detachable TOP_PINS_ANALYTICS_RESPONSE_DATE_AVAILABILITY
      
    pins: detachable LIST [TOP_PINS_ANALYTICS_RESPONSE_PINS_INNER]
      
    sort_by: detachable STRING_32
      

feature -- Change Element

    set_date_availability (a_name: like date_availability)
        -- Set 'date_availability' with 'a_name'.
      do
        date_availability := a_name
      ensure
        date_availability_set: date_availability = a_name
      end

    set_pins (a_name: like pins)
        -- Set 'pins' with 'a_name'.
      do
        pins := a_name
      ensure
        pins_set: pins = a_name
      end

    set_sort_by (a_name: like sort_by)
        -- Set 'sort_by' with 'a_name'.
      do
        sort_by := a_name
      ensure
        sort_by_set: sort_by = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass TOP_PINS_ANALYTICS_RESPONSE%N")
        if attached date_availability as l_date_availability then
          Result.append ("%Ndate_availability:")
          Result.append (l_date_availability.out)
          Result.append ("%N")
        end
        if attached pins as l_pins then
          across l_pins as ic loop
            Result.append ("%N pins:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached sort_by as l_sort_by then
          Result.append ("%Nsort_by:")
          Result.append (l_sort_by.out)
          Result.append ("%N")
        end
      end
end

