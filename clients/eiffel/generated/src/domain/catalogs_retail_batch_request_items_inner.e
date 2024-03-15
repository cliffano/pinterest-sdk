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
class CATALOGS_RETAIL_BATCH_REQUEST_ITEMS_INNER




feature --Access

    item_id: detachable STRING_32
      -- The catalog item id in the merchant namespace
    operation: detachable STRING_32
      
    attributes: detachable ITEM_ATTRIBUTES
      
    update_mask: detachable LIST [UPDATE_MASK_FIELD_TYPE]
      -- The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.

feature -- Change Element

    set_item_id (a_name: like item_id)
        -- Set 'item_id' with 'a_name'.
      do
        item_id := a_name
      ensure
        item_id_set: item_id = a_name
      end

    set_operation (a_name: like operation)
        -- Set 'operation' with 'a_name'.
      do
        operation := a_name
      ensure
        operation_set: operation = a_name
      end

    set_attributes (a_name: like attributes)
        -- Set 'attributes' with 'a_name'.
      do
        attributes := a_name
      ensure
        attributes_set: attributes = a_name
      end

    set_update_mask (a_name: like update_mask)
        -- Set 'update_mask' with 'a_name'.
      do
        update_mask := a_name
      ensure
        update_mask_set: update_mask = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_RETAIL_BATCH_REQUEST_ITEMS_INNER%N")
        if attached item_id as l_item_id then
          Result.append ("%Nitem_id:")
          Result.append (l_item_id.out)
          Result.append ("%N")
        end
        if attached operation as l_operation then
          Result.append ("%Noperation:")
          Result.append (l_operation.out)
          Result.append ("%N")
        end
        if attached attributes as l_attributes then
          Result.append ("%Nattributes:")
          Result.append (l_attributes.out)
          Result.append ("%N")
        end
        if attached update_mask as l_update_mask then
          across l_update_mask as ic loop
            Result.append ("%N update_mask:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

