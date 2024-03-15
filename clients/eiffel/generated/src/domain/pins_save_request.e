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
class PINS_SAVE_REQUEST




feature --Access

    board_id: detachable STRING_32
      -- Unique identifier of the board to which the pin will be saved.
    board_section_id: detachable STRING_32
      -- Unique identifier of the board section to which the pin will be saved.

feature -- Change Element

    set_board_id (a_name: like board_id)
        -- Set 'board_id' with 'a_name'.
      do
        board_id := a_name
      ensure
        board_id_set: board_id = a_name
      end

    set_board_section_id (a_name: like board_section_id)
        -- Set 'board_section_id' with 'a_name'.
      do
        board_section_id := a_name
      ensure
        board_section_id_set: board_section_id = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PINS_SAVE_REQUEST%N")
        if attached board_id as l_board_id then
          Result.append ("%Nboard_id:")
          Result.append (l_board_id.out)
          Result.append ("%N")
        end
        if attached board_section_id as l_board_section_id then
          Result.append ("%Nboard_section_id:")
          Result.append (l_board_section_id.out)
          Result.append ("%N")
        end
      end
end

