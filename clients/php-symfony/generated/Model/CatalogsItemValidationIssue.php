<?php
/**
 * CatalogsItemValidationIssue
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the CatalogsItemValidationIssue model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
enum CatalogsItemValidationIssue: string
{
        case AD_LINK_FORMAT_WARNING = "AD_LINK_FORMAT_WARNING";
        case AD_LINK_SAME_AS_LINK = "AD_LINK_SAME_AS_LINK";
        case ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG";
        case ADDITIONAL_IMAGE_LINK_WARNING = "ADDITIONAL_IMAGE_LINK_WARNING";
        case ADULT_INVALID = "ADULT_INVALID";
        case ADWORDS_FORMAT_INVALID = "ADWORDS_FORMAT_INVALID";
        case ADWORDS_FORMAT_WARNING = "ADWORDS_FORMAT_WARNING";
        case ADWORDS_SAME_AS_LINK = "ADWORDS_SAME_AS_LINK";
        case AGE_GROUP_INVALID = "AGE_GROUP_INVALID";
        case ANDROID_DEEP_LINK_INVALID = "ANDROID_DEEP_LINK_INVALID";
        case AVAILABILITY_DATE_INVALID = "AVAILABILITY_DATE_INVALID";
        case AVAILABILITY_INVALID = "AVAILABILITY_INVALID";
        case BLOCKLISTED_IMAGE_SIGNATURE = "BLOCKLISTED_IMAGE_SIGNATURE";
        case COUNTRY_DOES_NOT_MAP_TO_CURRENCY = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY";
        case CUSTOM_LABEL_LENGTH_TOO_LONG = "CUSTOM_LABEL_LENGTH_TOO_LONG";
        case DESCRIPTION_LENGTH_TOO_LONG = "DESCRIPTION_LENGTH_TOO_LONG";
        case DESCRIPTION_MISSING = "DESCRIPTION_MISSING";
        case DUPLICATE_PRODUCTS = "DUPLICATE_PRODUCTS";
        case EXPIRATION_DATE_INVALID = "EXPIRATION_DATE_INVALID";
        case GENDER_INVALID = "GENDER_INVALID";
        case GTIN_INVALID = "GTIN_INVALID";
        case IMAGE_LINK_INVALID = "IMAGE_LINK_INVALID";
        case IMAGE_LINK_LENGTH_TOO_LONG = "IMAGE_LINK_LENGTH_TOO_LONG";
        case IMAGE_LINK_MISSING = "IMAGE_LINK_MISSING";
        case IMAGE_LINK_WARNING = "IMAGE_LINK_WARNING";
        case INVALID_DOMAIN = "INVALID_DOMAIN";
        case IOS_DEEP_LINK_INVALID = "IOS_DEEP_LINK_INVALID";
        case IS_BUNDLE_INVALID = "IS_BUNDLE_INVALID";
        case ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE";
        case ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = "ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE";
        case ITEMID_MISSING = "ITEMID_MISSING";
        case LINK_FORMAT_INVALID = "LINK_FORMAT_INVALID";
        case LINK_FORMAT_WARNING = "LINK_FORMAT_WARNING";
        case LINK_LENGTH_TOO_LONG = "LINK_LENGTH_TOO_LONG";
        case LIST_PRICE_INVALID = "LIST_PRICE_INVALID";
        case MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = "MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED";
        case MIN_AD_PRICE_INVALID = "MIN_AD_PRICE_INVALID";
        case MPN_INVALID = "MPN_INVALID";
        case MULTIPACK_INVALID = "MULTIPACK_INVALID";
        case OPTIONAL_CONDITION_INVALID = "OPTIONAL_CONDITION_INVALID";
        case OPTIONAL_CONDITION_MISSING = "OPTIONAL_CONDITION_MISSING";
        case OPTIONAL_PRODUCT_CATEGORY_INVALID = "OPTIONAL_PRODUCT_CATEGORY_INVALID";
        case OPTIONAL_PRODUCT_CATEGORY_MISSING = "OPTIONAL_PRODUCT_CATEGORY_MISSING";
        case PARSE_LINE_ERROR = "PARSE_LINE_ERROR";
        case PINJOIN_CONTENT_UNSAFE = "PINJOIN_CONTENT_UNSAFE";
        case PRICE_CANNOT_BE_DETERMINED = "PRICE_CANNOT_BE_DETERMINED";
        case PRICE_MISSING = "PRICE_MISSING";
        case PRODUCT_CATEGORY_DEPTH_WARNING = "PRODUCT_CATEGORY_DEPTH_WARNING";
        case PRODUCT_LINK_MISSING = "PRODUCT_LINK_MISSING";
        case PRODUCT_PRICE_INVALID = "PRODUCT_PRICE_INVALID";
        case PRODUCT_TYPE_LENGTH_TOO_LONG = "PRODUCT_TYPE_LENGTH_TOO_LONG";
        case SALE_DATE_INVALID = "SALE_DATE_INVALID";
        case SALES_PRICE_INVALID = "SALES_PRICE_INVALID";
        case SALES_PRICE_TOO_HIGH = "SALES_PRICE_TOO_HIGH";
        case SALES_PRICE_TOO_LOW = "SALES_PRICE_TOO_LOW";
        case SHIPPING_INVALID = "SHIPPING_INVALID";
        case SHIPPING_HEIGHT_INVALID = "SHIPPING_HEIGHT_INVALID";
        case SHIPPING_WEIGHT_INVALID = "SHIPPING_WEIGHT_INVALID";
        case SHIPPING_WIDTH_INVALID = "SHIPPING_WIDTH_INVALID";
        case SIZE_SYSTEM_INVALID = "SIZE_SYSTEM_INVALID";
        case SIZE_TYPE_INVALID = "SIZE_TYPE_INVALID";
        case TAX_INVALID = "TAX_INVALID";
        case TITLE_LENGTH_TOO_LONG = "TITLE_LENGTH_TOO_LONG";
        case TITLE_MISSING = "TITLE_MISSING";
        case TOO_MANY_ADDITIONAL_IMAGE_LINKS = "TOO_MANY_ADDITIONAL_IMAGE_LINKS";
        case UTM_SOURCE_AUTO_CORRECTED = "UTM_SOURCE_AUTO_CORRECTED";
        case WEIGHT_UNIT_INVALID = "WEIGHT_UNIT_INVALID";
}



