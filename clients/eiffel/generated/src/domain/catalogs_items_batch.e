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
class CATALOGS_ITEMS_BATCH




feature --Access

    catalog_type: detachable CATALOGS_TYPE
      
    batch_id: detachable STRING_32
      -- Id of the catalogs items batch
    created_time: detachable DATE_TIME
      -- Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
    completed_time: detachable DATE_TIME
      -- Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
    status: detachable BATCH_OPERATION_STATUS
      
    items: detachable LIST [HOTEL_PROCESSING_RECORD]
      -- Array with the catalogs items processing records part of the catalogs items batch

feature -- Change Element

    set_catalog_type (a_name: like catalog_type)
        -- Set 'catalog_type' with 'a_name'.
      do
        catalog_type := a_name
      ensure
        catalog_type_set: catalog_type = a_name
      end

    set_batch_id (a_name: like batch_id)
        -- Set 'batch_id' with 'a_name'.
      do
        batch_id := a_name
      ensure
        batch_id_set: batch_id = a_name
      end

    set_created_time (a_name: like created_time)
        -- Set 'created_time' with 'a_name'.
      do
        created_time := a_name
      ensure
        created_time_set: created_time = a_name
      end

    set_completed_time (a_name: like completed_time)
        -- Set 'completed_time' with 'a_name'.
      do
        completed_time := a_name
      ensure
        completed_time_set: completed_time = a_name
      end

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_items (a_name: like items)
        -- Set 'items' with 'a_name'.
      do
        items := a_name
      ensure
        items_set: items = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_ITEMS_BATCH%N")
        if attached catalog_type as l_catalog_type then
          Result.append ("%Ncatalog_type:")
          Result.append (l_catalog_type.out)
          Result.append ("%N")
        end
        if attached batch_id as l_batch_id then
          Result.append ("%Nbatch_id:")
          Result.append (l_batch_id.out)
          Result.append ("%N")
        end
        if attached created_time as l_created_time then
          Result.append ("%Ncreated_time:")
          Result.append (l_created_time.out)
          Result.append ("%N")
        end
        if attached completed_time as l_completed_time then
          Result.append ("%Ncompleted_time:")
          Result.append (l_completed_time.out)
          Result.append ("%N")
        end
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached items as l_items then
          across l_items as ic loop
            Result.append ("%N items:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

