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
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CampaignCommon;

/**
 * CampaignCommonTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CampaignCommon
 */
class CampaignCommonTest extends TestCase
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
     * Test "CampaignCommon"
     */
    public function testCampaignCommon()
    {
        $testCampaignCommon = new CampaignCommon();
        $namespacedClassname = CampaignCommon::getModelsNamespace() . '\\CampaignCommon';
        $this->assertSame('\\' . CampaignCommon::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adAccountId"
     */
    public function testPropertyAdAccountId()
    {
        $this->markTestIncomplete(
            'Test of "adAccountId" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        $this->markTestIncomplete(
            'Test of "name" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "lifetimeSpendCap"
     */
    public function testPropertyLifetimeSpendCap()
    {
        $this->markTestIncomplete(
            'Test of "lifetimeSpendCap" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "dailySpendCap"
     */
    public function testPropertyDailySpendCap()
    {
        $this->markTestIncomplete(
            'Test of "dailySpendCap" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "orderLineId"
     */
    public function testPropertyOrderLineId()
    {
        $this->markTestIncomplete(
            'Test of "orderLineId" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "trackingUrls"
     */
    public function testPropertyTrackingUrls()
    {
        $this->markTestIncomplete(
            'Test of "trackingUrls" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "startTime"
     */
    public function testPropertyStartTime()
    {
        $this->markTestIncomplete(
            'Test of "startTime" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "endTime"
     */
    public function testPropertyEndTime()
    {
        $this->markTestIncomplete(
            'Test of "endTime" property in "CampaignCommon" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CampaignCommon::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
