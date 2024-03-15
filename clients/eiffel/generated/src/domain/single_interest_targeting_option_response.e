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
class SINGLE_INTEREST_TARGETING_OPTION_RESPONSE




feature --Access

    id: detachable STRING_32
      
    name: detachable STRING_32
      
    child_interests: detachable LIST [STRING_32]
      
    level: INTEGER_32
      

feature -- Change Element

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_child_interests (a_name: like child_interests)
        -- Set 'child_interests' with 'a_name'.
      do
        child_interests := a_name
      ensure
        child_interests_set: child_interests = a_name
      end

    set_level (a_name: like level)
        -- Set 'level' with 'a_name'.
      do
        level := a_name
      ensure
        level_set: level = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass SINGLE_INTEREST_TARGETING_OPTION_RESPONSE%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached child_interests as l_child_interests then
          across l_child_interests as ic loop
            Result.append ("%N child_interests:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached level as l_level then
          Result.append ("%Nlevel:")
          Result.append (l_level.out)
          Result.append ("%N")
        end
      end
end

