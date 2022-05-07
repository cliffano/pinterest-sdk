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
use OpenAPIServer\Model\ImageDetails;

/**
 * ImageDetailsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ImageDetails
 */
class ImageDetailsTest extends TestCase
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
     * Test "ImageDetails"
     */
    public function testImageDetails()
    {
        $testImageDetails = new ImageDetails();
        $namespacedClassname = ImageDetails::getModelsNamespace() . '\\ImageDetails';
        $this->assertSame('\\' . ImageDetails::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "ImageDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "width"
     */
    public function testPropertyWidth()
    {
        $this->markTestIncomplete(
            'Test of "width" property in "ImageDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "height"
     */
    public function testPropertyHeight()
    {
        $this->markTestIncomplete(
            'Test of "height" property in "ImageDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "url"
     */
    public function testPropertyUrl()
    {
        $this->markTestIncomplete(
            'Test of "url" property in "ImageDetails" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ImageDetails::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
