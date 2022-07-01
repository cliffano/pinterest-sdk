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
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CatalogsFeedsUpdateRequest;

/**
 * CatalogsFeedsUpdateRequestTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsFeedsUpdateRequest
 */
class CatalogsFeedsUpdateRequestTest extends TestCase
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
     * Test "CatalogsFeedsUpdateRequest"
     */
    public function testCatalogsFeedsUpdateRequest()
    {
        $testCatalogsFeedsUpdateRequest = new CatalogsFeedsUpdateRequest();
        $namespacedClassname = CatalogsFeedsUpdateRequest::getModelsNamespace() . '\\CatalogsFeedsUpdateRequest';
        $this->assertSame('\\' . CatalogsFeedsUpdateRequest::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "defaultAvailability"
     */
    public function testPropertyDefaultAvailability()
    {
        $this->markTestIncomplete(
            'Test of "defaultAvailability" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "defaultCurrency"
     */
    public function testPropertyDefaultCurrency()
    {
        $this->markTestIncomplete(
            'Test of "defaultCurrency" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "name"
     */
    public function testPropertyName()
    {
        $this->markTestIncomplete(
            'Test of "name" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "format"
     */
    public function testPropertyFormat()
    {
        $this->markTestIncomplete(
            'Test of "format" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "credentials"
     */
    public function testPropertyCredentials()
    {
        $this->markTestIncomplete(
            'Test of "credentials" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "location"
     */
    public function testPropertyLocation()
    {
        $this->markTestIncomplete(
            'Test of "location" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "preferredProcessingSchedule"
     */
    public function testPropertyPreferredProcessingSchedule()
    {
        $this->markTestIncomplete(
            'Test of "preferredProcessingSchedule" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "status"
     */
    public function testPropertyStatus()
    {
        $this->markTestIncomplete(
            'Test of "status" property in "CatalogsFeedsUpdateRequest" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsFeedsUpdateRequest::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
