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
class CAMPAIGN_UPDATE_REQUEST




feature --Access

    id: detachable STRING_32
      -- Campaign ID.
    ad_account_id: detachable STRING_32
      -- Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
    name: detachable STRING_32
      -- Campaign name.
    status: detachable ENTITY_STATUS
      
    lifetime_spend_cap: INTEGER_32
      -- Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
    daily_spend_cap: INTEGER_32
      -- Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
    order_line_id: detachable STRING_32
      -- Order line ID that appears on the invoice.
    tracking_urls: detachable AD_COMMON_TRACKING_URLS
      
    start_time: INTEGER_32
      -- Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    end_time: INTEGER_32
      -- Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    summary_status: detachable CAMPAIGN_SUMMARY_STATUS
      
    is_flexible_daily_budgets: BOOLEAN
      -- Determine if a campaign has flexible daily budgets setup.
    default_ad_group_budget_in_micro_currency: INTEGER_32
      -- When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
    is_automated_campaign: BOOLEAN
      -- Specifies whether the campaign was created in the automated campaign flow
    is_campaign_budget_optimization: BOOLEAN
      -- Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
    objective_type: detachable OBJECTIVE_TYPE
      

feature -- Change Element

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

    set_lifetime_spend_cap (a_name: like lifetime_spend_cap)
        -- Set 'lifetime_spend_cap' with 'a_name'.
      do
        lifetime_spend_cap := a_name
      ensure
        lifetime_spend_cap_set: lifetime_spend_cap = a_name
      end

    set_daily_spend_cap (a_name: like daily_spend_cap)
        -- Set 'daily_spend_cap' with 'a_name'.
      do
        daily_spend_cap := a_name
      ensure
        daily_spend_cap_set: daily_spend_cap = a_name
      end

    set_order_line_id (a_name: like order_line_id)
        -- Set 'order_line_id' with 'a_name'.
      do
        order_line_id := a_name
      ensure
        order_line_id_set: order_line_id = a_name
      end

    set_tracking_urls (a_name: like tracking_urls)
        -- Set 'tracking_urls' with 'a_name'.
      do
        tracking_urls := a_name
      ensure
        tracking_urls_set: tracking_urls = a_name
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

    set_summary_status (a_name: like summary_status)
        -- Set 'summary_status' with 'a_name'.
      do
        summary_status := a_name
      ensure
        summary_status_set: summary_status = a_name
      end

    set_is_flexible_daily_budgets (a_name: like is_flexible_daily_budgets)
        -- Set 'is_flexible_daily_budgets' with 'a_name'.
      do
        is_flexible_daily_budgets := a_name
      ensure
        is_flexible_daily_budgets_set: is_flexible_daily_budgets = a_name
      end

    set_default_ad_group_budget_in_micro_currency (a_name: like default_ad_group_budget_in_micro_currency)
        -- Set 'default_ad_group_budget_in_micro_currency' with 'a_name'.
      do
        default_ad_group_budget_in_micro_currency := a_name
      ensure
        default_ad_group_budget_in_micro_currency_set: default_ad_group_budget_in_micro_currency = a_name
      end

    set_is_automated_campaign (a_name: like is_automated_campaign)
        -- Set 'is_automated_campaign' with 'a_name'.
      do
        is_automated_campaign := a_name
      ensure
        is_automated_campaign_set: is_automated_campaign = a_name
      end

    set_is_campaign_budget_optimization (a_name: like is_campaign_budget_optimization)
        -- Set 'is_campaign_budget_optimization' with 'a_name'.
      do
        is_campaign_budget_optimization := a_name
      ensure
        is_campaign_budget_optimization_set: is_campaign_budget_optimization = a_name
      end

    set_objective_type (a_name: like objective_type)
        -- Set 'objective_type' with 'a_name'.
      do
        objective_type := a_name
      ensure
        objective_type_set: objective_type = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CAMPAIGN_UPDATE_REQUEST%N")
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
        if attached lifetime_spend_cap as l_lifetime_spend_cap then
          Result.append ("%Nlifetime_spend_cap:")
          Result.append (l_lifetime_spend_cap.out)
          Result.append ("%N")
        end
        if attached daily_spend_cap as l_daily_spend_cap then
          Result.append ("%Ndaily_spend_cap:")
          Result.append (l_daily_spend_cap.out)
          Result.append ("%N")
        end
        if attached order_line_id as l_order_line_id then
          Result.append ("%Norder_line_id:")
          Result.append (l_order_line_id.out)
          Result.append ("%N")
        end
        if attached tracking_urls as l_tracking_urls then
          Result.append ("%Ntracking_urls:")
          Result.append (l_tracking_urls.out)
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
        if attached summary_status as l_summary_status then
          Result.append ("%Nsummary_status:")
          Result.append (l_summary_status.out)
          Result.append ("%N")
        end
        if attached is_flexible_daily_budgets as l_is_flexible_daily_budgets then
          Result.append ("%Nis_flexible_daily_budgets:")
          Result.append (l_is_flexible_daily_budgets.out)
          Result.append ("%N")
        end
        if attached default_ad_group_budget_in_micro_currency as l_default_ad_group_budget_in_micro_currency then
          Result.append ("%Ndefault_ad_group_budget_in_micro_currency:")
          Result.append (l_default_ad_group_budget_in_micro_currency.out)
          Result.append ("%N")
        end
        if attached is_automated_campaign as l_is_automated_campaign then
          Result.append ("%Nis_automated_campaign:")
          Result.append (l_is_automated_campaign.out)
          Result.append ("%N")
        end
        if attached is_campaign_budget_optimization as l_is_campaign_budget_optimization then
          Result.append ("%Nis_campaign_budget_optimization:")
          Result.append (l_is_campaign_budget_optimization.out)
          Result.append ("%N")
        end
        if attached objective_type as l_objective_type then
          Result.append ("%Nobjective_type:")
          Result.append (l_objective_type.out)
          Result.append ("%N")
        end
      end
end
