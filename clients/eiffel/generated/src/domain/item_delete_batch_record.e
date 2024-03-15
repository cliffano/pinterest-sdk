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
class ITEM_DELETE_BATCH_RECORD




feature --Access

    item_id: detachable STRING_32
      -- The catalog item id in the merchant namespace

feature -- Change Element

    set_item_id (a_name: like item_id)
        -- Set 'item_id' with 'a_name'.
      do
        item_id := a_name
      ensure
        item_id_set: item_id = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ITEM_DELETE_BATCH_RECORD%N")
        if attached item_id as l_item_id then
          Result.append ("%Nitem_id:")
          Result.append (l_item_id.out)
          Result.append ("%N")
        end
      end
end

