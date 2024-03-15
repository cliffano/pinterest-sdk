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
class CATALOGS_PRODUCT_GROUP_PRODUCT_COUNTS




feature --Access

    in_stock: REAL_32
      
    out_of_stock: REAL_32
      
    preorder: REAL_32
      
    total: REAL_32
      

feature -- Change Element

    set_in_stock (a_name: like in_stock)
        -- Set 'in_stock' with 'a_name'.
      do
        in_stock := a_name
      ensure
        in_stock_set: in_stock = a_name
      end

    set_out_of_stock (a_name: like out_of_stock)
        -- Set 'out_of_stock' with 'a_name'.
      do
        out_of_stock := a_name
      ensure
        out_of_stock_set: out_of_stock = a_name
      end

    set_preorder (a_name: like preorder)
        -- Set 'preorder' with 'a_name'.
      do
        preorder := a_name
      ensure
        preorder_set: preorder = a_name
      end

    set_total (a_name: like total)
        -- Set 'total' with 'a_name'.
      do
        total := a_name
      ensure
        total_set: total = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_PRODUCT_GROUP_PRODUCT_COUNTS%N")
        if attached in_stock as l_in_stock then
          Result.append ("%Nin_stock:")
          Result.append (l_in_stock.out)
          Result.append ("%N")
        end
        if attached out_of_stock as l_out_of_stock then
          Result.append ("%Nout_of_stock:")
          Result.append (l_out_of_stock.out)
          Result.append ("%N")
        end
        if attached preorder as l_preorder then
          Result.append ("%Npreorder:")
          Result.append (l_preorder.out)
          Result.append ("%N")
        end
        if attached total as l_total then
          Result.append ("%Ntotal:")
          Result.append (l_total.out)
          Result.append ("%N")
        end
      end
end
