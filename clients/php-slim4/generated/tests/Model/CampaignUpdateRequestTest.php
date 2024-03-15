<?php

/**
 * Pinterest REST API
 * PHP version 7.4
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest's REST API
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CampaignUpdateRequest;

/**
 * CampaignUpdateRequestTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CampaignUpdateRequest
 */
class CampaignUpdateRequestTest extends TestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown(): void
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass(): void
    {
    }

    /**
     * Test "CampaignUpdateRequest"
     */
    public function testCampaignUpdateRequest()
    {
        $testCampaignUpdateRequest = new CampaignUpdateRequest();
        $namespacedClassname = CampaignUpdateRequest::getModelsNamespace() . '\\CampaignUpdateRequest';
        $this->assertSame('\\' . CampaignUpdateRequest::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        self::markTestIncomplete(
            'Test of "id" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adAccountId"
     */
    public function testPropertyAdAccountId()
    {
        self::markTestIncomplete(
            'Test of "adAccountId" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        self::markTestIncomplete(
            'Test of "name" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        self::markTestIncomplete(
            'Test of "status" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "lifetimeSpendCap"
     */
    public function testPropertyLifetimeSpendCap()
    {
        self::markTestIncomplete(
            'Test of "lifetimeSpendCap" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "dailySpendCap"
     */
    public function testPropertyDailySpendCap()
    {
        self::markTestIncomplete(
            'Test of "dailySpendCap" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "orderLineId"
     */
    public function testPropertyOrderLineId()
    {
        self::markTestIncomplete(
            'Test of "orderLineId" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "trackingUrls"
     */
    public function testPropertyTrackingUrls()
    {
        self::markTestIncomplete(
            'Test of "trackingUrls" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "startTime"
     */
    public function testPropertyStartTime()
    {
        self::markTestIncomplete(
            'Test of "startTime" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "endTime"
     */
    public function testPropertyEndTime()
    {
        self::markTestIncomplete(
            'Test of "endTime" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "summaryStatus"
     */
    public function testPropertySummaryStatus()
    {
        self::markTestIncomplete(
            'Test of "summaryStatus" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isFlexibleDailyBudgets"
     */
    public function testPropertyIsFlexibleDailyBudgets()
    {
        self::markTestIncomplete(
            'Test of "isFlexibleDailyBudgets" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "defaultAdGroupBudgetInMicroCurrency"
     */
    public function testPropertyDefaultAdGroupBudgetInMicroCurrency()
    {
        self::markTestIncomplete(
            'Test of "defaultAdGroupBudgetInMicroCurrency" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isAutomatedCampaign"
     */
    public function testPropertyIsAutomatedCampaign()
    {
        self::markTestIncomplete(
            'Test of "isAutomatedCampaign" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isCampaignBudgetOptimization"
     */
    public function testPropertyIsCampaignBudgetOptimization()
    {
        self::markTestIncomplete(
            'Test of "isCampaignBudgetOptimization" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "objectiveType"
     */
    public function testPropertyObjectiveType()
    {
        self::markTestIncomplete(
            'Test of "objectiveType" property in "CampaignUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CampaignUpdateRequest::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

