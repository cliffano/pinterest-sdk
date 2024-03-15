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
class MMM_REPORTING_COLUMN

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_spend_in_dollar: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("SPEND_IN_DOLLAR")
    end

 val_spend_in_micro_dollar: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("SPEND_IN_MICRO_DOLLAR")
    end

 val_ecpc_in_dollar: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("ECPC_IN_DOLLAR")
    end

 val_ectr: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("ECTR")
    end

 val_campaign_name: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("CAMPAIGN_NAME")
    end

 val_total_engagement: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("TOTAL_ENGAGEMENT")
    end

 val_eengagement_rate: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("EENGAGEMENT_RATE")
    end

 val_ecpm_in_dollar: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("ECPM_IN_DOLLAR")
    end

 val_campaign_id: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("CAMPAIGN_ID")
    end

 val_advertiser_id: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("ADVERTISER_ID")
    end

 val_ad_group_id: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("AD_GROUP_ID")
    end

 val_ad_group_name: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("AD_GROUP_NAME")
    end

 val_clickthrough_1: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("CLICKTHROUGH_1")
    end

 val_impression_1: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("IMPRESSION_1")
    end

 val_clickthrough_2: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("CLICKTHROUGH_2")
    end

 val_impression_2: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("IMPRESSION_2")
    end

 val_total_clickthrough: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("TOTAL_CLICKTHROUGH")
    end

 val_total_impression: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("TOTAL_IMPRESSION")
    end

 val_advertiser_name: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("ADVERTISER_NAME")
    end

 val_spend_order_line_paid_type: MMM_REPORTING_COLUMN
    once
      create Result
      Result.set_value ("SPEND_ORDER_LINE_PAID_TYPE")
    end


feature -- Element Change

  set_value (a_val: like value)
      -- Set `value' with `a_value'.
    do
      value := a_val
    ensure
      value_set: value = a_val
    end


end

