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
class OPTIMIZATION_GOAL_METADATA_FREQUENCY_GOAL_METADATA




feature --Access

    frequency: INTEGER_32
      
    timerange: detachable STRING_32
      -- User entity counts time range

feature -- Change Element

    set_frequency (a_name: like frequency)
        -- Set 'frequency' with 'a_name'.
      do
        frequency := a_name
      ensure
        frequency_set: frequency = a_name
      end

    set_timerange (a_name: like timerange)
        -- Set 'timerange' with 'a_name'.
      do
        timerange := a_name
      ensure
        timerange_set: timerange = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass OPTIMIZATION_GOAL_METADATA_FREQUENCY_GOAL_METADATA%N")
        if attached frequency as l_frequency then
          Result.append ("%Nfrequency:")
          Result.append (l_frequency.out)
          Result.append ("%N")
        end
        if attached timerange as l_timerange then
          Result.append ("%Ntimerange:")
          Result.append (l_timerange.out)
          Result.append ("%N")
        end
      end
end

