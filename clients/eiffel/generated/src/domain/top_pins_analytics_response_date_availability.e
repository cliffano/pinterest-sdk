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
class TOP_PINS_ANALYTICS_RESPONSE_DATE_AVAILABILITY




feature --Access

    latest_available_timestamp: REAL_32
      
    is_realtime: BOOLEAN
      

feature -- Change Element

    set_latest_available_timestamp (a_name: like latest_available_timestamp)
        -- Set 'latest_available_timestamp' with 'a_name'.
      do
        latest_available_timestamp := a_name
      ensure
        latest_available_timestamp_set: latest_available_timestamp = a_name
      end

    set_is_realtime (a_name: like is_realtime)
        -- Set 'is_realtime' with 'a_name'.
      do
        is_realtime := a_name
      ensure
        is_realtime_set: is_realtime = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass TOP_PINS_ANALYTICS_RESPONSE_DATE_AVAILABILITY%N")
        if attached latest_available_timestamp as l_latest_available_timestamp then
          Result.append ("%Nlatest_available_timestamp:")
          Result.append (l_latest_available_timestamp.out)
          Result.append ("%N")
        end
        if attached is_realtime as l_is_realtime then
          Result.append ("%Nis_realtime:")
          Result.append (l_is_realtime.out)
          Result.append ("%N")
        end
      end
end

