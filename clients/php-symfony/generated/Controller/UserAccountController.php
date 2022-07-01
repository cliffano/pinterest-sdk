<?php

/**
 * UserAccountController
 * PHP version 7.1.3
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
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
use OpenAPI\Server\Api\UserAccountApiInterface;
use OpenAPI\Server\Model\Account;
use OpenAPI\Server\Model\AnalyticsMetricsResponse;
use OpenAPI\Server\Model\Date;
use OpenAPI\Server\Model\Error;

/**
 * UserAccountController Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class UserAccountController extends Controller
{

    /**
     * Operation userAccountAnalytics
     *
     * Get user account analytics
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function userAccountAnalyticsAction(Request $request)
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
        $startDate = $request->query->get('startDate');
        $endDate = $request->query->get('endDate');
        $fromClaimedContent = $request->query->get('fromClaimedContent');
        $pinFormat = $request->query->get('pinFormat');
        $appTypes = $request->query->get('appTypes');
        $metricTypes = $request->query->get('metricTypes');
        $splitField = $request->query->get('splitField');
        $adAccountId = $request->query->get('adAccountId');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $startDate = $this->deserialize($startDate, '\DateTime', 'string');
            $endDate = $this->deserialize($endDate, '\DateTime', 'string');
            $fromClaimedContent = $this->deserialize($fromClaimedContent, 'string', 'string');
            $pinFormat = $this->deserialize($pinFormat, 'string', 'string');
            $appTypes = $this->deserialize($appTypes, 'string', 'string');
            $metricTypes = $this->deserialize($metricTypes, 'array<csv,string>', 'string');
            $splitField = $this->deserialize($splitField, 'string', 'string');
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Date();
        $response = $this->validate($startDate, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Date();
        $response = $this->validate($endDate, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "OTHER", "CLAIMED", "BOTH" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($fromClaimedContent, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "ALL", "PRODUCT", "REGULAR", "VIDEO" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($pinFormat, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "ALL", "MOBILE", "TABLET", "WEB" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($appTypes, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\All([
            new Assert\Choice([ "ENGAGEMENT", "ENGAGEMENT_RATE", "IMPRESSION", "OUTBOUND_CLICK", "OUTBOUND_CLICK_RATE", "PIN_CLICK", "PIN_CLICK_RATE", "SAVE", "SAVE_RATE" ])
        ]);
        $asserts[] = new Assert\All([
            new Assert\Type("string"),
        ]);
        $asserts[] = new Assert\Valid();
        $response = $this->validate($metricTypes, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "NO_SPLIT", "APP_TYPE", "OWNED_CONTENT", "PIN_FORMAT" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($splitField, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Type("string");
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
            $result = $handler->userAccountAnalytics($startDate, $endDate, $fromClaimedContent, $pinFormat, $appTypes, $metricTypes, $splitField, $adAccountId, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Unexpected error';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 200:
                    $message = 'Success';
                    break;
                case 403:
                    $message = 'Not authorized to access the user account analytics.';
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
        } catch (Exception $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Operation userAccountGet
     *
     * Get user account
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function userAccountGetAction(Request $request)
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
        $adAccountId = $request->query->get('adAccountId');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\Type("string");
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
            $result = $handler->userAccountGet($adAccountId, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Unexpected error';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 200:
                    $message = 'response';
                    break;
                case 403:
                    $message = 'Not authorized to access the user account.';
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
        } catch (Exception $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Returns the handler for this API controller.
     * @return UserAccountApiInterface
     */
    public function getApiHandler()
    {
        return $this->apiServer->getApiHandler('userAccount');
    }
}
