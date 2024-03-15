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
use OpenAPIServer\Model\CatalogsHotelProductGroupFilterKeys;

/**
 * CatalogsHotelProductGroupFilterKeysTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsHotelProductGroupFilterKeys
 */
class CatalogsHotelProductGroupFilterKeysTest extends TestCase
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
     * Test "CatalogsHotelProductGroupFilterKeys"
     */
    public function testCatalogsHotelProductGroupFilterKeys()
    {
        $testCatalogsHotelProductGroupFilterKeys = new CatalogsHotelProductGroupFilterKeys();
        $namespacedClassname = CatalogsHotelProductGroupFilterKeys::getModelsNamespace() . '\\CatalogsHotelProductGroupFilterKeys';
        $this->assertSame('\\' . CatalogsHotelProductGroupFilterKeys::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "pRICE"
     */
    public function testPropertyPRICE()
    {
        self::markTestIncomplete(
            'Test of "pRICE" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "hOTELID"
     */
    public function testPropertyHOTELID()
    {
        self::markTestIncomplete(
            'Test of "hOTELID" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "bRAND"
     */
    public function testPropertyBRAND()
    {
        self::markTestIncomplete(
            'Test of "bRAND" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cUSTOMLABEL0"
     */
    public function testPropertyCUSTOMLABEL0()
    {
        self::markTestIncomplete(
            'Test of "cUSTOMLABEL0" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cUSTOMLABEL1"
     */
    public function testPropertyCUSTOMLABEL1()
    {
        self::markTestIncomplete(
            'Test of "cUSTOMLABEL1" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cUSTOMLABEL2"
     */
    public function testPropertyCUSTOMLABEL2()
    {
        self::markTestIncomplete(
            'Test of "cUSTOMLABEL2" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cUSTOMLABEL3"
     */
    public function testPropertyCUSTOMLABEL3()
    {
        self::markTestIncomplete(
            'Test of "cUSTOMLABEL3" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cUSTOMLABEL4"
     */
    public function testPropertyCUSTOMLABEL4()
    {
        self::markTestIncomplete(
            'Test of "cUSTOMLABEL4" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "cOUNTRY"
     */
    public function testPropertyCOUNTRY()
    {
        self::markTestIncomplete(
            'Test of "cOUNTRY" property in "CatalogsHotelProductGroupFilterKeys" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsHotelProductGroupFilterKeys::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

