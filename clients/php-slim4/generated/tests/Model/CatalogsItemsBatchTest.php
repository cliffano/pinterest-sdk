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
use OpenAPIServer\Model\CatalogsItemsBatch;

/**
 * CatalogsItemsBatchTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsItemsBatch
 */
class CatalogsItemsBatchTest extends TestCase
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
     * Test "CatalogsItemsBatch"
     */
    public function testCatalogsItemsBatch()
    {
        $testCatalogsItemsBatch = new CatalogsItemsBatch();
        $namespacedClassname = CatalogsItemsBatch::getModelsNamespace() . '\\CatalogsItemsBatch';
        $this->assertSame('\\' . CatalogsItemsBatch::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "items"
     */
    public function testPropertyItems()
    {
        $this->markTestIncomplete(
            'Test of "items" property in "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "batchId"
     */
    public function testPropertyBatchId()
    {
        $this->markTestIncomplete(
            'Test of "batchId" property in "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "createdTime"
     */
    public function testPropertyCreatedTime()
    {
        $this->markTestIncomplete(
            'Test of "createdTime" property in "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "completedTime"
     */
    public function testPropertyCompletedTime()
    {
        $this->markTestIncomplete(
            'Test of "completedTime" property in "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "CatalogsItemsBatch" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsItemsBatch::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
