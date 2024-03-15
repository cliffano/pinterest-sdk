<?php
/**
 * NullableCatalogsItemFieldType
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
 * Class representing the NullableCatalogsItemFieldType model.
 *
 * Product item fields
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
enum NullableCatalogsItemFieldType: string
{
        case ITEM_ID = "ITEM_ID";
        case ITEM_GROUP_ID = "ITEM_GROUP_ID";
        case TITLE = "TITLE";
        case DESCRIPTION = "DESCRIPTION";
        case ITEM_LINK = "ITEM_LINK";
        case ORGANIC_LINK = "ORGANIC_LINK";
        case IMAGE_LINK = "IMAGE_LINK";
        case ADWORDS_REDIRECT_LINK = "ADWORDS_REDIRECT_LINK";
        case AD_LINK = "AD_LINK";
        case SIZE = "SIZE";
        case GOOGLE_PRODUCT_CATEGORY = "GOOGLE_PRODUCT_CATEGORY";
        case PRODUCT_CATEGORY = "PRODUCT_CATEGORY";
        case CONDITION = "CONDITION";
        case AVAILABILITY = "AVAILABILITY";
        case GENDER = "GENDER";
        case AGE_GROUP = "AGE_GROUP";
        case SIZE_TYPE = "SIZE_TYPE";
        case SIZE_SYSTEM = "SIZE_SYSTEM";
        case ADULT = "ADULT";
        case SHIPPING = "SHIPPING";
        case SHIPPING_WEIGHT = "SHIPPING_WEIGHT";
        case TAX = "TAX";
        case MULTIPACK = "MULTIPACK";
        case ADDITIONAL_IMAGE_LINK = "ADDITIONAL_IMAGE_LINK";
        case PRICE = "PRICE";
        case SALE_PRICE = "SALE_PRICE";
        case IS_BUNDLE = "IS_BUNDLE";
        case EXPIRATION_DATE = "EXPIRATION_DATE";
        case SALE_PRICE_EFFECTIVE_DATE = "SALE_PRICE_EFFECTIVE_DATE";
        case AVAILABILITY_DATE = "AVAILABILITY_DATE";
        case WEIGHT_UNIT = "WEIGHT_UNIT";
        case PRODUCT_TYPE = "PRODUCT_TYPE";
        case CUSTOM_LABEL_0 = "CUSTOM_LABEL_0";
        case CUSTOM_LABEL_1 = "CUSTOM_LABEL_1";
        case CUSTOM_LABEL_2 = "CUSTOM_LABEL_2";
        case CUSTOM_LABEL_3 = "CUSTOM_LABEL_3";
        case CUSTOM_LABEL_4 = "CUSTOM_LABEL_4";
        case MATERIAL = "MATERIAL";
        case PATTERN = "PATTERN";
        case COLOR = "COLOR";
        case BRAND = "BRAND";
        case GTIN = "GTIN";
        case MPN = "MPN";
        case IOS_DEEP_LINK = "IOS_DEEP_LINK";
        case ANDROID_DEEP_LINK = "ANDROID_DEEP_LINK";
        case FREE_SHIPPING_LABEL = "FREE_SHIPPING_LABEL";
        case FREE_SHIPPING_LIMIT = "FREE_SHIPPING_LIMIT";
        case AVG_REVIEW_RATING = "AVG_REVIEW_RATING";
        case NUM_RATINGS = "NUM_RATINGS";
        case NUM_REVIEWS = "NUM_REVIEWS";
        case ALT_TEXT = "ALT_TEXT";
        case VARIANT_NAMES = "VARIANT_NAMES";
        case VARIANT_VALUES = "VARIANT_VALUES";
        case MIN_AD_PRICE = "MIN_AD_PRICE";
        case SHIPPING_WIDTH = "SHIPPING_WIDTH";
        case SHIPPING_HEIGHT = "SHIPPING_HEIGHT";
        case NULL = "null";
}


