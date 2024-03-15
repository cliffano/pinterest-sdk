<?php
/**
 * CreativeType
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
 * Class representing the CreativeType model.
 *
 * Ad creative type enum. For update, only draft ads may update creative type. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
enum CreativeType: string
{
        case REGULAR = "REGULAR";
        case VIDEO = "VIDEO";
        case SHOPPING = "SHOPPING";
        case CAROUSEL = "CAROUSEL";
        case MAX_VIDEO = "MAX_VIDEO";
        case SHOP_THE_PIN = "SHOP_THE_PIN";
        case COLLECTION = "COLLECTION";
        case IDEA = "IDEA";
        case SHOWCASE = "SHOWCASE";
        case QUIZ = "QUIZ";
}



