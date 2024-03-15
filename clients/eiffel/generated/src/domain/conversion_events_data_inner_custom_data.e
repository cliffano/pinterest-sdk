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
class CONVERSION_EVENTS_DATA_INNER_CUSTOM_DATA




feature --Access

    currency: detachable STRING_32
      -- The ISO-4217 currency code. If not provided, we will default to the advertiser's currency set during account creation. Your campaign performance needs this field to report right ROAS/CPA.
    value: detachable STRING_32
      -- Total value of the event. Accepted as a string in the request; it will be parsed into a double. For example, if there are two items in a checkout event, the value should be the total price. We recommend to use pre-tax, pre-shipping final value.
    content_ids: detachable LIST [STRING_32]
      -- List of products IDs. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    content_name: detachable STRING_32
      -- The name of the page or product associated with the event.
    content_category: detachable STRING_32
      -- The category of the content associated with the event.
    content_brand: detachable STRING_32
      -- The brand of the content associated with the event.
    contents: detachable LIST [CONVERSION_EVENTS_DATA_INNER_CUSTOM_DATA_CONTENTS_INNER]
      -- A list of objects containing information about products, such as price and quantity. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    num_items: INTEGER_64
      -- Total number of products of the event. For example, the total number of items purchased in a checkout event. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    order_id: detachable STRING_32
      -- The order ID. We recommend sending order_id to help us deduplicate events when necessary. This also helps to run other measurement products at Pinterest.
    search_string: detachable STRING_32
      -- The search string related to the user conversion event.
    opt_out_type: detachable STRING_32
      -- Flags for different privacy rights laws to opt out users of sharing personal information. Values should be comma separated. Please follow the <a href=\"https://help.pinterest.com/en/business/article/limited-data-processing\" target=\"_blank\">Help Center</a> and <a href=\"https://developers.pinterest.com/docs/conversions/conversion-management/#Understanding%20Limited%20Data%20Processing\" target=\"_blank\">dev site</a> for specific opt_out_type set up.
    np: detachable STRING_32
      -- Named partner. Not required, this is for Pinterest internal use only. Please do not use this unless specifically guided.

feature -- Change Element

    set_currency (a_name: like currency)
        -- Set 'currency' with 'a_name'.
      do
        currency := a_name
      ensure
        currency_set: currency = a_name
      end

    set_value (a_name: like value)
        -- Set 'value' with 'a_name'.
      do
        value := a_name
      ensure
        value_set: value = a_name
      end

    set_content_ids (a_name: like content_ids)
        -- Set 'content_ids' with 'a_name'.
      do
        content_ids := a_name
      ensure
        content_ids_set: content_ids = a_name
      end

    set_content_name (a_name: like content_name)
        -- Set 'content_name' with 'a_name'.
      do
        content_name := a_name
      ensure
        content_name_set: content_name = a_name
      end

    set_content_category (a_name: like content_category)
        -- Set 'content_category' with 'a_name'.
      do
        content_category := a_name
      ensure
        content_category_set: content_category = a_name
      end

    set_content_brand (a_name: like content_brand)
        -- Set 'content_brand' with 'a_name'.
      do
        content_brand := a_name
      ensure
        content_brand_set: content_brand = a_name
      end

    set_contents (a_name: like contents)
        -- Set 'contents' with 'a_name'.
      do
        contents := a_name
      ensure
        contents_set: contents = a_name
      end

    set_num_items (a_name: like num_items)
        -- Set 'num_items' with 'a_name'.
      do
        num_items := a_name
      ensure
        num_items_set: num_items = a_name
      end

    set_order_id (a_name: like order_id)
        -- Set 'order_id' with 'a_name'.
      do
        order_id := a_name
      ensure
        order_id_set: order_id = a_name
      end

    set_search_string (a_name: like search_string)
        -- Set 'search_string' with 'a_name'.
      do
        search_string := a_name
      ensure
        search_string_set: search_string = a_name
      end

    set_opt_out_type (a_name: like opt_out_type)
        -- Set 'opt_out_type' with 'a_name'.
      do
        opt_out_type := a_name
      ensure
        opt_out_type_set: opt_out_type = a_name
      end

    set_np (a_name: like np)
        -- Set 'np' with 'a_name'.
      do
        np := a_name
      ensure
        np_set: np = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CONVERSION_EVENTS_DATA_INNER_CUSTOM_DATA%N")
        if attached currency as l_currency then
          Result.append ("%Ncurrency:")
          Result.append (l_currency.out)
          Result.append ("%N")
        end
        if attached value as l_value then
          Result.append ("%Nvalue:")
          Result.append (l_value.out)
          Result.append ("%N")
        end
        if attached content_ids as l_content_ids then
          across l_content_ids as ic loop
            Result.append ("%N content_ids:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached content_name as l_content_name then
          Result.append ("%Ncontent_name:")
          Result.append (l_content_name.out)
          Result.append ("%N")
        end
        if attached content_category as l_content_category then
          Result.append ("%Ncontent_category:")
          Result.append (l_content_category.out)
          Result.append ("%N")
        end
        if attached content_brand as l_content_brand then
          Result.append ("%Ncontent_brand:")
          Result.append (l_content_brand.out)
          Result.append ("%N")
        end
        if attached contents as l_contents then
          across l_contents as ic loop
            Result.append ("%N contents:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
        if attached num_items as l_num_items then
          Result.append ("%Nnum_items:")
          Result.append (l_num_items.out)
          Result.append ("%N")
        end
        if attached order_id as l_order_id then
          Result.append ("%Norder_id:")
          Result.append (l_order_id.out)
          Result.append ("%N")
        end
        if attached search_string as l_search_string then
          Result.append ("%Nsearch_string:")
          Result.append (l_search_string.out)
          Result.append ("%N")
        end
        if attached opt_out_type as l_opt_out_type then
          Result.append ("%Nopt_out_type:")
          Result.append (l_opt_out_type.out)
          Result.append ("%N")
        end
        if attached np as l_np then
          Result.append ("%Nnp:")
          Result.append (l_np.out)
          Result.append ("%N")
        end
      end
end

