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
class CATALOGS_FEED_VALIDATION_ERRORS




feature --Access

 	fetch_error: INTEGER_32
    	 
 	fetch_inactive_feed_error: INTEGER_32
    	 
 	encoding_error: INTEGER_32
    	 
 	delimiter_error: INTEGER_32
    	 
 	required_columns_missing: INTEGER_32
    	 
 	image_link_invalid: INTEGER_32
    	 
 	itemid_missing: INTEGER_32
    	 
 	title_missing: INTEGER_32
    	 
 	description_missing: INTEGER_32
    	 
 	product_category_invalid: INTEGER_32
    	 
 	product_link_missing: INTEGER_32
    	 
 	image_link_missing: INTEGER_32
    	 
 	availability_invalid: INTEGER_32
    	 
 	product_price_invalid: INTEGER_32
    	 
 	link_format_invalid: INTEGER_32
    	 
 	parse_line_error: INTEGER_32
    	 
 	adwords_format_invalid: INTEGER_32
    	 
 	product_category_missing: INTEGER_32
    	 
 	internal_service_error: INTEGER_32
    	 
 	no_verified_domain: INTEGER_32
    	 
 	adult_invalid: INTEGER_32
    	 
 	invalid_domain: INTEGER_32
    	 
 	feed_length_too_long: INTEGER_32
    	 
 	link_length_too_long: INTEGER_32
    	 
 	malformed_xml: INTEGER_32
    	 
 	redirect_invalid: INTEGER_32
    	 
 	price_missing: INTEGER_32
    	 
 	feed_too_small: INTEGER_32
    	 
 	condition_invalid: INTEGER_32
    	 
 	shopify_no_products: INTEGER_32
    	 
 	max_items_per_item_group_exceeded: INTEGER_32
    	 
 	item_main_image_download_failure: INTEGER_32
    	 
 	pinjoin_content_unsafe: INTEGER_32
    	 
 	blocklisted_image_signature: INTEGER_32
    	 

