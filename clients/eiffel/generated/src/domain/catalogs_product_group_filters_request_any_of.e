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
class CATALOGS_PRODUCT_GROUP_FILTERS_REQUEST_ANY_OF




feature --Access

    any_of: detachable LIST [CATALOGS_PRODUCT_GROUP_FILTER_KEYS]
      

feature -- Change Element

    set_any_of (a_name: like any_of)
        -- Set 'any_of' with 'a_name'.
      do
        any_of := a_name
      ensure
        any_of_set: any_of = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_PRODUCT_GROUP_FILTERS_REQUEST_ANY_OF%N")
        if attached any_of as l_any_of then
          across l_any_of as ic loop
            Result.append ("%N any_of:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

