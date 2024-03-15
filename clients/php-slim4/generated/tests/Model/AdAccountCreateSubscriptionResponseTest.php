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
use OpenAPIServer\Model\AdAccountCreateSubscriptionResponse;

/**
 * AdAccountCreateSubscriptionResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\AdAccountCreateSubscriptionResponse
 */
class AdAccountCreateSubscriptionResponseTest extends TestCase
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
     * Test "AdAccountCreateSubscriptionResponse"
     */
    public function testAdAccountCreateSubscriptionResponse()
    {
        $testAdAccountCreateSubscriptionResponse = new AdAccountCreateSubscriptionResponse();
        $namespacedClassname = AdAccountCreateSubscriptionResponse::getModelsNamespace() . '\\AdAccountCreateSubscriptionResponse';
        $this->assertSame('\\' . AdAccountCreateSubscriptionResponse::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "AdAccountCreateSubscriptionResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        self::markTestIncomplete(
            'Test of "id" property in "AdAccountCreateSubscriptionResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cryptographicKey"
     */
    public function testPropertyCryptographicKey()
    {
        self::markTestIncomplete(
            'Test of "cryptographicKey" property in "AdAccountCreateSubscriptionResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cryptographicAlgorithm"
     */
    public function testPropertyCryptographicAlgorithm()
    {
        self::markTestIncomplete(
            'Test of "cryptographicAlgorithm" property in "AdAccountCreateSubscriptionResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "createdTime"
     */
    public function testPropertyCreatedTime()
    {
        self::markTestIncomplete(
            'Test of "createdTime" property in "AdAccountCreateSubscriptionResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = AdAccountCreateSubscriptionResponse::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

