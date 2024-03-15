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
class CATALOGS_PRODUCT_GROUP_MULTIPLE_GENDER_CRITERIA




feature --Access

    values: detachable LIST [GENDER]
      
    negated: BOOLEAN
      

feature -- Change Element

    set_values (a_name: like values)
        -- Set 'values' with 'a_name'.
      do
        values := a_name
      ensure
        values_set: values = a_name
      end

    set_negated (a_name: like negated)
        -- Set 'negated' with 'a_name'.
      do
        negated := a_name
      ensure
        negated_set: negated = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_PRODUCT_GROUP_MULTIPLE_GENDER_CRITERIA%N")
        if attached values as l_values then
          across l_values as ic loop
            Result.append ("%N values:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached negated as l_negated then
          Result.append ("%Nnegated:")
          Result.append (l_negated.out)
          Result.append ("%N")
        end
      end
end

