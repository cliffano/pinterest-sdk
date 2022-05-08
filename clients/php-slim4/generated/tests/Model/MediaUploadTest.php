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
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\MediaUpload;

/**
 * MediaUploadTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\MediaUpload
 */
class MediaUploadTest extends TestCase
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
     * Test "MediaUpload"
     */
    public function testMediaUpload()
    {
        $testMediaUpload = new MediaUpload();
        $namespacedClassname = MediaUpload::getModelsNamespace() . '\\MediaUpload';
        $this->assertSame('\\' . MediaUpload::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "MediaUpload" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaId"
     */
    public function testPropertyMediaId()
    {
        $this->markTestIncomplete(
            'Test of "mediaId" property in "MediaUpload" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "mediaType"
     */
    public function testPropertyMediaType()
    {
        $this->markTestIncomplete(
            'Test of "mediaType" property in "MediaUpload" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "uploadUrl"
     */
    public function testPropertyUploadUrl()
    {
        $this->markTestIncomplete(
            'Test of "uploadUrl" property in "MediaUpload" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "uploadParameters"
     */
    public function testPropertyUploadParameters()
    {
        $this->markTestIncomplete(
            'Test of "uploadParameters" property in "MediaUpload" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = MediaUpload::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}