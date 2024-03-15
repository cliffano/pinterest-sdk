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
use OpenAPIServer\Model\VideoMetadata;

/**
 * VideoMetadataTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\VideoMetadata
 */
class VideoMetadataTest extends TestCase
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
     * Test "VideoMetadata"
     */
    public function testVideoMetadata()
    {
        $testVideoMetadata = new VideoMetadata();
        $namespacedClassname = VideoMetadata::getModelsNamespace() . '\\VideoMetadata';
        $this->assertSame('\\' . VideoMetadata::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "itemType"
     */
    public function testPropertyItemType()
    {
        self::markTestIncomplete(
            'Test of "itemType" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "coverImageUrl"
     */
    public function testPropertyCoverImageUrl()
    {
        self::markTestIncomplete(
            'Test of "coverImageUrl" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "videoUrl"
     */
    public function testPropertyVideoUrl()
    {
        self::markTestIncomplete(
            'Test of "videoUrl" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "duration"
     */
    public function testPropertyDuration()
    {
        self::markTestIncomplete(
            'Test of "duration" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "height"
     */
    public function testPropertyHeight()
    {
        self::markTestIncomplete(
            'Test of "height" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "width"
     */
    public function testPropertyWidth()
    {
        self::markTestIncomplete(
            'Test of "width" property in "VideoMetadata" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = VideoMetadata::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

