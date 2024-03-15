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
use OpenAPIServer\Model\PinMediaSourceVideoID;

/**
 * PinMediaSourceVideoIDTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\PinMediaSourceVideoID
 */
class PinMediaSourceVideoIDTest extends TestCase
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
     * Test "PinMediaSourceVideoID"
     */
    public function testPinMediaSourceVideoID()
    {
        $testPinMediaSourceVideoID = new PinMediaSourceVideoID();
        $namespacedClassname = PinMediaSourceVideoID::getModelsNamespace() . '\\PinMediaSourceVideoID';
        $this->assertSame('\\' . PinMediaSourceVideoID::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "sourceType"
     */
    public function testPropertySourceType()
    {
        self::markTestIncomplete(
            'Test of "sourceType" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageUrl"
     */
    public function testPropertyCoverImageUrl()
    {
        self::markTestIncomplete(
            'Test of "coverImageUrl" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageContentType"
     */
    public function testPropertyCoverImageContentType()
    {
        self::markTestIncomplete(
            'Test of "coverImageContentType" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageData"
     */
    public function testPropertyCoverImageData()
    {
        self::markTestIncomplete(
            'Test of "coverImageData" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaId"
     */
    public function testPropertyMediaId()
    {
        self::markTestIncomplete(
            'Test of "mediaId" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isStandard"
     */
    public function testPropertyIsStandard()
    {
        self::markTestIncomplete(
            'Test of "isStandard" property in "PinMediaSourceVideoID" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = PinMediaSourceVideoID::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

