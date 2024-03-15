-module(openapi_nullable_catalogs_item_field_type).

-include("openapi.hrl").

-export([openapi_nullable_catalogs_item_field_type/0]).

-export_type([openapi_nullable_catalogs_item_field_type/0]).

-type openapi_nullable_catalogs_item_field_type() ::
  binary().

openapi_nullable_catalogs_item_field_type() ->
  elements([<<"ITEM_ID">>, <<"ITEM_GROUP_ID">>, <<"TITLE">>, <<"DESCRIPTION">>, <<"ITEM_LINK">>, <<"ORGANIC_LINK">>, <<"IMAGE_LINK">>, <<"ADWORDS_REDIRECT_LINK">>, <<"AD_LINK">>, <<"SIZE">>, <<"GOOGLE_PRODUCT_CATEGORY">>, <<"PRODUCT_CATEGORY">>, <<"CONDITION">>, <<"AVAILABILITY">>, <<"GENDER">>, <<"AGE_GROUP">>, <<"SIZE_TYPE">>, <<"SIZE_SYSTEM">>, <<"ADULT">>, <<"SHIPPING">>, <<"SHIPPING_WEIGHT">>, <<"TAX">>, <<"MULTIPACK">>, <<"ADDITIONAL_IMAGE_LINK">>, <<"PRICE">>, <<"SALE_PRICE">>, <<"IS_BUNDLE">>, <<"EXPIRATION_DATE">>, <<"SALE_PRICE_EFFECTIVE_DATE">>, <<"AVAILABILITY_DATE">>, <<"WEIGHT_UNIT">>, <<"PRODUCT_TYPE">>, <<"CUSTOM_LABEL_0">>, <<"CUSTOM_LABEL_1">>, <<"CUSTOM_LABEL_2">>, <<"CUSTOM_LABEL_3">>, <<"CUSTOM_LABEL_4">>, <<"MATERIAL">>, <<"PATTERN">>, <<"COLOR">>, <<"BRAND">>, <<"GTIN">>, <<"MPN">>, <<"IOS_DEEP_LINK">>, <<"ANDROID_DEEP_LINK">>, <<"FREE_SHIPPING_LABEL">>, <<"FREE_SHIPPING_LIMIT">>, <<"AVG_REVIEW_RATING">>, <<"NUM_RATINGS">>, <<"NUM_REVIEWS">>, <<"ALT_TEXT">>, <<"VARIANT_NAMES">>, <<"VARIANT_VALUES">>, <<"MIN_AD_PRICE">>, <<"SHIPPING_WIDTH">>, <<"SHIPPING_HEIGHT">>, <<"">>]).

