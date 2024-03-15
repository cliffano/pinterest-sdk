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
use OpenAPIServer\Model\PinMediaSource;

/**
 * PinMediaSourceTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\PinMediaSource
 */
class PinMediaSourceTest extends TestCase
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
     * Test "PinMediaSource"
     */
    public function testPinMediaSource()
    {
        $testPinMediaSource = new PinMediaSource();
        $namespacedClassname = PinMediaSource::getModelsNamespace() . '\\PinMediaSource';
        $this->assertSame('\\' . PinMediaSource::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "sourceType"
     */
    public function testPropertySourceType()
    {
        self::markTestIncomplete(
            'Test of "sourceType" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "contentType"
     */
    public function testPropertyContentType()
    {
        self::markTestIncomplete(
            'Test of "contentType" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "data"
     */
    public function testPropertyData()
    {
        self::markTestIncomplete(
            'Test of "data" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isStandard"
     */
    public function testPropertyIsStandard()
    {
        self::markTestIncomplete(
            'Test of "isStandard" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "url"
     */
    public function testPropertyUrl()
    {
        self::markTestIncomplete(
            'Test of "url" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageUrl"
     */
    public function testPropertyCoverImageUrl()
    {
        self::markTestIncomplete(
            'Test of "coverImageUrl" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageContentType"
     */
    public function testPropertyCoverImageContentType()
    {
        self::markTestIncomplete(
            'Test of "coverImageContentType" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageData"
     */
    public function testPropertyCoverImageData()
    {
        self::markTestIncomplete(
            'Test of "coverImageData" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaId"
     */
    public function testPropertyMediaId()
    {
        self::markTestIncomplete(
            'Test of "mediaId" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "items"
     */
    public function testPropertyItems()
    {
        self::markTestIncomplete(
            'Test of "items" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "index"
     */
    public function testPropertyIndex()
    {
        self::markTestIncomplete(
            'Test of "index" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isAffiliateLink"
     */
    public function testPropertyIsAffiliateLink()
    {
        self::markTestIncomplete(
            'Test of "isAffiliateLink" property in "PinMediaSource" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = PinMediaSource::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

