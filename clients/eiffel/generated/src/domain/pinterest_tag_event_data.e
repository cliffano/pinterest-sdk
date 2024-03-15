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
class PINTEREST_TAG_EVENT_DATA




feature --Access

    currency: detachable CURRENCY
      
    lead_type: detachable STRING_32
      -- Promotion code. For example, \"Newsletter\".
    line_items: detachable LINE_ITEM
      
    order_id: detachable STRING_32
      -- Order ID. For example, \"X-151481\".
    order_quantity: INTEGER_32
      -- Order quantity. For example, 1.
    page_name: detachable STRING_32
      -- Page name. For example, \"Our Favorite Pins on Pinterest\".
    promo_code: detachable STRING_32
      -- Promotion code. For example, \"WINTER10\".
    property: detachable STRING_32
      -- Property. For example, \"Athleta\".
    search_query: detachable STRING_32
      -- Search query string. For example, \"boots\".
    value: detachable STRING_32
      -- Product value. For example, \"199.98\"
    video_title: detachable STRING_32
      -- Video title. For example, \"How to style your Parker Boots\".

feature -- Change Element

    set_currency (a_name: like currency)
        -- Set 'currency' with 'a_name'.
      do
        currency := a_name
      ensure
        currency_set: currency = a_name
      end

    set_lead_type (a_name: like lead_type)
        -- Set 'lead_type' with 'a_name'.
      do
        lead_type := a_name
      ensure
        lead_type_set: lead_type = a_name
      end

    set_line_items (a_name: like line_items)
        -- Set 'line_items' with 'a_name'.
      do
        line_items := a_name
      ensure
        line_items_set: line_items = a_name
      end

    set_order_id (a_name: like order_id)
        -- Set 'order_id' with 'a_name'.
      do
        order_id := a_name
      ensure
        order_id_set: order_id = a_name
      end

    set_order_quantity (a_name: like order_quantity)
        -- Set 'order_quantity' with 'a_name'.
      do
        order_quantity := a_name
      ensure
        order_quantity_set: order_quantity = a_name
      end

    set_page_name (a_name: like page_name)
        -- Set 'page_name' with 'a_name'.
      do
        page_name := a_name
      ensure
        page_name_set: page_name = a_name
      end

    set_promo_code (a_name: like promo_code)
        -- Set 'promo_code' with 'a_name'.
      do
        promo_code := a_name
      ensure
        promo_code_set: promo_code = a_name
      end

    set_property (a_name: like property)
        -- Set 'property' with 'a_name'.
      do
        property := a_name
      ensure
        property_set: property = a_name
      end

    set_search_query (a_name: like search_query)
        -- Set 'search_query' with 'a_name'.
      do
        search_query := a_name
      ensure
        search_query_set: search_query = a_name
      end

    set_value (a_name: like value)
        -- Set 'value' with 'a_name'.
      do
        value := a_name
      ensure
        value_set: value = a_name
      end

    set_video_title (a_name: like video_title)
        -- Set 'video_title' with 'a_name'.
      do
        video_title := a_name
      ensure
        video_title_set: video_title = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PINTEREST_TAG_EVENT_DATA%N")
        if attached currency as l_currency then
          Result.append ("%Ncurrency:")
          Result.append (l_currency.out)
          Result.append ("%N")
        end
        if attached lead_type as l_lead_type then
          Result.append ("%Nlead_type:")
          Result.append (l_lead_type.out)
          Result.append ("%N")
        end
        if attached line_items as l_line_items then
          Result.append ("%Nline_items:")
          Result.append (l_line_items.out)
          Result.append ("%N")
        end
        if attached order_id as l_order_id then
          Result.append ("%Norder_id:")
          Result.append (l_order_id.out)
          Result.append ("%N")
        end
        if attached order_quantity as l_order_quantity then
          Result.append ("%Norder_quantity:")
          Result.append (l_order_quantity.out)
          Result.append ("%N")
        end
        if attached page_name as l_page_name then
          Result.append ("%Npage_name:")
          Result.append (l_page_name.out)
          Result.append ("%N")
        end
        if attached promo_code as l_promo_code then
          Result.append ("%Npromo_code:")
          Result.append (l_promo_code.out)
          Result.append ("%N")
        end
        if attached property as l_property then
          Result.append ("%Nproperty:")
          Result.append (l_property.out)
          Result.append ("%N")
        end
        if attached search_query as l_search_query then
          Result.append ("%Nsearch_query:")
          Result.append (l_search_query.out)
          Result.append ("%N")
        end
        if attached value as l_value then
          Result.append ("%Nvalue:")
          Result.append (l_value.out)
          Result.append ("%N")
        end
        if attached video_title as l_video_title then
          Result.append ("%Nvideo_title:")
          Result.append (l_video_title.out)
          Result.append ("%N")
        end
      end
end

