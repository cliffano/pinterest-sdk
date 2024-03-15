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
use OpenAPIServer\Model\OrderLine;

/**
 * OrderLineTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\OrderLine
 */
class OrderLineTest extends TestCase
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
     * Test "OrderLine"
     */
    public function testOrderLine()
    {
        $testOrderLine = new OrderLine();
        $namespacedClassname = OrderLine::getModelsNamespace() . '\\OrderLine';
        $this->assertSame('\\' . OrderLine::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        self::markTestIncomplete(
            'Test of "id" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "type"
     */
    public function testPropertyType()
    {
        self::markTestIncomplete(
            'Test of "type" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adAccountId"
     */
    public function testPropertyAdAccountId()
    {
        self::markTestIncomplete(
            'Test of "adAccountId" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "purchaseOrderId"
     */
    public function testPropertyPurchaseOrderId()
    {
        self::markTestIncomplete(
            'Test of "purchaseOrderId" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "startTime"
     */
    public function testPropertyStartTime()
    {
        self::markTestIncomplete(
            'Test of "startTime" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "endTime"
     */
    public function testPropertyEndTime()
    {
        self::markTestIncomplete(
            'Test of "endTime" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "budget"
     */
    public function testPropertyBudget()
    {
        self::markTestIncomplete(
            'Test of "budget" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "paidBudget"
     */
    public function testPropertyPaidBudget()
    {
        self::markTestIncomplete(
            'Test of "paidBudget" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        self::markTestIncomplete(
            'Test of "status" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        self::markTestIncomplete(
            'Test of "name" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "paidType"
     */
    public function testPropertyPaidType()
    {
        self::markTestIncomplete(
            'Test of "paidType" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "campaignIds"
     */
    public function testPropertyCampaignIds()
    {
        self::markTestIncomplete(
            'Test of "campaignIds" property in "OrderLine" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = OrderLine::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

