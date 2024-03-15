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
use OpenAPIServer\Model\PinUpdate;

/**
 * PinUpdateTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\PinUpdate
 */
class PinUpdateTest extends TestCase
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
     * Test "PinUpdate"
     */
    public function testPinUpdate()
    {
        $testPinUpdate = new PinUpdate();
        $namespacedClassname = PinUpdate::getModelsNamespace() . '\\PinUpdate';
        $this->assertSame('\\' . PinUpdate::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "altText"
     */
    public function testPropertyAltText()
    {
        self::markTestIncomplete(
            'Test of "altText" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "boardId"
     */
    public function testPropertyBoardId()
    {
        self::markTestIncomplete(
            'Test of "boardId" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "boardSectionId"
     */
    public function testPropertyBoardSectionId()
    {
        self::markTestIncomplete(
            'Test of "boardSectionId" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "description"
     */
    public function testPropertyDescription()
    {
        self::markTestIncomplete(
            'Test of "description" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "link"
     */
    public function testPropertyLink()
    {
        self::markTestIncomplete(
            'Test of "link" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "title"
     */
    public function testPropertyTitle()
    {
        self::markTestIncomplete(
            'Test of "title" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "carouselSlots"
     */
    public function testPropertyCarouselSlots()
    {
        self::markTestIncomplete(
            'Test of "carouselSlots" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "note"
     */
    public function testPropertyNote()
    {
        self::markTestIncomplete(
            'Test of "note" property in "PinUpdate" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = PinUpdate::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

