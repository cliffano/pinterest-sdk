<?php

/**
 * AudienceInsightsController
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
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

namespace OpenAPI\Server\Controller;

use \Exception;
use JMS\Serializer\Exception\RuntimeException as SerializerRuntimeException;
use Symfony\Component\HttpFoundation\Request;
use Symfony\Component\HttpFoundation\Response;
use Symfony\Component\HttpKernel\Exception\HttpException;
use Symfony\Component\Validator\Constraints as Assert;
use OpenAPI\Server\Api\AudienceInsightsApiInterface;
use OpenAPI\Server\Model\AudienceDefinitionResponse;
use OpenAPI\Server\Model\AudienceInsightType;
use OpenAPI\Server\Model\AudienceInsightsResponse;
use OpenAPI\Server\Model\Error;

/**
 * AudienceInsightsController Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class AudienceInsightsController extends Controller
{

    /**
     * Operation audienceInsightsGet
     *
     * Get audience insights
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function audienceInsightsGetAction(Request $request, $adAccountId)
    {
        // Figure out what data format to return to the client
        $produces = ['application/json'];
        // Figure out what the client accepts
        $clientAccepts = $request->headers->has('Accept')?$request->headers->get('Accept'):'*/*';
        $responseFormat = $this->getOutputFormat($clientAccepts, $produces);
        if ($responseFormat === null) {
            return new Response('', 406);
        }

        // Handle authentication
        // Authentication 'pinterest_oauth2' required
        // Oauth required
        $securitypinterest_oauth2 = $request->headers->get('authorization');

        // Read out all input parameter values into variables
        $audienceInsightType = $request->query->get('audienceInsightType');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
            $audienceInsightType = $this->deserialize($audienceInsightType, '\OpenAPI\Server\Model\AudienceInsightType', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Type("string");
        $asserts[] = new Assert\Length([
            'max' => 18
        ]);
        $asserts[] = new Assert\Regex("/^\\d+$/");
        $response = $this->validate($adAccountId, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Type("\OpenAPI\Server\Model\AudienceInsightType");
        $response = $this->validate($audienceInsightType, $asserts);
        if ($response instanceof Response) {
            return $response;
        }


        try {
            $handler = $this->getApiHandler();

            // Set authentication method 'pinterest_oauth2'
            $handler->setpinterest_oauth2($securitypinterest_oauth2);

            // Make the call to the business logic
            $responseCode = 200;
            $responseHeaders = [];

            $result = $handler->audienceInsightsGet($adAccountId, $audienceInsightType, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Unexpected error';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 200:
                    $message = 'Success';
                    break;
                case 0:
                    $message = 'Unexpected error';
                    break;
            }

            return new Response(
                $result !== null ?$this->serialize($result, $responseFormat):'',
                $responseCode,
                array_merge(
                    $responseHeaders,
                    [
                        'Content-Type' => $responseFormat,
                        'X-OpenAPI-Message' => $message
                    ]
                )
            );
        } catch (\Throwable $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Operation audienceInsightsScopeAndTypeGet
     *
     * Get audience insights scope and type
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function audienceInsightsScopeAndTypeGetAction(Request $request, $adAccountId)
    {
        // Figure out what data format to return to the client
        $produces = ['application/json'];
        // Figure out what the client accepts
        $clientAccepts = $request->headers->has('Accept')?$request->headers->get('Accept'):'*/*';
        $responseFormat = $this->getOutputFormat($clientAccepts, $produces);
        if ($responseFormat === null) {
            return new Response('', 406);
        }

        // Handle authentication
        // Authentication 'pinterest_oauth2' required
        // Oauth required
        $securitypinterest_oauth2 = $request->headers->get('authorization');

        // Read out all input parameter values into variables

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Type("string");
        $asserts[] = new Assert\Length([
            'max' => 18
        ]);
        $asserts[] = new Assert\Regex("/^\\d+$/");
        $response = $this->validate($adAccountId, $asserts);
        if ($response instanceof Response) {
            return $response;
        }


        try {
            $handler = $this->getApiHandler();

            // Set authentication method 'pinterest_oauth2'
            $handler->setpinterest_oauth2($securitypinterest_oauth2);

            // Make the call to the business logic
            $responseCode = 200;
            $responseHeaders = [];

            $result = $handler->audienceInsightsScopeAndTypeGet($adAccountId, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Unexpected error';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 200:
                    $message = 'Success';
                    break;
                case 0:
                    $message = 'Unexpected error';
                    break;
            }

            return new Response(
                $result !== null ?$this->serialize($result, $responseFormat):'',
                $responseCode,
                array_merge(
                    $responseHeaders,
                    [
                        'Content-Type' => $responseFormat,
                        'X-OpenAPI-Message' => $message
                    ]
                )
            );
        } catch (\Throwable $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Returns the handler for this API controller.
     * @return AudienceInsightsApiInterface
     */
    public function getApiHandler()
    {
        return $this->apiServer->getApiHandler('audienceInsights');
    }
}
