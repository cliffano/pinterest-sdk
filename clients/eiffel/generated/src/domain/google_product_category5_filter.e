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
class GOOGLE_PRODUCT_CATEGORY5_FILTER




feature --Access

    g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5: detachable CATALOGS_PRODUCT_GROUP_MULTIPLE_STRING_LIST_CRITERIA
      

feature -- Change Element

    set_g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5 (a_name: like g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5)
        -- Set 'g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5' with 'a_name'.
      do
        g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5 := a_name
      ensure
        g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5_set: g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5 = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass GOOGLE_PRODUCT_CATEGORY5_FILTER%N")
        if attached g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5 as l_g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5 then
          Result.append ("%Ng_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5:")
          Result.append (l_g_oo_gl_e__pr_od_uc_t__ca_te_go_ry_5.out)
          Result.append ("%N")
        end
      end
end

