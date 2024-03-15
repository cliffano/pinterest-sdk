<?php
/**
 * OauthApiInterface
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
use OpenAPI\Server\Model\Error;
use OpenAPI\Server\Model\OauthAccessTokenResponse;

/**
 * OauthApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  OpenAPI\Server\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
interface OauthApiInterface
{

    /**
     * Sets authentication method basic
     *
     * @param string|null $value Value of the basic authentication method.
     *
     * @return void
     */
    public function setbasic(?string $value): void;

    /**
     * Operation oauthToken
     *
     * Generate OAuth access token
     *
     * @param  string $grantType   (required)
     * @param  int     &$responseCode    The HTTP Response Code
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return array|object|null
     */
    public function oauthToken(
        string $grantType,
        int &$responseCode,
        array &$responseHeaders
    ): array|object|null;
}