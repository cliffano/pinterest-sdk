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
class AD_GROUP_RESPONSE




feature --Access

    name: detachable STRING_32
      -- Ad group name.
    status: detachable ENTITY_STATUS
      -- Ad group/entity status.
    budget_in_micro_currency: INTEGER_32
      -- Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    bid_in_micro_currency: INTEGER_32
      -- Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    optimization_goal_metadata: detachable AD_GROUP_COMMON_OPTIMIZATION_GOAL_METADATA
      
    budget_type: detachable BUDGET_TYPE
      
    start_time: INTEGER_32
      -- Ad group start time. Unix timestamp in seconds. Defaults to current time.
    end_time: INTEGER_32
      -- Ad group end time. Unix timestamp in seconds.
    targeting_spec: detachable TARGETING_SPEC
      
    lifetime_frequency_cap: INTEGER_32
      -- Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
    tracking_urls: detachable AD_GROUP_COMMON_TRACKING_URLS
      
    auto_targeting_enabled: BOOLEAN
      -- Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
    placement_group: detachable PLACEMENT_GROUP_TYPE
      -- <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
    pacing_delivery_type: detachable PACING_DELIVERY_TYPE
      
    campaign_id: detachable STRING_32
      -- Campaign ID of the ad group.
    billable_event: detachable ACTION_TYPE
      
    bid_strategy_type: detachable STRING_32
      -- Bid strategy type
    id: detachable STRING_32
      -- Ad group ID.
    ad_account_id: detachable STRING_32
      -- Advertiser ID.
    created_time: INTEGER_32
      -- Ad group creation time. Unix timestamp in seconds.
    updated_time: INTEGER_32
      -- Ad group last update time. Unix timestamp in seconds.
    type: detachable STRING_32
      -- Always \"adgroup\".
    conversion_learning_mode_type: detachable STRING_32
      -- oCPM learn mode
    summary_status: detachable AD_GROUP_SUMMARY_STATUS
      -- Ad group summary status.
    feed_profile_id: detachable STRING_32
      -- Feed Profile ID associated to the adgroup.
    dca_assets: detachable ANY
      -- [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.

feature -- Change Element

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_budget_in_micro_currency (a_name: like budget_in_micro_currency)
        -- Set 'budget_in_micro_currency' with 'a_name'.
      do
        budget_in_micro_currency := a_name
      ensure
        budget_in_micro_currency_set: budget_in_micro_currency = a_name
      end

    set_bid_in_micro_currency (a_name: like bid_in_micro_currency)
        -- Set 'bid_in_micro_currency' with 'a_name'.
      do
        bid_in_micro_currency := a_name
      ensure
        bid_in_micro_currency_set: bid_in_micro_currency = a_name
      end

    set_optimization_goal_metadata (a_name: like optimization_goal_metadata)
        -- Set 'optimization_goal_metadata' with 'a_name'.
      do
        optimization_goal_metadata := a_name
      ensure
        optimization_goal_metadata_set: optimization_goal_metadata = a_name
      end

    set_budget_type (a_name: like budget_type)
        -- Set 'budget_type' with 'a_name'.
      do
        budget_type := a_name
      ensure
        budget_type_set: budget_type = a_name
      end

    set_start_time (a_name: like start_time)
        -- Set 'start_time' with 'a_name'.
      do
        start_time := a_name
      ensure
        start_time_set: start_time = a_name
      end

    set_end_time (a_name: like end_time)
        -- Set 'end_time' with 'a_name'.
      do
        end_time := a_name
      ensure
        end_time_set: end_time = a_name
      end

    set_targeting_spec (a_name: like targeting_spec)
        -- Set 'targeting_spec' with 'a_name'.
      do
        targeting_spec := a_name
      ensure
        targeting_spec_set: targeting_spec = a_name
      end

    set_lifetime_frequency_cap (a_name: like lifetime_frequency_cap)
        -- Set 'lifetime_frequency_cap' with 'a_name'.
      do
        lifetime_frequency_cap := a_name
      ensure
        lifetime_frequency_cap_set: lifetime_frequency_cap = a_name
      end

    set_tracking_urls (a_name: like tracking_urls)
        -- Set 'tracking_urls' with 'a_name'.
      do
        tracking_urls := a_name
      ensure
        tracking_urls_set: tracking_urls = a_name
      end

    set_auto_targeting_enabled (a_name: like auto_targeting_enabled)
        -- Set 'auto_targeting_enabled' with 'a_name'.
      do
        auto_targeting_enabled := a_name
      ensure
        auto_targeting_enabled_set: auto_targeting_enabled = a_name
      end

    set_placement_group (a_name: like placement_group)
        -- Set 'placement_group' with 'a_name'.
      do
        placement_group := a_name
      ensure
        placement_group_set: placement_group = a_name
      end

    set_pacing_delivery_type (a_name: like pacing_delivery_type)
        -- Set 'pacing_delivery_type' with 'a_name'.
      do
        pacing_delivery_type := a_name
      ensure
        pacing_delivery_type_set: pacing_delivery_type = a_name
      end

    set_campaign_id (a_name: like campaign_id)
        -- Set 'campaign_id' with 'a_name'.
      do
        campaign_id := a_name
      ensure
        campaign_id_set: campaign_id = a_name
      end

    set_billable_event (a_name: like billable_event)
        -- Set 'billable_event' with 'a_name'.
      do
        billable_event := a_name
      ensure
        billable_event_set: billable_event = a_name
      end

    set_bid_strategy_type (a_name: like bid_strategy_type)
        -- Set 'bid_strategy_type' with 'a_name'.
      do
        bid_strategy_type := a_name
      ensure
        bid_strategy_type_set: bid_strategy_type = a_name
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name
      end

    set_ad_account_id (a_name: like ad_account_id)
        -- Set 'ad_account_id' with 'a_name'.
      do
        ad_account_id := a_name
      ensure
        ad_account_id_set: ad_account_id = a_name
      end

    set_created_time (a_name: like created_time)
        -- Set 'created_time' with 'a_name'.
      do
        created_time := a_name
      ensure
        created_time_set: created_time = a_name
      end

    set_updated_time (a_name: like updated_time)
        -- Set 'updated_time' with 'a_name'.
      do
        updated_time := a_name
      ensure
        updated_time_set: updated_time = a_name
      end

    set_type (a_name: like type)
        -- Set 'type' with 'a_name'.
      do
        type := a_name
      ensure
        type_set: type = a_name
      end

    set_conversion_learning_mode_type (a_name: like conversion_learning_mode_type)
        -- Set 'conversion_learning_mode_type' with 'a_name'.
      do
        conversion_learning_mode_type := a_name
      ensure
        conversion_learning_mode_type_set: conversion_learning_mode_type = a_name
      end

    set_summary_status (a_name: like summary_status)
        -- Set 'summary_status' with 'a_name'.
      do
        summary_status := a_name
      ensure
        summary_status_set: summary_status = a_name
      end

    set_feed_profile_id (a_name: like feed_profile_id)
        -- Set 'feed_profile_id' with 'a_name'.
      do
        feed_profile_id := a_name
      ensure
        feed_profile_id_set: feed_profile_id = a_name
      end

    set_dca_assets (a_name: like dca_assets)
        -- Set 'dca_assets' with 'a_name'.
      do
        dca_assets := a_name
      ensure
        dca_assets_set: dca_assets = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass AD_GROUP_RESPONSE%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached budget_in_micro_currency as l_budget_in_micro_currency then
          Result.append ("%Nbudget_in_micro_currency:")
          Result.append (l_budget_in_micro_currency.out)
          Result.append ("%N")
        end
        if attached bid_in_micro_currency as l_bid_in_micro_currency then
          Result.append ("%Nbid_in_micro_currency:")
          Result.append (l_bid_in_micro_currency.out)
          Result.append ("%N")
        end
        if attached optimization_goal_metadata as l_optimization_goal_metadata then
          Result.append ("%Noptimization_goal_metadata:")
          Result.append (l_optimization_goal_metadata.out)
          Result.append ("%N")
        end
        if attached budget_type as l_budget_type then
          Result.append ("%Nbudget_type:")
          Result.append (l_budget_type.out)
          Result.append ("%N")
        end
        if attached start_time as l_start_time then
          Result.append ("%Nstart_time:")
          Result.append (l_start_time.out)
          Result.append ("%N")
        end
        if attached end_time as l_end_time then
          Result.append ("%Nend_time:")
          Result.append (l_end_time.out)
          Result.append ("%N")
        end
        if attached targeting_spec as l_targeting_spec then
          Result.append ("%Ntargeting_spec:")
          Result.append (l_targeting_spec.out)
          Result.append ("%N")
        end
        if attached lifetime_frequency_cap as l_lifetime_frequency_cap then
          Result.append ("%Nlifetime_frequency_cap:")
          Result.append (l_lifetime_frequency_cap.out)
          Result.append ("%N")
        end
        if attached tracking_urls as l_tracking_urls then
          Result.append ("%Ntracking_urls:")
          Result.append (l_tracking_urls.out)
          Result.append ("%N")
        end
        if attached auto_targeting_enabled as l_auto_targeting_enabled then
          Result.append ("%Nauto_targeting_enabled:")
          Result.append (l_auto_targeting_enabled.out)
          Result.append ("%N")
        end
        if attached placement_group as l_placement_group then
          Result.append ("%Nplacement_group:")
          Result.append (l_placement_group.out)
          Result.append ("%N")
        end
        if attached pacing_delivery_type as l_pacing_delivery_type then
          Result.append ("%Npacing_delivery_type:")
          Result.append (l_pacing_delivery_type.out)
          Result.append ("%N")
        end
        if attached campaign_id as l_campaign_id then
          Result.append ("%Ncampaign_id:")
          Result.append (l_campaign_id.out)
          Result.append ("%N")
        end
        if attached billable_event as l_billable_event then
          Result.append ("%Nbillable_event:")
          Result.append (l_billable_event.out)
          Result.append ("%N")
        end
        if attached bid_strategy_type as l_bid_strategy_type then
          Result.append ("%Nbid_strategy_type:")
          Result.append (l_bid_strategy_type.out)
          Result.append ("%N")
        end
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")
        end
        if attached ad_account_id as l_ad_account_id then
          Result.append ("%Nad_account_id:")
          Result.append (l_ad_account_id.out)
          Result.append ("%N")
        end
        if attached created_time as l_created_time then
          Result.append ("%Ncreated_time:")
          Result.append (l_created_time.out)
          Result.append ("%N")
        end
        if attached updated_time as l_updated_time then
          Result.append ("%Nupdated_time:")
          Result.append (l_updated_time.out)
          Result.append ("%N")
        end
        if attached type as l_type then
          Result.append ("%Ntype:")
          Result.append (l_type.out)
          Result.append ("%N")
        end
        if attached conversion_learning_mode_type as l_conversion_learning_mode_type then
          Result.append ("%Nconversion_learning_mode_type:")
          Result.append (l_conversion_learning_mode_type.out)
          Result.append ("%N")
        end
        if attached summary_status as l_summary_status then
          Result.append ("%Nsummary_status:")
          Result.append (l_summary_status.out)
          Result.append ("%N")
        end
        if attached feed_profile_id as l_feed_profile_id then
          Result.append ("%Nfeed_profile_id:")
          Result.append (l_feed_profile_id.out)
          Result.append ("%N")
        end
        if attached dca_assets as l_dca_assets then
          Result.append ("%Ndca_assets:")
          Result.append (l_dca_assets.out)
          Result.append ("%N")
        end
      end
end
