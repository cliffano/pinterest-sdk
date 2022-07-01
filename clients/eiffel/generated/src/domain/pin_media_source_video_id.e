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
class PIN_MEDIA_SOURCE_VIDEO_ID




feature --Access

    source_type: detachable STRING_32
      
    cover_image_url: detachable STRING_32
      
    media_id: detachable STRING_32
      

feature -- Change Element

    set_source_type (a_name: like source_type)
        -- Set 'source_type' with 'a_name'.
      do
        source_type := a_name
      ensure
        source_type_set: source_type = a_name
      end

    set_cover_image_url (a_name: like cover_image_url)
        -- Set 'cover_image_url' with 'a_name'.
      do
        cover_image_url := a_name
      ensure
        cover_image_url_set: cover_image_url = a_name
      end

    set_media_id (a_name: like media_id)
        -- Set 'media_id' with 'a_name'.
      do
        media_id := a_name
      ensure
        media_id_set: media_id = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PIN_MEDIA_SOURCE_VIDEO_ID%N")
        if attached source_type as l_source_type then
          Result.append ("%Nsource_type:")
          Result.append (l_source_type.out)
          Result.append ("%N")
        end
        if attached cover_image_url as l_cover_image_url then
          Result.append ("%Ncover_image_url:")
          Result.append (l_cover_image_url.out)
          Result.append ("%N")
        end
        if attached media_id as l_media_id then
          Result.append ("%Nmedia_id:")
          Result.append (l_media_id.out)
          Result.append ("%N")
        end
      end
end

