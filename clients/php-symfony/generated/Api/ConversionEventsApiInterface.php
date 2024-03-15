<?php
/**
 * ConversionEventsApiInterface
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server
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

namespace OpenAPI\Server\Api;

use Symfony\Component\HttpFoundation\File\UploadedFile;
use OpenAPI\Server\Model\ConversionApiResponse;
use OpenAPI\Server\Model\ConversionEvents;
use OpenAPI\Server\Model\DetailedError;
use OpenAPI\Server\Model\Error;

/**
 * ConversionEventsApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  OpenAPI\Server\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
interface ConversionEventsApiInterface
{

    /**
     * Sets authentication method pinterest_oauth2
     *
     * @param string|null $value Value of the pinterest_oauth2 authentication method.
     *
     * @return void
     */
    public function setpinterest_oauth2(?string $value): void;

    /**
     * Sets authentication method conversion_token
     *
     * @param string|null $value Value of the conversion_token authentication method.
     *
     * @return void
     */
    public function setconversion_token(?string $value): void;

    /**
     * Operation eventsCreate
     *
     * Send conversions
     *
     * @param  string $adAccountId  Unique identifier of an ad account. (required)
     * @param  ConversionEvents $conversionEvents  Conversion events. (required)
     * @param  bool|null $test  Include query param ?test&#x3D;true to mark the request as a test request. The events will not be recorded but the API will still return the same response messages. Use this mode to verify your requests are working and your events are constructed correctly. Warning: If you use this query parameter, be certain that it is off (set to false or deleted) before sending a legitimate (non-testing) request. (optional)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function eventsCreate(
        string $adAccountId,
        ConversionEvents $conversionEvents,
        ?bool $test,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;
}
