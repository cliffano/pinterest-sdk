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
class ORDER_LINES_LIST_200_RESPONSE




feature --Access

    items: detachable LIST [ORDER_LINE]
      
    bookmark: detachable STRING_32
      

feature -- Change Element

    set_items (a_name: like items)
        -- Set 'items' with 'a_name'.
      do
        items := a_name
      ensure
        items_set: items = a_name
      end

    set_bookmark (a_name: like bookmark)
        -- Set 'bookmark' with 'a_name'.
      do
        bookmark := a_name
      ensure
        bookmark_set: bookmark = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORDER_LINES_LIST_200_RESPONSE%N")
        if attached items as l_items then
          across l_items as ic loop
            Result.append ("%N items:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached bookmark as l_bookmark then
          Result.append ("%Nbookmark:")
          Result.append (l_bookmark.out)
          Result.append ("%N")
        end
      end
end

