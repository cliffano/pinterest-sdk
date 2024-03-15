<?php

/**
 * ProductGroupPromotionsController
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
use OpenAPI\Server\Api\ProductGroupPromotionsApiInterface;
use OpenAPI\Server\Model\Date;
use OpenAPI\Server\Model\Error;
use OpenAPI\Server\Model\Granularity;
use OpenAPI\Server\Model\ProductGroupAnalyticsResponseInner;
use OpenAPI\Server\Model\ProductGroupPromotionCreateRequest;
use OpenAPI\Server\Model\ProductGroupPromotionResponse;
use OpenAPI\Server\Model\ProductGroupPromotionUpdateRequest;
use OpenAPI\Server\Model\ProductGroupPromotionsList200Response;

/**
 * ProductGroupPromotionsController Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class ProductGroupPromotionsController extends Controller
{

    /**
     * Operation productGroupPromotionsCreate
     *
     * Create product group promotions
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function productGroupPromotionsCreateAction(Request $request, $adAccountId)
    {
        // Make sure that the client is providing something that we can consume
        $consumes = ['application/json'];
        if (!static::isContentTypeAllowed($request, $consumes)) {
            // We can't consume the content that the client is sending us
            return new Response('', 415);
        }

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
        $productGroupPromotionCreateRequest = $request->getContent();

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
            $inputFormat = $request->getMimeType($request->getContentType());
            $productGroupPromotionCreateRequest = $this->deserialize($productGroupPromotionCreateRequest, 'OpenAPI\Server\Model\ProductGroupPromotionCreateRequest', $inputFormat);
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
        $asserts[] = new Assert\Type("OpenAPI\Server\Model\ProductGroupPromotionCreateRequest");
        $asserts[] = new Assert\Valid();
        $response = $this->validate($productGroupPromotionCreateRequest, $asserts);
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

            $result = $handler->productGroupPromotionsCreate($adAccountId, $productGroupPromotionCreateRequest, $responseCode, $responseHeaders);

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
     * Operation productGroupPromotionsGet
     *
     * Get a product group promotion by id
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function productGroupPromotionsGetAction(Request $request, $adAccountId, $productGroupPromotionId)
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
            $productGroupPromotionId = $this->deserialize($productGroupPromotionId, 'string', 'string');
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
        $asserts[] = new Assert\Type("string");
        $asserts[] = new Assert\Length([
            'max' => 18
        ]);
        $asserts[] = new Assert\Regex("/^\\d+$/");
        $response = $this->validate($productGroupPromotionId, $asserts);
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

            $result = $handler->productGroupPromotionsGet($adAccountId, $productGroupPromotionId, $responseCode, $responseHeaders);

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
     * Operation productGroupPromotionsList
     *
     * Get product group promotions
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function productGroupPromotionsListAction(Request $request, $adAccountId)
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
        $productGroupPromotionIds = $request->query->get('productGroupPromotionIds');
        $entityStatuses = $request->query->get('entityStatuses');
        $adGroupId = $request->query->get('adGroupId');
        $pageSize = $request->query->get('pageSize', 25);
        $order = $request->query->get('order');
        $bookmark = $request->query->get('bookmark');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
            $productGroupPromotionIds = $this->deserialize($productGroupPromotionIds, 'array<multi,string>', 'string');
            $entityStatuses = $this->deserialize($entityStatuses, 'array<multi,string>', 'string');
            $adGroupId = $this->deserialize($adGroupId, 'string', 'string');
            $pageSize = $this->deserialize($pageSize, 'int', 'string');
            $order = $this->deserialize($order, 'string', 'string');
            $bookmark = $this->deserialize($bookmark, 'string', 'string');
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
        $asserts[] = new Assert\All([
            new Assert\Type("string"),
        ]);
        $asserts[] = new Assert\Valid();
        $asserts[] = new Assert\Count([
            'max' => 100
        ]);
        $asserts[] = new Assert\Count([
            'min' => 1
        ]);
        $response = $this->validate($productGroupPromotionIds, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\All([
            new Assert\Choice([ "ACTIVE", "PAUSED", "ARCHIVED", "DRAFT", "DELETED_DRAFT" ])
        ]);
        $asserts[] = new Assert\All([
            new Assert\Type("string"),
        ]);
        $asserts[] = new Assert\Valid();
        $response = $this->validate($entityStatuses, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Type("string");
        $asserts[] = new Assert\Length([
            'max' => 18
        ]);
        $asserts[] = new Assert\Regex("/^\\d+$/");
        $response = $this->validate($adGroupId, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Type("int");
        $asserts[] = new Assert\GreaterThanOrEqual(1);
        $asserts[] = new Assert\LessThanOrEqual(250);
        $response = $this->validate($pageSize, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "ASCENDING", "DESCENDING" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($order, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($bookmark, $asserts);
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

            $result = $handler->productGroupPromotionsList($adAccountId, $productGroupPromotionIds, $entityStatuses, $adGroupId, $pageSize, $order, $bookmark, $responseCode, $responseHeaders);

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
     * Operation productGroupPromotionsUpdate
     *
     * Update product group promotions
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function productGroupPromotionsUpdateAction(Request $request, $adAccountId)
    {
        // Make sure that the client is providing something that we can consume
        $consumes = ['application/json'];
        if (!static::isContentTypeAllowed($request, $consumes)) {
            // We can't consume the content that the client is sending us
            return new Response('', 415);
        }

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
        $productGroupPromotionUpdateRequest = $request->getContent();

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
            $inputFormat = $request->getMimeType($request->getContentType());
            $productGroupPromotionUpdateRequest = $this->deserialize($productGroupPromotionUpdateRequest, 'OpenAPI\Server\Model\ProductGroupPromotionUpdateRequest', $inputFormat);
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
        $asserts[] = new Assert\Type("OpenAPI\Server\Model\ProductGroupPromotionUpdateRequest");
        $asserts[] = new Assert\Valid();
        $response = $this->validate($productGroupPromotionUpdateRequest, $asserts);
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

            $result = $handler->productGroupPromotionsUpdate($adAccountId, $productGroupPromotionUpdateRequest, $responseCode, $responseHeaders);

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
     * Operation productGroupsAnalytics
     *
     * Get product group analytics
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function productGroupsAnalyticsAction(Request $request, $adAccountId)
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
        $productGroupIds = $request->query->get('productGroupIds');
        $columns = $request->query->get('columns');
        $granularity = $request->query->get('granularity');
        $clickWindowDays = $request->query->get('clickWindowDays', 30);
        $engagementWindowDays = $request->query->get('engagementWindowDays', 30);
        $viewWindowDays = $request->query->get('viewWindowDays', 1);
        $conversionReportTime = $request->query->get('conversionReportTime', 'TIME_OF_AD_ACTION');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $adAccountId = $this->deserialize($adAccountId, 'string', 'string');
            $startDate = $this->deserialize($startDate, '\DateTime', 'string');
            $endDate = $this->deserialize($endDate, '\DateTime', 'string');
            $productGroupIds = $this->deserialize($productGroupIds, 'array<multi,string>', 'string');
            $columns = $this->deserialize($columns, 'array<csv,string>', 'string');
            $granularity = $this->deserialize($granularity, '\OpenAPI\Server\Model\Granularity', 'string');
            $clickWindowDays = $this->deserialize($clickWindowDays, 'int', 'string');
            $engagementWindowDays = $this->deserialize($engagementWindowDays, 'int', 'string');
            $viewWindowDays = $this->deserialize($viewWindowDays, 'int', 'string');
            $conversionReportTime = $this->deserialize($conversionReportTime, 'string', 'string');
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
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\All([
            new Assert\Type("string"),
        ]);
        $asserts[] = new Assert\Valid();
        $asserts[] = new Assert\Count([
            'max' => 100
        ]);
        $asserts[] = new Assert\Count([
            'min' => 1
        ]);
        $response = $this->validate($productGroupIds, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\All([
            new Assert\Choice([ "SPEND_IN_MICRO_DOLLAR", "PAID_IMPRESSION", "SPEND_IN_DOLLAR", "CPC_IN_MICRO_DOLLAR", "ECPC_IN_MICRO_DOLLAR", "ECPC_IN_DOLLAR", "CTR", "ECTR", "CAMPAIGN_NAME", "PIN_ID", "TOTAL_ENGAGEMENT", "ENGAGEMENT_1", "ENGAGEMENT_2", "ECPE_IN_DOLLAR", "ENGAGEMENT_RATE", "EENGAGEMENT_RATE", "ECPM_IN_MICRO_DOLLAR", "REPIN_RATE", "CTR_2", "CAMPAIGN_ID", "ADVERTISER_ID", "AD_ACCOUNT_ID", "PIN_PROMOTION_ID", "AD_ID", "AD_GROUP_ID", "CAMPAIGN_ENTITY_STATUS", "CAMPAIGN_OBJECTIVE_TYPE", "CPM_IN_MICRO_DOLLAR", "CPM_IN_DOLLAR", "AD_GROUP_ENTITY_STATUS", "ORDER_LINE_ID", "ORDER_LINE_NAME", "CLICKTHROUGH_1", "REPIN_1", "IMPRESSION_1", "IMPRESSION_1_GROSS", "CLICKTHROUGH_1_GROSS", "OUTBOUND_CLICK_1", "CLICKTHROUGH_2", "REPIN_2", "IMPRESSION_2", "OUTBOUND_CLICK_2", "TOTAL_CLICKTHROUGH", "TOTAL_IMPRESSION", "TOTAL_IMPRESSION_USER", "TOTAL_IMPRESSION_FREQUENCY", "COST_PER_OUTBOUND_CLICK_IN_DOLLAR", "TOTAL_ENGAGEMENT_SIGNUP", "TOTAL_ENGAGEMENT_CHECKOUT", "TOTAL_ENGAGEMENT_LEAD", "TOTAL_CLICK_SIGNUP", "TOTAL_CLICK_CHECKOUT", "TOTAL_CLICK_ADD_TO_CART", "TOTAL_CLICK_LEAD", "TOTAL_VIEW_SIGNUP", "TOTAL_VIEW_CHECKOUT", "TOTAL_VIEW_ADD_TO_CART", "TOTAL_VIEW_LEAD", "TOTAL_CONVERSIONS", "TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR", "TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR", "TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR", "TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_WEB_SESSIONS", "WEB_SESSIONS_1", "WEB_SESSIONS_2", "CAMPAIGN_LIFETIME_SPEND_CAP", "CAMPAIGN_DAILY_SPEND_CAP", "TOTAL_PAGE_VISIT", "TOTAL_SIGNUP", "TOTAL_CHECKOUT", "TOTAL_CUSTOM", "TOTAL_LEAD", "TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR", "TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR", "PAGE_VISIT_COST_PER_ACTION", "PAGE_VISIT_ROAS", "CHECKOUT_ROAS", "CUSTOM_ROAS", "VIDEO_MRC_VIEWS_1", "VIDEO_3SEC_VIEWS_2", "VIDEO_P100_COMPLETE_2", "VIDEO_P0_COMBINED_2", "VIDEO_P25_COMBINED_2", "VIDEO_P50_COMBINED_2", "VIDEO_P75_COMBINED_2", "VIDEO_P95_COMBINED_2", "VIDEO_MRC_VIEWS_2", "VIDEO_LENGTH", "ECPV_IN_DOLLAR", "ECPCV_IN_DOLLAR", "ECPCV_P95_IN_DOLLAR", "TOTAL_VIDEO_3SEC_VIEWS", "TOTAL_VIDEO_P100_COMPLETE", "TOTAL_VIDEO_P0_COMBINED", "TOTAL_VIDEO_P25_COMBINED", "TOTAL_VIDEO_P50_COMBINED", "TOTAL_VIDEO_P75_COMBINED", "TOTAL_VIDEO_P95_COMBINED", "TOTAL_VIDEO_MRC_VIEWS", "TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND", "TOTAL_REPIN_RATE", "WEB_CHECKOUT_COST_PER_ACTION", "WEB_CHECKOUT_ROAS", "TOTAL_WEB_CHECKOUT", "TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_WEB_CLICK_CHECKOUT", "TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_WEB_ENGAGEMENT_CHECKOUT", "TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "TOTAL_WEB_VIEW_CHECKOUT", "TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR", "INAPP_CHECKOUT_COST_PER_ACTION", "TOTAL_OFFLINE_CHECKOUT", "IDEA_PIN_PRODUCT_TAG_VISIT_1", "IDEA_PIN_PRODUCT_TAG_VISIT_2", "TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT", "LEADS", "COST_PER_LEAD", "QUIZ_COMPLETED", "QUIZ_COMPLETION_RATE", "SHOWCASE_PIN_CLICKTHROUGH", "SHOWCASE_SUBPAGE_CLICKTHROUGH", "SHOWCASE_SUBPIN_CLICKTHROUGH", "SHOWCASE_SUBPAGE_IMPRESSION", "SHOWCASE_SUBPIN_IMPRESSION", "SHOWCASE_SUBPAGE_SWIPE_LEFT", "SHOWCASE_SUBPAGE_SWIPE_RIGHT", "SHOWCASE_SUBPIN_SWIPE_LEFT", "SHOWCASE_SUBPIN_SWIPE_RIGHT", "SHOWCASE_SUBPAGE_REPIN", "SHOWCASE_SUBPIN_REPIN", "SHOWCASE_SUBPAGE_CLOSEUP", "SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD", "SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD", "SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION", "TOTAL_CHECKOUT_CONVERSION_RATE", "TOTAL_VIEW_CATEGORY_CONVERSION_RATE", "TOTAL_ADD_TO_CART_CONVERSION_RATE", "TOTAL_SIGNUP_CONVERSION_RATE", "TOTAL_PAGE_VISIT_CONVERSION_RATE", "TOTAL_LEAD_CONVERSION_RATE", "TOTAL_SEARCH_CONVERSION_RATE", "TOTAL_WATCH_VIDEO_CONVERSION_RATE", "TOTAL_UNKNOWN_CONVERSION_RATE", "TOTAL_CUSTOM_CONVERSION_RATE" ])
        ]);
        $asserts[] = new Assert\All([
            new Assert\Type("string"),
        ]);
        $asserts[] = new Assert\Valid();
        $response = $this->validate($columns, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Type("\OpenAPI\Server\Model\Granularity");
        $response = $this->validate($granularity, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ 0, 1, 7, 14, 30, 60 ]);
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($clickWindowDays, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ 0, 1, 7, 14, 30, 60 ]);
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($engagementWindowDays, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ 0, 1, 7, 14, 30, 60 ]);
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($viewWindowDays, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Choice([ "TIME_OF_AD_ACTION", "TIME_OF_CONVERSION" ]);
        $asserts[] = new Assert\Type("string");
        $response = $this->validate($conversionReportTime, $asserts);
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

            $result = $handler->productGroupsAnalytics($adAccountId, $startDate, $endDate, $productGroupIds, $columns, $granularity, $clickWindowDays, $engagementWindowDays, $viewWindowDays, $conversionReportTime, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Unexpected error';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 200:
                    $message = 'Success';
                    break;
                case 400:
                    $message = 'Invalid ad account ads analytics parameters.';
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
     * @return ProductGroupPromotionsApiInterface
     */
    public function getApiHandler()
    {
        return $this->apiServer->getApiHandler('productGroupPromotions');
    }
}
