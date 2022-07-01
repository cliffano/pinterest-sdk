note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class CATALOGS_PRODUCT_GROUP_FILTERS




feature --Access

    any_of: detachable LIST [CATALOGS_PRODUCT_GROUP_FILTER_KEYS]
      
    all_of: detachable LIST [CATALOGS_PRODUCT_GROUP_FILTER_KEYS]
      

feature -- Change Element

    set_any_of (a_name: like any_of)
        -- Set 'any_of' with 'a_name'.
      do
        any_of := a_name
      ensure
        any_of_set: any_of = a_name
      end

    set_all_of (a_name: like all_of)
        -- Set 'all_of' with 'a_name'.
      do
        all_of := a_name
      ensure
        all_of_set: all_of = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_PRODUCT_GROUP_FILTERS%N")
        if attached any_of as l_any_of then
          across l_any_of as ic loop
            Result.append ("%N any_of:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached all_of as l_all_of then
          across l_all_of as ic loop
            Result.append ("%N all_of:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

