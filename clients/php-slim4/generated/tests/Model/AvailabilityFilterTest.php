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
use OpenAPIServer\Model\AvailabilityFilter;

/**
 * AvailabilityFilterTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\AvailabilityFilter
 */
class AvailabilityFilterTest extends TestCase
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
     * Test "AvailabilityFilter"
     */
    public function testAvailabilityFilter()
    {
        $testAvailabilityFilter = new AvailabilityFilter();
        $namespacedClassname = AvailabilityFilter::getModelsNamespace() . '\\AvailabilityFilter';
        $this->assertSame('\\' . AvailabilityFilter::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "AvailabilityFilter" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aVAILABILITY"
     */
    public function testPropertyAVAILABILITY()
    {
        self::markTestIncomplete(
            'Test of "aVAILABILITY" property in "AvailabilityFilter" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = AvailabilityFilter::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

