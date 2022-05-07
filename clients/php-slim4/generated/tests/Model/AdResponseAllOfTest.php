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
use OpenAPIServer\Model\AdResponseAllOf;

/**
 * AdResponseAllOfTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\AdResponseAllOf
 */
class AdResponseAllOfTest extends TestCase
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
     * Test "AdResponseAllOf"
     */
    public function testAdResponseAllOf()
    {
        $testAdResponseAllOf = new AdResponseAllOf();
        $namespacedClassname = AdResponseAllOf::getModelsNamespace() . '\\AdResponseAllOf';
        $this->assertSame('\\' . AdResponseAllOf::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adGroupId"
     */
    public function testPropertyAdGroupId()
    {
        $this->markTestIncomplete(
            'Test of "adGroupId" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "androidDeepLink"
     */
    public function testPropertyAndroidDeepLink()
    {
        $this->markTestIncomplete(
            'Test of "androidDeepLink" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "carouselAndroidDeepLinks"
     */
    public function testPropertyCarouselAndroidDeepLinks()
    {
        $this->markTestIncomplete(
            'Test of "carouselAndroidDeepLinks" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "carouselDestinationUrls"
     */
    public function testPropertyCarouselDestinationUrls()
    {
        $this->markTestIncomplete(
            'Test of "carouselDestinationUrls" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "carouselIosDeepLinks"
     */
    public function testPropertyCarouselIosDeepLinks()
    {
        $this->markTestIncomplete(
            'Test of "carouselIosDeepLinks" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "clickTrackingUrl"
     */
    public function testPropertyClickTrackingUrl()
    {
        $this->markTestIncomplete(
            'Test of "clickTrackingUrl" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "creativeType"
     */
    public function testPropertyCreativeType()
    {
        $this->markTestIncomplete(
            'Test of "creativeType" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "destinationUrl"
     */
    public function testPropertyDestinationUrl()
    {
        $this->markTestIncomplete(
            'Test of "destinationUrl" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "iosDeepLink"
     */
    public function testPropertyIosDeepLink()
    {
        $this->markTestIncomplete(
            'Test of "iosDeepLink" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isPinDeleted"
     */
    public function testPropertyIsPinDeleted()
    {
        $this->markTestIncomplete(
            'Test of "isPinDeleted" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isRemovable"
     */
    public function testPropertyIsRemovable()
    {
        $this->markTestIncomplete(
            'Test of "isRemovable" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        $this->markTestIncomplete(
            'Test of "name" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "pinId"
     */
    public function testPropertyPinId()
    {
        $this->markTestIncomplete(
            'Test of "pinId" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "trackingUrls"
     */
    public function testPropertyTrackingUrls()
    {
        $this->markTestIncomplete(
            'Test of "trackingUrls" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "viewTrackingUrl"
     */
    public function testPropertyViewTrackingUrl()
    {
        $this->markTestIncomplete(
            'Test of "viewTrackingUrl" property in "AdResponseAllOf" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = AdResponseAllOf::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
