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
use OpenAPIServer\Model\ProductType2Filter;

/**
 * ProductType2FilterTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ProductType2Filter
 */
class ProductType2FilterTest extends TestCase
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
     * Test "ProductType2Filter"
     */
    public function testProductType2Filter()
    {
        $testProductType2Filter = new ProductType2Filter();
        $namespacedClassname = ProductType2Filter::getModelsNamespace() . '\\ProductType2Filter';
        $this->assertSame('\\' . ProductType2Filter::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "ProductType2Filter" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "pRODUCTTYPE2"
     */
    public function testPropertyPRODUCTTYPE2()
    {
        $this->markTestIncomplete(
            'Test of "pRODUCTTYPE2" property in "ProductType2Filter" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ProductType2Filter::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
