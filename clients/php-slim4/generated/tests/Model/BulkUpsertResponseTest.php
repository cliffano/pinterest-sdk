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
use OpenAPIServer\Model\BulkUpsertResponse;

/**
 * BulkUpsertResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\BulkUpsertResponse
 */
class BulkUpsertResponseTest extends TestCase
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
     * Test "BulkUpsertResponse"
     */
    public function testBulkUpsertResponse()
    {
        $testBulkUpsertResponse = new BulkUpsertResponse();
        $namespacedClassname = BulkUpsertResponse::getModelsNamespace() . '\\BulkUpsertResponse';
        $this->assertSame('\\' . BulkUpsertResponse::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "BulkUpsertResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "requestId"
     */
    public function testPropertyRequestId()
    {
        self::markTestIncomplete(
            'Test of "requestId" property in "BulkUpsertResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = BulkUpsertResponse::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

