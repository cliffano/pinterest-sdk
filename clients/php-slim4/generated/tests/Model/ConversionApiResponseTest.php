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
use OpenAPIServer\Model\ConversionApiResponse;

/**
 * ConversionApiResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ConversionApiResponse
 */
class ConversionApiResponseTest extends TestCase
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
     * Test "ConversionApiResponse"
     */
    public function testConversionApiResponse()
    {
        $testConversionApiResponse = new ConversionApiResponse();
        $namespacedClassname = ConversionApiResponse::getModelsNamespace() . '\\ConversionApiResponse';
        $this->assertSame('\\' . ConversionApiResponse::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "ConversionApiResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "numEventsReceived"
     */
    public function testPropertyNumEventsReceived()
    {
        self::markTestIncomplete(
            'Test of "numEventsReceived" property in "ConversionApiResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "numEventsProcessed"
     */
    public function testPropertyNumEventsProcessed()
    {
        self::markTestIncomplete(
            'Test of "numEventsProcessed" property in "ConversionApiResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "events"
     */
    public function testPropertyEvents()
    {
        self::markTestIncomplete(
            'Test of "events" property in "ConversionApiResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ConversionApiResponse::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

