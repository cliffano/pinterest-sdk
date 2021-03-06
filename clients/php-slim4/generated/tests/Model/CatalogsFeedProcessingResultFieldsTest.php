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
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CatalogsFeedProcessingResultFields;

/**
 * CatalogsFeedProcessingResultFieldsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsFeedProcessingResultFields
 */
class CatalogsFeedProcessingResultFieldsTest extends TestCase
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
     * Test "CatalogsFeedProcessingResultFields"
     */
    public function testCatalogsFeedProcessingResultFields()
    {
        $testCatalogsFeedProcessingResultFields = new CatalogsFeedProcessingResultFields();
        $namespacedClassname = CatalogsFeedProcessingResultFields::getModelsNamespace() . '\\CatalogsFeedProcessingResultFields';
        $this->assertSame('\\' . CatalogsFeedProcessingResultFields::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CatalogsFeedProcessingResultFields" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "ingestionDetails"
     */
    public function testPropertyIngestionDetails()
    {
        $this->markTestIncomplete(
            'Test of "ingestionDetails" property in "CatalogsFeedProcessingResultFields" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "CatalogsFeedProcessingResultFields" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "productCounts"
     */
    public function testPropertyProductCounts()
    {
        $this->markTestIncomplete(
            'Test of "productCounts" property in "CatalogsFeedProcessingResultFields" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "validationDetails"
     */
    public function testPropertyValidationDetails()
    {
        $this->markTestIncomplete(
            'Test of "validationDetails" property in "CatalogsFeedProcessingResultFields" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsFeedProcessingResultFields::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
