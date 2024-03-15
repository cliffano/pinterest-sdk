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
use OpenAPIServer\Model\RelatedTerms;

/**
 * RelatedTermsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\RelatedTerms
 */
class RelatedTermsTest extends TestCase
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
     * Test "RelatedTerms"
     */
    public function testRelatedTerms()
    {
        $testRelatedTerms = new RelatedTerms();
        $namespacedClassname = RelatedTerms::getModelsNamespace() . '\\RelatedTerms';
        $this->assertSame('\\' . RelatedTerms::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        self::markTestIncomplete(
            'Test of "RelatedTerms" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        self::markTestIncomplete(
            'Test of "id" property in "RelatedTerms" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "relatedTermCount"
     */
    public function testPropertyRelatedTermCount()
    {
        self::markTestIncomplete(
            'Test of "relatedTermCount" property in "RelatedTerms" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "relatedTermsList"
     */
    public function testPropertyRelatedTermsList()
    {
        self::markTestIncomplete(
            'Test of "relatedTermsList" property in "RelatedTerms" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = RelatedTerms::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}

