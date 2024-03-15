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
use OpenAPIServer\Model\TrackingUrls;

/**
 * TrackingUrlsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\TrackingUrls
 */
class TrackingUrlsTest extends TestCase
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
     * Test "TrackingUrls"
     */
    public function testTrackingUrls()
    {
        $testTrackingUrls = new TrackingUrls();
        $namespacedClassname = TrackingUrls::getModelsNamespace() . '\\TrackingUrls';
        $this->assertSame('\\' . TrackingUrls::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "impression"
     */
    public function testPropertyImpression()
    {
        self::markTestIncomplete(
            'Test of "impression" property in "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "click"
     */
    public function testPropertyClick()
    {
        self::markTestIncomplete(
            'Test of "click" property in "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "engagement"
     */
    public function testPropertyEngagement()
    {
        self::markTestIncomplete(
            'Test of "engagement" property in "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "buyableButton"
     */
    public function testPropertyBuyableButton()
    {
        self::markTestIncomplete(
            'Test of "buyableButton" property in "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "audienceVerification"
     */
    public function testPropertyAudienceVerification()
    {
        self::markTestIncomplete(
            'Test of "audienceVerification" property in "TrackingUrls" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = TrackingUrls::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

