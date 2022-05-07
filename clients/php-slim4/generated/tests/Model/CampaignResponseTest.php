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
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CampaignResponse;

/**
 * CampaignResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CampaignResponse
 */
class CampaignResponseTest extends TestCase
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
     * Test "CampaignResponse"
     */
    public function testCampaignResponse()
    {
        $testCampaignResponse = new CampaignResponse();
        $namespacedClassname = CampaignResponse::getModelsNamespace() . '\\CampaignResponse';
        $this->assertSame('\\' . CampaignResponse::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        $this->markTestIncomplete(
            'Test of "id" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adAccountId"
     */
    public function testPropertyAdAccountId()
    {
        $this->markTestIncomplete(
            'Test of "adAccountId" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        $this->markTestIncomplete(
            'Test of "name" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "lifetimeSpendCap"
     */
    public function testPropertyLifetimeSpendCap()
    {
        $this->markTestIncomplete(
            'Test of "lifetimeSpendCap" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "dailySpendCap"
     */
    public function testPropertyDailySpendCap()
    {
        $this->markTestIncomplete(
            'Test of "dailySpendCap" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "orderLineId"
     */
    public function testPropertyOrderLineId()
    {
        $this->markTestIncomplete(
            'Test of "orderLineId" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "trackingUrls"
     */
    public function testPropertyTrackingUrls()
    {
        $this->markTestIncomplete(
            'Test of "trackingUrls" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "startTime"
     */
    public function testPropertyStartTime()
    {
        $this->markTestIncomplete(
            'Test of "startTime" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "endTime"
     */
    public function testPropertyEndTime()
    {
        $this->markTestIncomplete(
            'Test of "endTime" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "objectiveType"
     */
    public function testPropertyObjectiveType()
    {
        $this->markTestIncomplete(
            'Test of "objectiveType" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "createdTime"
     */
    public function testPropertyCreatedTime()
    {
        $this->markTestIncomplete(
            'Test of "createdTime" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "updatedTime"
     */
    public function testPropertyUpdatedTime()
    {
        $this->markTestIncomplete(
            'Test of "updatedTime" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "type"
     */
    public function testPropertyType()
    {
        $this->markTestIncomplete(
            'Test of "type" property in "CampaignResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CampaignResponse::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
