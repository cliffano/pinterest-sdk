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
class CONDITION_FILTER




feature --Access

    CONDITION: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_STRING_CRITERIA
      

feature -- Change Element

    set_CONDITION (a_name: like CONDITION)
        -- Set 'CONDITION' with 'a_name'.
      do
        CONDITION := a_name
      ensure
        CONDITION_set: CONDITION = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CONDITION_FILTER%N")
        if attached CONDITION as l_CONDITION then
          Result.append ("%NCONDITION:")
          Result.append (l_CONDITION.out)
          Result.append ("%N")
        end
      end
end

