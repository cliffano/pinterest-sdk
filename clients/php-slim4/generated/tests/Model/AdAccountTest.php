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
use OpenAPIServer\Model\AdAccount;

/**
 * AdAccountTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\AdAccount
 */
class AdAccountTest extends TestCase
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
     * Test "AdAccount"
     */
    public function testAdAccount()
    {
        $testAdAccount = new AdAccount();
        $namespacedClassname = AdAccount::getModelsNamespace() . '\\AdAccount';
        $this->assertSame('\\' . AdAccount::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        self::markTestIncomplete(
            'Test of "id" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        self::markTestIncomplete(
            'Test of "name" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "owner"
     */
    public function testPropertyOwner()
    {
        self::markTestIncomplete(
            'Test of "owner" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "country"
     */
    public function testPropertyCountry()
    {
        self::markTestIncomplete(
            'Test of "country" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "currency"
     */
    public function testPropertyCurrency()
    {
        self::markTestIncomplete(
            'Test of "currency" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "permissions"
     */
    public function testPropertyPermissions()
    {
        self::markTestIncomplete(
            'Test of "permissions" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "createdTime"
     */
    public function testPropertyCreatedTime()
    {
        self::markTestIncomplete(
            'Test of "createdTime" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "updatedTime"
     */
    public function testPropertyUpdatedTime()
    {
        self::markTestIncomplete(
            'Test of "updatedTime" property in "AdAccount" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = AdAccount::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

