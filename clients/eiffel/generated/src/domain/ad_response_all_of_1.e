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
class AD_RESPONSE_ALL_OF_1




feature --Access

    ad_account_id: detachable STRING_32
      -- The ID of the advertiser that this ad belongs to.
    campaign_id: detachable STRING_32
      -- ID of the ad campaign that contains this ad.
    collection_items_destination_url_template: detachable STRING_32
      -- Destination URL template for all items within a collections drawer.
 	created_time: INTEGER_32
    	 -- Pin creation time. Unix timestamp in seconds.
    id: detachable STRING_32
      -- The ID of this ad.
    rejected_reasons: detachable LIST [STRING_32]
      -- Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    rejection_labels: detachable LIST [STRING_32]
      -- Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    review_status: detachable STRING_32
      -- Ad review status
    type: detachable STRING_32
      -- Always \"ad\".
 	updated_time: INTEGER_32
    	 -- Last update time. Unix timestamp in seconds.
    summary_status: detachable PIN_PROMOTION_SUMMARY_STATUS
      -- Ad summary status

feature -- Change Element

    set_ad_account_id (a_name: like ad_account_id)
        -- Set 'ad_account_id' with 'a_name'.
      do
        ad_account_id := a_name
      ensure
        ad_account_id_set: ad_account_id = a_name
      end

    set_campaign_id (a_name: like campaign_id)
        -- Set 'campaign_id' with 'a_name'.
      do
        campaign_id := a_name
      ensure
        campaign_id_set: campaign_id = a_name
      end

    set_collection_items_destination_url_template (a_name: like collection_items_destination_url_template)
        -- Set 'collection_items_destination_url_template' with 'a_name'.
      do
        collection_items_destination_url_template := a_name
      ensure
        collection_items_destination_url_template_set: collection_items_destination_url_template = a_name
      end

    set_created_time (a_name: like created_time)
        -- Set 'created_time' with 'a_name'.
      do
        created_time := a_name
      ensure
        created_time_set: created_time = a_name
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end

    set_rejected_reasons (a_name: like rejected_reasons)
        -- Set 'rejected_reasons' with 'a_name'.
      do
        rejected_reasons := a_name
      ensure
        rejected_reasons_set: rejected_reasons = a_name
      end

    set_rejection_labels (a_name: like rejection_labels)
        -- Set 'rejection_labels' with 'a_name'.
      do
        rejection_labels := a_name
      ensure
        rejection_labels_set: rejection_labels = a_name
      end

    set_review_status (a_name: like review_status)
        -- Set 'review_status' with 'a_name'.
      do
        review_status := a_name
      ensure
        review_status_set: review_status = a_name
      end

    set_type (a_name: like type)
        -- Set 'type' with 'a_name'.
      do
        type := a_name
      ensure
        type_set: type = a_name
      end

    set_updated_time (a_name: like updated_time)
        -- Set 'updated_time' with 'a_name'.
      do
        updated_time := a_name
      ensure
        updated_time_set: updated_time = a_name
      end

    set_summary_status (a_name: like summary_status)
        -- Set 'summary_status' with 'a_name'.
      do
        summary_status := a_name
      ensure
        summary_status_set: summary_status = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass AD_RESPONSE_ALL_OF_1%N")
        if attached ad_account_id as l_ad_account_id then
          Result.append ("%Nad_account_id:")
          Result.append (l_ad_account_id.out)
          Result.append ("%N")
        end
        if attached campaign_id as l_campaign_id then
          Result.append ("%Ncampaign_id:")
          Result.append (l_campaign_id.out)
          Result.append ("%N")
        end
        if attached collection_items_destination_url_template as l_collection_items_destination_url_template then
          Result.append ("%Ncollection_items_destination_url_template:")
          Result.append (l_collection_items_destination_url_template.out)
          Result.append ("%N")
        end
        if attached created_time as l_created_time then
          Result.append ("%Ncreated_time:")
          Result.append (l_created_time.out)
          Result.append ("%N")
        end
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
        if attached rejected_reasons as l_rejected_reasons then
          across l_rejected_reasons as ic loop
            Result.append ("%N rejected_reasons:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached rejection_labels as l_rejection_labels then
          across l_rejection_labels as ic loop
            Result.append ("%N rejection_labels:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached review_status as l_review_status then
          Result.append ("%Nreview_status:")
          Result.append (l_review_status.out)
          Result.append ("%N")
        end
        if attached type as l_type then
          Result.append ("%Ntype:")
          Result.append (l_type.out)
          Result.append ("%N")
        end
        if attached updated_time as l_updated_time then
          Result.append ("%Nupdated_time:")
          Result.append (l_updated_time.out)
          Result.append ("%N")
        end
        if attached summary_status as l_summary_status then
          Result.append ("%Nsummary_status:")
          Result.append (l_summary_status.out)
          Result.append ("%N")
        end
      end
end

