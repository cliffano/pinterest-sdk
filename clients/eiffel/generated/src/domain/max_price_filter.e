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
class MAX_PRICE_FILTER




feature --Access

    MAX_PRICE: detachable CATALOGS_PRODUCT_GROUP_PRICING_CRITERIA
      

feature -- Change Element

    set_MAX_PRICE (a_name: like MAX_PRICE)
        -- Set 'MAX_PRICE' with 'a_name'.
      do
        MAX_PRICE := a_name
      ensure
        MAX_PRICE_set: MAX_PRICE = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass MAX_PRICE_FILTER%N")
        if attached MAX_PRICE as l_MAX_PRICE then
          Result.append ("%NMAX_PRICE:")
          Result.append (l_MAX_PRICE.out)
          Result.append ("%N")
        end
      end
end

