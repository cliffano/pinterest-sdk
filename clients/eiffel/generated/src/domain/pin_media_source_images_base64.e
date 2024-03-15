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
class PIN_MEDIA_SOURCE_IMAGES_BASE64




feature --Access

    source_type: detachable STRING_32
      
    items: detachable LIST [PIN_MEDIA_SOURCE_IMAGES_BASE64_ITEMS_INNER]
      -- Array with image objects.
    index: INTEGER_32
      

feature -- Change Element

    set_source_type (a_name: like source_type)
        -- Set 'source_type' with 'a_name'.
      do
        source_type := a_name
      ensure
        source_type_set: source_type = a_name
      end

    set_items (a_name: like items)
        -- Set 'items' with 'a_name'.
      do
        items := a_name
      ensure
        items_set: items = a_name
      end

    set_index (a_name: like index)
        -- Set 'index' with 'a_name'.
      do
        index := a_name
      ensure
        index_set: index = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PIN_MEDIA_SOURCE_IMAGES_BASE64%N")
        if attached source_type as l_source_type then
          Result.append ("%Nsource_type:")
          Result.append (l_source_type.out)
          Result.append ("%N")
        end
        if attached items as l_items then
          across l_items as ic loop
            Result.append ("%N items:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached index as l_index then
          Result.append ("%Nindex:")
          Result.append (l_index.out)
          Result.append ("%N")
        end
      end
end

