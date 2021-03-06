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
use OpenAPIServer\Model\AdGroupResponseAllOf1;

/**
 * AdGroupResponseAllOf1Test Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\AdGroupResponseAllOf1
 */
class AdGroupResponseAllOf1Test extends TestCase
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
     * Test "AdGroupResponseAllOf1"
     */
    public function testAdGroupResponseAllOf1()
    {
        $testAdGroupResponseAllOf1 = new AdGroupResponseAllOf1();
        $namespacedClassname = AdGroupResponseAllOf1::getModelsNamespace() . '\\AdGroupResponseAllOf1';
        $this->assertSame('\\' . AdGroupResponseAllOf1::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "campaignId"
     */
    public function testPropertyCampaignId()
    {
        $this->markTestIncomplete(
            'Test of "campaignId" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "billableEvent"
     */
    public function testPropertyBillableEvent()
    {
        $this->markTestIncomplete(
            'Test of "billableEvent" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        $this->markTestIncomplete(
            'Test of "id" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "type"
     */
    public function testPropertyType()
    {
        $this->markTestIncomplete(
            'Test of "type" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adAccountId"
     */
    public function testPropertyAdAccountId()
    {
        $this->markTestIncomplete(
            'Test of "adAccountId" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "createdTime"
     */
    public function testPropertyCreatedTime()
    {
        $this->markTestIncomplete(
            'Test of "createdTime" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "updatedTime"
     */
    public function testPropertyUpdatedTime()
    {
        $this->markTestIncomplete(
            'Test of "updatedTime" property in "AdGroupResponseAllOf1" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = AdGroupResponseAllOf1::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
