<?php
/**
 * MetricsReportingLevel
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
 * Class representing the MetricsReportingLevel model.
 *
 * Level of the reporting request
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
enum MetricsReportingLevel: string
{
        case ADVERTISER = "ADVERTISER";
        case ADVERTISER_TARGETING = "ADVERTISER_TARGETING";
        case CAMPAIGN = "CAMPAIGN";
        case CAMPAIGN_TARGETING = "CAMPAIGN_TARGETING";
        case AD_GROUP = "AD_GROUP";
        case AD_GROUP_TARGETING = "AD_GROUP_TARGETING";
        case PIN_PROMOTION = "PIN_PROMOTION";
        case PIN_PROMOTION_TARGETING = "PIN_PROMOTION_TARGETING";
        case KEYWORD = "KEYWORD";
        case PRODUCT_GROUP = "PRODUCT_GROUP";
        case PRODUCT_GROUP_TARGETING = "PRODUCT_GROUP_TARGETING";
        case PRODUCT_ITEM = "PRODUCT_ITEM";
}



