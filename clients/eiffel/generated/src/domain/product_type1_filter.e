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
class PRODUCT_TYPE1_FILTER




feature --Access

    p_ro_du_ct__ty_pe_1: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_STRING_LIST_CRITERIA
      

feature -- Change Element

    set_p_ro_du_ct__ty_pe_1 (a_name: like p_ro_du_ct__ty_pe_1)
        -- Set 'p_ro_du_ct__ty_pe_1' with 'a_name'.
      do
        p_ro_du_ct__ty_pe_1 := a_name
      ensure
        p_ro_du_ct__ty_pe_1_set: p_ro_du_ct__ty_pe_1 = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PRODUCT_TYPE1_FILTER%N")
        if attached p_ro_du_ct__ty_pe_1 as l_p_ro_du_ct__ty_pe_1 then
          Result.append ("%Np_ro_du_ct__ty_pe_1:")
          Result.append (l_p_ro_du_ct__ty_pe_1.out)
          Result.append ("%N")
        end
      end
end

