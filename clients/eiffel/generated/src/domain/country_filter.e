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
class COUNTRY_FILTER




feature --Access

    COUNTRY: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_COUNTRIES_CRITERIA
      

feature -- Change Element

    set_COUNTRY (a_name: like COUNTRY)
        -- Set 'COUNTRY' with 'a_name'.
      do
        COUNTRY := a_name
      ensure
        COUNTRY_set: COUNTRY = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COUNTRY_FILTER%N")
        if attached COUNTRY as l_COUNTRY then
          Result.append ("%NCOUNTRY:")
          Result.append (l_COUNTRY.out)
          Result.append ("%N")
        end
      end
end