feature -- Change Element

    set_fetch_error (a_name: like fetch_error)
        -- Set 'fetch_error' with 'a_name'.
      do
        fetch_error := a_name
      ensure
        fetch_error_set: fetch_error = a_name
      end

    set_fetch_inactive_feed_error (a_name: like fetch_inactive_feed_error)
        -- Set 'fetch_inactive_feed_error' with 'a_name'.
      do
        fetch_inactive_feed_error := a_name
      ensure
        fetch_inactive_feed_error_set: fetch_inactive_feed_error = a_name
      end

    set_encoding_error (a_name: like encoding_error)
        -- Set 'encoding_error' with 'a_name'.
      do
        encoding_error := a_name
      ensure
        encoding_error_set: encoding_error = a_name
      end

    set_delimiter_error (a_name: like delimiter_error)
        -- Set 'delimiter_error' with 'a_name'.
      do
        delimiter_error := a_name
      ensure
        delimiter_error_set: delimiter_error = a_name
      end

    set_required_columns_missing (a_name: like required_columns_missing)
        -- Set 'required_columns_missing' with 'a_name'.
      do
        required_columns_missing := a_name
      ensure
        required_columns_missing_set: required_columns_missing = a_name
      end

    set_image_link_invalid (a_name: like image_link_invalid)
        -- Set 'image_link_invalid' with 'a_name'.
      do
        image_link_invalid := a_name
      ensure
        image_link_invalid_set: image_link_invalid = a_name
      end

    set_itemid_missing (a_name: like itemid_missing)
        -- Set 'itemid_missing' with 'a_name'.
      do
        itemid_missing := a_name
      ensure
        itemid_missing_set: itemid_missing = a_name
      end

    set_title_missing (a_name: like title_missing)
        -- Set 'title_missing' with 'a_name'.
      do
        title_missing := a_name
      ensure
        title_missing_set: title_missing = a_name
      end

    set_description_missing (a_name: like description_missing)
        -- Set 'description_missing' with 'a_name'.
      do
        description_missing := a_name
      ensure
        description_missing_set: description_missing = a_name
      end

    set_product_category_invalid (a_name: like product_category_invalid)
        -- Set 'product_category_invalid' with 'a_name'.
      do
        product_category_invalid := a_name
      ensure
        product_category_invalid_set: product_category_invalid = a_name
      end

    set_product_link_missing (a_name: like product_link_missing)
        -- Set 'product_link_missing' with 'a_name'.
      do
        product_link_missing := a_name
      ensure
        product_link_missing_set: product_link_missing = a_name
      end

    set_image_link_missing (a_name: like image_link_missing)
        -- Set 'image_link_missing' with 'a_name'.
      do
        image_link_missing := a_name
      ensure
        image_link_missing_set: image_link_missing = a_name
      end

    set_availability_invalid (a_name: like availability_invalid)
        -- Set 'availability_invalid' with 'a_name'.
      do
        availability_invalid := a_name
      ensure
        availability_invalid_set: availability_invalid = a_name
      end

    set_product_price_invalid (a_name: like product_price_invalid)
        -- Set 'product_price_invalid' with 'a_name'.
      do
        product_price_invalid := a_name
      ensure
        product_price_invalid_set: product_price_invalid = a_name
      end

    set_link_format_invalid (a_name: like link_format_invalid)
        -- Set 'link_format_invalid' with 'a_name'.
      do
        link_format_invalid := a_name
      ensure
        link_format_invalid_set: link_format_invalid = a_name
      end

    set_parse_line_error (a_name: like parse_line_error)
        -- Set 'parse_line_error' with 'a_name'.
      do
        parse_line_error := a_name
      ensure
        parse_line_error_set: parse_line_error = a_name
      end

    set_adwords_format_invalid (a_name: like adwords_format_invalid)
        -- Set 'adwords_format_invalid' with 'a_name'.
      do
        adwords_format_invalid := a_name
      ensure
        adwords_format_invalid_set: adwords_format_invalid = a_name
      end

    set_product_category_missing (a_name: like product_category_missing)
        -- Set 'product_category_missing' with 'a_name'.
      do
        product_category_missing := a_name
      ensure
        product_category_missing_set: product_category_missing = a_name
      end

    set_internal_service_error (a_name: like internal_service_error)
        -- Set 'internal_service_error' with 'a_name'.
      do
        internal_service_error := a_name
      ensure
        internal_service_error_set: internal_service_error = a_name
      end

    set_no_verified_domain (a_name: like no_verified_domain)
        -- Set 'no_verified_domain' with 'a_name'.
      do
        no_verified_domain := a_name
      ensure
        no_verified_domain_set: no_verified_domain = a_name
      end

    set_adult_invalid (a_name: like adult_invalid)
        -- Set 'adult_invalid' with 'a_name'.
      do
        adult_invalid := a_name
      ensure
        adult_invalid_set: adult_invalid = a_name
      end

    set_invalid_domain (a_name: like invalid_domain)
        -- Set 'invalid_domain' with 'a_name'.
      do
        invalid_domain := a_name
      ensure
        invalid_domain_set: invalid_domain = a_name
      end

    set_feed_length_too_long (a_name: like feed_length_too_long)
        -- Set 'feed_length_too_long' with 'a_name'.
      do
        feed_length_too_long := a_name
      ensure
        feed_length_too_long_set: feed_length_too_long = a_name
      end

    set_link_length_too_long (a_name: like link_length_too_long)
        -- Set 'link_length_too_long' with 'a_name'.
      do
        link_length_too_long := a_name
      ensure
        link_length_too_long_set: link_length_too_long = a_name
      end

    set_malformed_xml (a_name: like malformed_xml)
        -- Set 'malformed_xml' with 'a_name'.
      do
        malformed_xml := a_name
      ensure
        malformed_xml_set: malformed_xml = a_name
      end

    set_redirect_invalid (a_name: like redirect_invalid)
        -- Set 'redirect_invalid' with 'a_name'.
      do
        redirect_invalid := a_name
      ensure
        redirect_invalid_set: redirect_invalid = a_name
      end

    set_price_missing (a_name: like price_missing)
        -- Set 'price_missing' with 'a_name'.
      do
        price_missing := a_name
      ensure
        price_missing_set: price_missing = a_name
      end

    set_feed_too_small (a_name: like feed_too_small)
        -- Set 'feed_too_small' with 'a_name'.
      do
        feed_too_small := a_name
      ensure
        feed_too_small_set: feed_too_small = a_name
      end

    set_condition_invalid (a_name: like condition_invalid)
        -- Set 'condition_invalid' with 'a_name'.
      do
        condition_invalid := a_name
      ensure
        condition_invalid_set: condition_invalid = a_name
      end

    set_shopify_no_products (a_name: like shopify_no_products)
        -- Set 'shopify_no_products' with 'a_name'.
      do
        shopify_no_products := a_name
      ensure
        shopify_no_products_set: shopify_no_products = a_name
      end

    set_max_items_per_item_group_exceeded (a_name: like max_items_per_item_group_exceeded)
        -- Set 'max_items_per_item_group_exceeded' with 'a_name'.
      do
        max_items_per_item_group_exceeded := a_name
      ensure
        max_items_per_item_group_exceeded_set: max_items_per_item_group_exceeded = a_name
      end

    set_item_main_image_download_failure (a_name: like item_main_image_download_failure)
        -- Set 'item_main_image_download_failure' with 'a_name'.
      do
        item_main_image_download_failure := a_name
      ensure
        item_main_image_download_failure_set: item_main_image_download_failure = a_name
      end

    set_pinjoin_content_unsafe (a_name: like pinjoin_content_unsafe)
        -- Set 'pinjoin_content_unsafe' with 'a_name'.
      do
        pinjoin_content_unsafe := a_name
      ensure
        pinjoin_content_unsafe_set: pinjoin_content_unsafe = a_name
      end

    set_blocklisted_image_signature (a_name: like blocklisted_image_signature)
        -- Set 'blocklisted_image_signature' with 'a_name'.
      do
        blocklisted_image_signature := a_name
      ensure
        blocklisted_image_signature_set: blocklisted_image_signature = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CATALOGS_FEED_VALIDATION_ERRORS%N")
        if attached fetch_error as l_fetch_error then
          Result.append ("%Nfetch_error:")
          Result.append (l_fetch_error.out)
          Result.append ("%N")
        end
        if attached fetch_inactive_feed_error as l_fetch_inactive_feed_error then
          Result.append ("%Nfetch_inactive_feed_error:")
          Result.append (l_fetch_inactive_feed_error.out)
          Result.append ("%N")
        end
        if attached encoding_error as l_encoding_error then
          Result.append ("%Nencoding_error:")
          Result.append (l_encoding_error.out)
          Result.append ("%N")
        end
        if attached delimiter_error as l_delimiter_error then
          Result.append ("%Ndelimiter_error:")
          Result.append (l_delimiter_error.out)
          Result.append ("%N")
        end
        if attached required_columns_missing as l_required_columns_missing then
          Result.append ("%Nrequired_columns_missing:")
          Result.append (l_required_columns_missing.out)
          Result.append ("%N")
        end
        if attached image_link_invalid as l_image_link_invalid then
          Result.append ("%Nimage_link_invalid:")
          Result.append (l_image_link_invalid.out)
          Result.append ("%N")
        end
        if attached itemid_missing as l_itemid_missing then
          Result.append ("%Nitemid_missing:")
          Result.append (l_itemid_missing.out)
          Result.append ("%N")
        end
        if attached title_missing as l_title_missing then
          Result.append ("%Ntitle_missing:")
          Result.append (l_title_missing.out)
          Result.append ("%N")
        end
        if attached description_missing as l_description_missing then
          Result.append ("%Ndescription_missing:")
          Result.append (l_description_missing.out)
          Result.append ("%N")
        end
        if attached product_category_invalid as l_product_category_invalid then
          Result.append ("%Nproduct_category_invalid:")
          Result.append (l_product_category_invalid.out)
          Result.append ("%N")
        end
        if attached product_link_missing as l_product_link_missing then
          Result.append ("%Nproduct_link_missing:")
          Result.append (l_product_link_missing.out)
          Result.append ("%N")
        end
        if attached image_link_missing as l_image_link_missing then
          Result.append ("%Nimage_link_missing:")
          Result.append (l_image_link_missing.out)
          Result.append ("%N")
        end
        if attached availability_invalid as l_availability_invalid then
          Result.append ("%Navailability_invalid:")
          Result.append (l_availability_invalid.out)
          Result.append ("%N")
        end
        if attached product_price_invalid as l_product_price_invalid then
          Result.append ("%Nproduct_price_invalid:")
          Result.append (l_product_price_invalid.out)
          Result.append ("%N")
        end
        if attached link_format_invalid as l_link_format_invalid then
          Result.append ("%Nlink_format_invalid:")
          Result.append (l_link_format_invalid.out)
          Result.append ("%N")
        end
        if attached parse_line_error as l_parse_line_error then
          Result.append ("%Nparse_line_error:")
          Result.append (l_parse_line_error.out)
          Result.append ("%N")
        end
        if attached adwords_format_invalid as l_adwords_format_invalid then
          Result.append ("%Nadwords_format_invalid:")
          Result.append (l_adwords_format_invalid.out)
          Result.append ("%N")
        end
        if attached product_category_missing as l_product_category_missing then
          Result.append ("%Nproduct_category_missing:")
          Result.append (l_product_category_missing.out)
          Result.append ("%N")
        end
        if attached internal_service_error as l_internal_service_error then
          Result.append ("%Ninternal_service_error:")
          Result.append (l_internal_service_error.out)
          Result.append ("%N")
        end
        if attached no_verified_domain as l_no_verified_domain then
          Result.append ("%Nno_verified_domain:")
          Result.append (l_no_verified_domain.out)
          Result.append ("%N")
        end
        if attached adult_invalid as l_adult_invalid then
          Result.append ("%Nadult_invalid:")
          Result.append (l_adult_invalid.out)
          Result.append ("%N")
        end
        if attached invalid_domain as l_invalid_domain then
          Result.append ("%Ninvalid_domain:")
          Result.append (l_invalid_domain.out)
          Result.append ("%N")
        end
        if attached feed_length_too_long as l_feed_length_too_long then
          Result.append ("%Nfeed_length_too_long:")
          Result.append (l_feed_length_too_long.out)
          Result.append ("%N")
        end
        if attached link_length_too_long as l_link_length_too_long then
          Result.append ("%Nlink_length_too_long:")
          Result.append (l_link_length_too_long.out)
          Result.append ("%N")
        end
        if attached malformed_xml as l_malformed_xml then
          Result.append ("%Nmalformed_xml:")
          Result.append (l_malformed_xml.out)
          Result.append ("%N")
        end
        if attached redirect_invalid as l_redirect_invalid then
          Result.append ("%Nredirect_invalid:")
          Result.append (l_redirect_invalid.out)
          Result.append ("%N")
        end
        if attached price_missing as l_price_missing then
          Result.append ("%Nprice_missing:")
          Result.append (l_price_missing.out)
          Result.append ("%N")
        end
        if attached feed_too_small as l_feed_too_small then
          Result.append ("%Nfeed_too_small:")
          Result.append (l_feed_too_small.out)
          Result.append ("%N")
        end
        if attached condition_invalid as l_condition_invalid then
          Result.append ("%Ncondition_invalid:")
          Result.append (l_condition_invalid.out)
          Result.append ("%N")
        end
        if attached shopify_no_products as l_shopify_no_products then
          Result.append ("%Nshopify_no_products:")
          Result.append (l_shopify_no_products.out)
          Result.append ("%N")
        end
        if attached max_items_per_item_group_exceeded as l_max_items_per_item_group_exceeded then
          Result.append ("%Nmax_items_per_item_group_exceeded:")
          Result.append (l_max_items_per_item_group_exceeded.out)
          Result.append ("%N")
        end
        if attached item_main_image_download_failure as l_item_main_image_download_failure then
          Result.append ("%Nitem_main_image_download_failure:")
          Result.append (l_item_main_image_download_failure.out)
          Result.append ("%N")
        end
        if attached pinjoin_content_unsafe as l_pinjoin_content_unsafe then
          Result.append ("%Npinjoin_content_unsafe:")
          Result.append (l_pinjoin_content_unsafe.out)
          Result.append ("%N")
        end
        if attached blocklisted_image_signature as l_blocklisted_image_signature then
          Result.append ("%Nblocklisted_image_signature:")
          Result.append (l_blocklisted_image_signature.out)
          Result.append ("%N")
        end
      end
end

