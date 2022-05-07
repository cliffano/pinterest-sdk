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
use OpenAPIServer\Model\Account;

/**
 * AccountTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\Account
 */
class AccountTest extends TestCase
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
     * Test "Account"
     */
    public function testAccount()
    {
        $testAccount = new Account();
        $namespacedClassname = Account::getModelsNamespace() . '\\Account';
        $this->assertSame('\\' . Account::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "Account" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "accountType"
     */
    public function testPropertyAccountType()
    {
        $this->markTestIncomplete(
            'Test of "accountType" property in "Account" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "profileImage"
     */
    public function testPropertyProfileImage()
    {
        $this->markTestIncomplete(
            'Test of "profileImage" property in "Account" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "websiteUrl"
     */
    public function testPropertyWebsiteUrl()
    {
        $this->markTestIncomplete(
            'Test of "websiteUrl" property in "Account" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "username"
     */
    public function testPropertyUsername()
    {
        $this->markTestIncomplete(
            'Test of "username" property in "Account" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = Account::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
