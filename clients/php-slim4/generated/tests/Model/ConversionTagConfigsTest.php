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
use OpenAPIServer\Model\ConversionTagConfigs;

/**
 * ConversionTagConfigsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ConversionTagConfigs
 */
class ConversionTagConfigsTest extends TestCase
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
     * Test "ConversionTagConfigs"
     */
    public function testConversionTagConfigs()
    {
        $testConversionTagConfigs = new ConversionTagConfigs();
        $namespacedClassname = ConversionTagConfigs::getModelsNamespace() . '\\ConversionTagConfigs';
        $this->assertSame('\\' . ConversionTagConfigs::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemEnabled"
     */
    public function testPropertyAemEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mdFrequency"
     */
    public function testPropertyMdFrequency()
    {
        self::markTestIncomplete(
            'Test of "mdFrequency" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemFnlnEnabled"
     */
    public function testPropertyAemFnlnEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemFnlnEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemPhEnabled"
     */
    public function testPropertyAemPhEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemPhEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemGeEnabled"
     */
    public function testPropertyAemGeEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemGeEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemDbEnabled"
     */
    public function testPropertyAemDbEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemDbEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "aemLocEnabled"
     */
    public function testPropertyAemLocEnabled()
    {
        self::markTestIncomplete(
            'Test of "aemLocEnabled" property in "ConversionTagConfigs" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ConversionTagConfigs::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

