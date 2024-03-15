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
use OpenAPIServer\Model\CatalogsUpdateRetailItem;

/**
 * CatalogsUpdateRetailItemTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsUpdateRetailItem
 */
class CatalogsUpdateRetailItemTest extends TestCase
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
     * Test "CatalogsUpdateRetailItem"
     */
    public function testCatalogsUpdateRetailItem()
    {
        $testCatalogsUpdateRetailItem = new CatalogsUpdateRetailItem();
        $namespacedClassname = CatalogsUpdateRetailItem::getModelsNamespace() . '\\CatalogsUpdateRetailItem';
        $this->assertSame('\\' . CatalogsUpdateRetailItem::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "CatalogsUpdateRetailItem" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "itemId"
     */
    public function testPropertyItemId()
    {
        self::markTestIncomplete(
            'Test of "itemId" property in "CatalogsUpdateRetailItem" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "operation"
     */
    public function testPropertyOperation()
    {
        self::markTestIncomplete(
            'Test of "operation" property in "CatalogsUpdateRetailItem" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "attributes"
     */
    public function testPropertyAttributes()
    {
        self::markTestIncomplete(
            'Test of "attributes" property in "CatalogsUpdateRetailItem" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "updateMask"
     */
    public function testPropertyUpdateMask()
    {
        self::markTestIncomplete(
            'Test of "updateMask" property in "CatalogsUpdateRetailItem" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsUpdateRetailItem::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
