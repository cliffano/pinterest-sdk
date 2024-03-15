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
class LINKED_BUSINESS




feature --Access

    username: detachable STRING_32
      -- Username
    image_small_url: detachable STRING_32
      -- image_small_url
    image_medium_url: detachable STRING_32
      -- image_medium_url
    image_large_url: detachable STRING_32
      -- image_large_url
    image_xlarge_url: detachable STRING_32
      -- image_xlarge_url

feature -- Change Element

    set_username (a_name: like username)
        -- Set 'username' with 'a_name'.
      do
        username := a_name
      ensure
        username_set: username = a_name
      end

    set_image_small_url (a_name: like image_small_url)
        -- Set 'image_small_url' with 'a_name'.
      do
        image_small_url := a_name
      ensure
        image_small_url_set: image_small_url = a_name
      end

    set_image_medium_url (a_name: like image_medium_url)
        -- Set 'image_medium_url' with 'a_name'.
      do
        image_medium_url := a_name
      ensure
        image_medium_url_set: image_medium_url = a_name
      end

    set_image_large_url (a_name: like image_large_url)
        -- Set 'image_large_url' with 'a_name'.
      do
        image_large_url := a_name
      ensure
        image_large_url_set: image_large_url = a_name
      end

    set_image_xlarge_url (a_name: like image_xlarge_url)
        -- Set 'image_xlarge_url' with 'a_name'.
      do
        image_xlarge_url := a_name
      ensure
        image_xlarge_url_set: image_xlarge_url = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass LINKED_BUSINESS%N")
        if attached username as l_username then
          Result.append ("%Nusername:")
          Result.append (l_username.out)
          Result.append ("%N")
        end
        if attached image_small_url as l_image_small_url then
          Result.append ("%Nimage_small_url:")
          Result.append (l_image_small_url.out)
          Result.append ("%N")
        end
        if attached image_medium_url as l_image_medium_url then
          Result.append ("%Nimage_medium_url:")
          Result.append (l_image_medium_url.out)
          Result.append ("%N")
        end
        if attached image_large_url as l_image_large_url then
          Result.append ("%Nimage_large_url:")
          Result.append (l_image_large_url.out)
          Result.append ("%N")
        end
        if attached image_xlarge_url as l_image_xlarge_url then
          Result.append ("%Nimage_xlarge_url:")
          Result.append (l_image_xlarge_url.out)
          Result.append ("%N")
        end
      end
end
