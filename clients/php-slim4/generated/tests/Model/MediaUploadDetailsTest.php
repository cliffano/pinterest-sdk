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
use OpenAPIServer\Model\MediaUploadDetails;

/**
 * MediaUploadDetailsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\MediaUploadDetails
 */
class MediaUploadDetailsTest extends TestCase
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
     * Test "MediaUploadDetails"
     */
    public function testMediaUploadDetails()
    {
        $testMediaUploadDetails = new MediaUploadDetails();
        $namespacedClassname = MediaUploadDetails::getModelsNamespace() . '\\MediaUploadDetails';
        $this->assertSame('\\' . MediaUploadDetails::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "MediaUploadDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaId"
     */
    public function testPropertyMediaId()
    {
        self::markTestIncomplete(
            'Test of "mediaId" property in "MediaUploadDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaType"
     */
    public function testPropertyMediaType()
    {
        self::markTestIncomplete(
            'Test of "mediaType" property in "MediaUploadDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        self::markTestIncomplete(
            'Test of "status" property in "MediaUploadDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = MediaUploadDetails::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

