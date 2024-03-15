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
use OpenAPIServer\Model\CustomerListUpdateRequest;

/**
 * CustomerListUpdateRequestTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CustomerListUpdateRequest
 */
class CustomerListUpdateRequestTest extends TestCase
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
     * Test "CustomerListUpdateRequest"
     */
    public function testCustomerListUpdateRequest()
    {
        $testCustomerListUpdateRequest = new CustomerListUpdateRequest();
        $namespacedClassname = CustomerListUpdateRequest::getModelsNamespace() . '\\CustomerListUpdateRequest';
        $this->assertSame('\\' . CustomerListUpdateRequest::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "CustomerListUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "records"
     */
    public function testPropertyRecords()
    {
        self::markTestIncomplete(
            'Test of "records" property in "CustomerListUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "operationType"
     */
    public function testPropertyOperationType()
    {
        self::markTestIncomplete(
            'Test of "operationType" property in "CustomerListUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "exceptions"
     */
    public function testPropertyExceptions()
    {
        self::markTestIncomplete(
            'Test of "exceptions" property in "CustomerListUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CustomerListUpdateRequest::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

