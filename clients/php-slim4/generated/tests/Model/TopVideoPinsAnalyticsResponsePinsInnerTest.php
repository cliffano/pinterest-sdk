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
use OpenAPIServer\Model\TopVideoPinsAnalyticsResponsePinsInner;

/**
 * TopVideoPinsAnalyticsResponsePinsInnerTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\TopVideoPinsAnalyticsResponsePinsInner
 */
class TopVideoPinsAnalyticsResponsePinsInnerTest extends TestCase
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
     * Test "TopVideoPinsAnalyticsResponsePinsInner"
     */
    public function testTopVideoPinsAnalyticsResponsePinsInner()
    {
        $testTopVideoPinsAnalyticsResponsePinsInner = new TopVideoPinsAnalyticsResponsePinsInner();
        $namespacedClassname = TopVideoPinsAnalyticsResponsePinsInner::getModelsNamespace() . '\\TopVideoPinsAnalyticsResponsePinsInner';
        $this->assertSame('\\' . TopVideoPinsAnalyticsResponsePinsInner::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "TopVideoPinsAnalyticsResponsePinsInner" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "metrics"
     */
    public function testPropertyMetrics()
    {
        self::markTestIncomplete(
            'Test of "metrics" property in "TopVideoPinsAnalyticsResponsePinsInner" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "dataStatus"
     */
    public function testPropertyDataStatus()
    {
        self::markTestIncomplete(
            'Test of "dataStatus" property in "TopVideoPinsAnalyticsResponsePinsInner" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "pinId"
     */
    public function testPropertyPinId()
    {
        self::markTestIncomplete(
            'Test of "pinId" property in "TopVideoPinsAnalyticsResponsePinsInner" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = TopVideoPinsAnalyticsResponsePinsInner::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
