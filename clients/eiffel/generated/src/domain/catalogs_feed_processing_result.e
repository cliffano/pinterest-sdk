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
class CATALOGS_FEED_PROCESSING_RESULT




feature --Access

    created_at: detachable DATE_TIME
      
    id: detachable STRING_32
      
    updated_at: detachable DATE_TIME
      
    ingestion_details: detachable CATALOGS_FEED_INGESTION_DETAILS
      
    status: detachable CATALOGS_FEED_PROCESSING_STATUS
      
    product_counts: detachable CATALOGS_FEED_PRODUCT_COUNTS
      
    validation_details: detachable CATALOGS_FEED_VALIDATION_DETAILS
      

feature -- Change Element

    set_created_at (a_name: like created_at)
        -- Set 'created_at' with 'a_name'.
      do
        created_at := a_name
      ensure
        created_at_set: created_at = a_name
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end

    set_updated_at (a_name: like updated_at)
        -- Set 'updated_at' with 'a_name'.
      do
        updated_at := a_name
      ensure
        updated_at_set: updated_at = a_name
      end

    set_ingestion_details (a_name: like ingestion_details)
        -- Set 'ingestion_details' with 'a_name'.
      do
        ingestion_details := a_name
      ensure
        ingestion_details_set: ingestion_details = a_name
      end

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_product_counts (a_name: like product_counts)
        -- Set 'product_counts' with 'a_name'.
      do
        product_counts := a_name
      ensure
        product_counts_set: product_counts = a_name
      end

    set_validation_details (a_name: like validation_details)
        -- Set 'validation_details' with 'a_name'.
      do
        validation_details := a_name
      ensure
        validation_details_set: validation_details = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_FEED_PROCESSING_RESULT%N")
        if attached created_at as l_created_at then
          Result.append ("%Ncreated_at:")
          Result.append (l_created_at.out)
          Result.append ("%N")
        end
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
        if attached updated_at as l_updated_at then
          Result.append ("%Nupdated_at:")
          Result.append (l_updated_at.out)
          Result.append ("%N")
        end
        if attached ingestion_details as l_ingestion_details then
          Result.append ("%Ningestion_details:")
          Result.append (l_ingestion_details.out)
          Result.append ("%N")
        end
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached product_counts as l_product_counts then
          Result.append ("%Nproduct_counts:")
          Result.append (l_product_counts.out)
          Result.append ("%N")
        end
        if attached validation_details as l_validation_details then
          Result.append ("%Nvalidation_details:")
          Result.append (l_validation_details.out)
          Result.append ("%N")
        end
      end
end
