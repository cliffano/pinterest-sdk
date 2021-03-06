-module(openapi_catalogs_feed_validation_errors).

-export([encode/1]).

-export_type([openapi_catalogs_feed_validation_errors/0]).

-type openapi_catalogs_feed_validation_errors() ::
    #{ 'fetch_error' => integer(),
       'fetch_inactive_feed_error' => integer(),
       'encoding_error' => integer(),
       'delimiter_error' => integer(),
       'required_columns_missing' => integer(),
       'image_link_invalid' => integer(),
       'itemid_missing' => integer(),
       'title_missing' => integer(),
       'description_missing' => integer(),
       'product_category_invalid' => integer(),
       'product_link_missing' => integer(),
       'image_link_missing' => integer(),
       'availability_invalid' => integer(),
       'product_price_invalid' => integer(),
       'link_format_invalid' => integer(),
       'parse_line_error' => integer(),
       'adwords_format_invalid' => integer(),
       'product_category_missing' => integer(),
       'internal_service_error' => integer(),
       'no_verified_domain' => integer(),
       'adult_invalid' => integer(),
       'invalid_domain' => integer(),
       'feed_length_too_long' => integer(),
       'link_length_too_long' => integer(),
       'malformed_xml' => integer(),
       'redirect_invalid' => integer(),
       'price_missing' => integer(),
       'feed_too_small' => integer(),
       'condition_invalid' => integer(),
       'shopify_no_products' => integer(),
       'max_items_per_item_group_exceeded' => integer(),
       'item_main_image_download_failure' => integer(),
       'pinjoin_content_unsafe' => integer(),
       'blocklisted_image_signature' => integer()
     }.

encode(#{ 'fetch_error' := FetchError,
          'fetch_inactive_feed_error' := FetchInactiveFeedError,
          'encoding_error' := EncodingError,
          'delimiter_error' := DelimiterError,
          'required_columns_missing' := RequiredColumnsMissing,
          'image_link_invalid' := ImageLinkInvalid,
          'itemid_missing' := ItemidMissing,
          'title_missing' := TitleMissing,
          'description_missing' := DescriptionMissing,
          'product_category_invalid' := ProductCategoryInvalid,
          'product_link_missing' := ProductLinkMissing,
          'image_link_missing' := ImageLinkMissing,
          'availability_invalid' := AvailabilityInvalid,
          'product_price_invalid' := ProductPriceInvalid,
          'link_format_invalid' := LinkFormatInvalid,
          'parse_line_error' := ParseLineError,
          'adwords_format_invalid' := AdwordsFormatInvalid,
          'product_category_missing' := ProductCategoryMissing,
          'internal_service_error' := InternalServiceError,
          'no_verified_domain' := NoVerifiedDomain,
          'adult_invalid' := AdultInvalid,
          'invalid_domain' := InvalidDomain,
          'feed_length_too_long' := FeedLengthTooLong,
          'link_length_too_long' := LinkLengthTooLong,
          'malformed_xml' := MalformedXml,
          'redirect_invalid' := RedirectInvalid,
          'price_missing' := PriceMissing,
          'feed_too_small' := FeedTooSmall,
          'condition_invalid' := ConditionInvalid,
          'shopify_no_products' := ShopifyNoProducts,
          'max_items_per_item_group_exceeded' := MaxItemsPerItemGroupExceeded,
          'item_main_image_download_failure' := ItemMainImageDownloadFailure,
          'pinjoin_content_unsafe' := PinjoinContentUnsafe,
          'blocklisted_image_signature' := BlocklistedImageSignature
        }) ->
    #{ 'fetch_error' => FetchError,
       'fetch_inactive_feed_error' => FetchInactiveFeedError,
       'encoding_error' => EncodingError,
       'delimiter_error' => DelimiterError,
       'required_columns_missing' => RequiredColumnsMissing,
       'image_link_invalid' => ImageLinkInvalid,
       'itemid_missing' => ItemidMissing,
       'title_missing' => TitleMissing,
       'description_missing' => DescriptionMissing,
       'product_category_invalid' => ProductCategoryInvalid,
       'product_link_missing' => ProductLinkMissing,
       'image_link_missing' => ImageLinkMissing,
       'availability_invalid' => AvailabilityInvalid,
       'product_price_invalid' => ProductPriceInvalid,
       'link_format_invalid' => LinkFormatInvalid,
       'parse_line_error' => ParseLineError,
       'adwords_format_invalid' => AdwordsFormatInvalid,
       'product_category_missing' => ProductCategoryMissing,
       'internal_service_error' => InternalServiceError,
       'no_verified_domain' => NoVerifiedDomain,
       'adult_invalid' => AdultInvalid,
       'invalid_domain' => InvalidDomain,
       'feed_length_too_long' => FeedLengthTooLong,
       'link_length_too_long' => LinkLengthTooLong,
       'malformed_xml' => MalformedXml,
       'redirect_invalid' => RedirectInvalid,
       'price_missing' => PriceMissing,
       'feed_too_small' => FeedTooSmall,
       'condition_invalid' => ConditionInvalid,
       'shopify_no_products' => ShopifyNoProducts,
       'max_items_per_item_group_exceeded' => MaxItemsPerItemGroupExceeded,
       'item_main_image_download_failure' => ItemMainImageDownloadFailure,
       'pinjoin_content_unsafe' => PinjoinContentUnsafe,
       'blocklisted_image_signature' => BlocklistedImageSignature
     }.
