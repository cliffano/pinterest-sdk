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
class ITEM_ID_FILTER




feature --Access

    ITEM_ID: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_STRING_CRITERIA
      

feature -- Change Element

    set_ITEM_ID (a_name: like ITEM_ID)
        -- Set 'ITEM_ID' with 'a_name'.
      do
        ITEM_ID := a_name
      ensure
        ITEM_ID_set: ITEM_ID = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ITEM_ID_FILTER%N")
        if attached ITEM_ID as l_ITEM_ID then
          Result.append ("%NITEM_ID:")
          Result.append (l_ITEM_ID.out)
          Result.append ("%N")
        end
      end
end

