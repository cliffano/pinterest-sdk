note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.3.0
 	    Contact: pinterest-api@pinterest.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class CUSTOM_LABEL2_FILTER




feature --Access

    c_us_to_m__la_be_l_2: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_STRING_CRITERIA
      

feature -- Change Element

    set_c_us_to_m__la_be_l_2 (a_name: like c_us_to_m__la_be_l_2)
        -- Set 'c_us_to_m__la_be_l_2' with 'a_name'.
      do
        c_us_to_m__la_be_l_2 := a_name
      ensure
        c_us_to_m__la_be_l_2_set: c_us_to_m__la_be_l_2 = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CUSTOM_LABEL2_FILTER%N")
        if attached c_us_to_m__la_be_l_2 as l_c_us_to_m__la_be_l_2 then
          Result.append ("%Nc_us_to_m__la_be_l_2:")
          Result.append (l_c_us_to_m__la_be_l_2.out)
          Result.append ("%N")
        end
      end
end

