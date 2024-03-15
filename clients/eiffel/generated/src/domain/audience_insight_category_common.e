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
class AUDIENCE_INSIGHT_CATEGORY_COMMON




feature --Access

    key: detachable STRING_32
      
    name: detachable STRING_32
      
    ratio: REAL_32
      
    index: REAL_32
      
    id: detachable STRING_32
      

feature -- Change Element

    set_key (a_name: like key)
        -- Set 'key' with 'a_name'.
      do
        key := a_name
      ensure
        key_set: key = a_name
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_ratio (a_name: like ratio)
        -- Set 'ratio' with 'a_name'.
      do
        ratio := a_name
      ensure
        ratio_set: ratio = a_name
      end

    set_index (a_name: like index)
        -- Set 'index' with 'a_name'.
      do
        index := a_name
      ensure
        index_set: index = a_name
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass AUDIENCE_INSIGHT_CATEGORY_COMMON%N")
        if attached key as l_key then
          Result.append ("%Nkey:")
          Result.append (l_key.out)
          Result.append ("%N")
        end
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached ratio as l_ratio then
          Result.append ("%Nratio:")
          Result.append (l_ratio.out)
          Result.append ("%N")
        end
        if attached index as l_index then
          Result.append ("%Nindex:")
          Result.append (l_index.out)
          Result.append ("%N")
        end
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
      end
end

