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
use OpenAPIServer\Model\KeywordMetricsResponse;

/**
 * KeywordMetricsResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\KeywordMetricsResponse
 */
class KeywordMetricsResponseTest extends TestCase
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
     * Test "KeywordMetricsResponse"
     */
    public function testKeywordMetricsResponse()
    {
        $testKeywordMetricsResponse = new KeywordMetricsResponse();
        $namespacedClassname = KeywordMetricsResponse::getModelsNamespace() . '\\KeywordMetricsResponse';
        $this->assertSame('\\' . KeywordMetricsResponse::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "KeywordMetricsResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "keyword"
     */
    public function testPropertyKeyword()
    {
        self::markTestIncomplete(
            'Test of "keyword" property in "KeywordMetricsResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "metrics"
     */
    public function testPropertyMetrics()
    {
        self::markTestIncomplete(
            'Test of "metrics" property in "KeywordMetricsResponse" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = KeywordMetricsResponse::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
