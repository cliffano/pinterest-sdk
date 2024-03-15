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
use OpenAPIServer\Model\CatalogsProductGroupPinsList200Response;

/**
 * CatalogsProductGroupPinsList200ResponseTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsProductGroupPinsList200Response
 */
class CatalogsProductGroupPinsList200ResponseTest extends TestCase
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
     * Test "CatalogsProductGroupPinsList200Response"
     */
    public function testCatalogsProductGroupPinsList200Response()
    {
        $testCatalogsProductGroupPinsList200Response = new CatalogsProductGroupPinsList200Response();
        $namespacedClassname = CatalogsProductGroupPinsList200Response::getModelsNamespace() . '\\CatalogsProductGroupPinsList200Response';
        $this->assertSame('\\' . CatalogsProductGroupPinsList200Response::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "CatalogsProductGroupPinsList200Response" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "items"
     */
    public function testPropertyItems()
    {
        self::markTestIncomplete(
            'Test of "items" property in "CatalogsProductGroupPinsList200Response" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "bookmark"
     */
    public function testPropertyBookmark()
    {
        self::markTestIncomplete(
            'Test of "bookmark" property in "CatalogsProductGroupPinsList200Response" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsProductGroupPinsList200Response::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
