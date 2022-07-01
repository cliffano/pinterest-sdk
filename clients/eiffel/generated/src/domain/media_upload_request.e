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
class MEDIA_UPLOAD_REQUEST




feature --Access

    media_type: detachable MEDIA_UPLOAD_TYPE
      

feature -- Change Element

    set_media_type (a_name: like media_type)
        -- Set 'media_type' with 'a_name'.
      do
        media_type := a_name
      ensure
        media_type_set: media_type = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass MEDIA_UPLOAD_REQUEST%N")
        if attached media_type as l_media_type then
          Result.append ("%Nmedia_type:")
          Result.append (l_media_type.out)
          Result.append ("%N")
        end
      end
end

