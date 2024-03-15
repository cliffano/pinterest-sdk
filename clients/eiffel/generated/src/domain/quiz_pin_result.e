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
class QUIZ_PIN_RESULT




feature --Access

    organic_pin_id: detachable STRING_32
      
    android_deep_link: detachable STRING_32
      
    ios_deep_link: detachable STRING_32
      
    destination_url: detachable STRING_32
      
    result_id: REAL_32
      

feature -- Change Element

    set_organic_pin_id (a_name: like organic_pin_id)
        -- Set 'organic_pin_id' with 'a_name'.
      do
        organic_pin_id := a_name
      ensure
        organic_pin_id_set: organic_pin_id = a_name
      end

    set_android_deep_link (a_name: like android_deep_link)
        -- Set 'android_deep_link' with 'a_name'.
      do
        android_deep_link := a_name
      ensure
        android_deep_link_set: android_deep_link = a_name
      end

    set_ios_deep_link (a_name: like ios_deep_link)
        -- Set 'ios_deep_link' with 'a_name'.
      do
        ios_deep_link := a_name
      ensure
        ios_deep_link_set: ios_deep_link = a_name
      end

    set_destination_url (a_name: like destination_url)
        -- Set 'destination_url' with 'a_name'.
      do
        destination_url := a_name
      ensure
        destination_url_set: destination_url = a_name
      end

    set_result_id (a_name: like result_id)
        -- Set 'result_id' with 'a_name'.
      do
        result_id := a_name
      ensure
        result_id_set: result_id = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass QUIZ_PIN_RESULT%N")
        if attached organic_pin_id as l_organic_pin_id then
          Result.append ("%Norganic_pin_id:")
          Result.append (l_organic_pin_id.out)
          Result.append ("%N")
        end
        if attached android_deep_link as l_android_deep_link then
          Result.append ("%Nandroid_deep_link:")
          Result.append (l_android_deep_link.out)
          Result.append ("%N")
        end
        if attached ios_deep_link as l_ios_deep_link then
          Result.append ("%Nios_deep_link:")
          Result.append (l_ios_deep_link.out)
          Result.append ("%N")
        end
        if attached destination_url as l_destination_url then
          Result.append ("%Ndestination_url:")
          Result.append (l_destination_url.out)
          Result.append ("%N")
        end
        if attached result_id as l_result_id then
          Result.append ("%Nresult_id:")
          Result.append (l_result_id.out)
          Result.append ("%N")
        end
      end
end
