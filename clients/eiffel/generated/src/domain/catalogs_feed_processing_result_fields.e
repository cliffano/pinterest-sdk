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
class CATALOGS_FEED_PROCESSING_RESULT_FIELDS




feature --Access

    ingestion_details: detachable CATALOGS_FEED_INGESTION_DETAILS
      
    status: detachable CATALOGS_FEED_PROCESSING_STATUS
      
    product_counts: detachable CATALOGS_FEED_PRODUCT_COUNTS
      
    validation_details: detachable CATALOGS_FEED_VALIDATION_DETAILS
      

feature -- Change Element

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
        Result.append("%Nclass CATALOGS_FEED_PROCESSING_RESULT_FIELDS%N")
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

