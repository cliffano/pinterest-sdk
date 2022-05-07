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
use OpenAPIServer\Model\CatalogsProductGroupPricingCriteria;

/**
 * CatalogsProductGroupPricingCriteriaTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsProductGroupPricingCriteria
 */
class CatalogsProductGroupPricingCriteriaTest extends TestCase
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
     * Test "CatalogsProductGroupPricingCriteria"
     */
    public function testCatalogsProductGroupPricingCriteria()
    {
        $testCatalogsProductGroupPricingCriteria = new CatalogsProductGroupPricingCriteria();
        $namespacedClassname = CatalogsProductGroupPricingCriteria::getModelsNamespace() . '\\CatalogsProductGroupPricingCriteria';
        $this->assertSame('\\' . CatalogsProductGroupPricingCriteria::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CatalogsProductGroupPricingCriteria" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "inclusion"
     */
    public function testPropertyInclusion()
    {
        $this->markTestIncomplete(
            'Test of "inclusion" property in "CatalogsProductGroupPricingCriteria" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "values"
     */
    public function testPropertyValues()
    {
        $this->markTestIncomplete(
            'Test of "values" property in "CatalogsProductGroupPricingCriteria" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "negated"
     */
    public function testPropertyNegated()
    {
        $this->markTestIncomplete(
            'Test of "negated" property in "CatalogsProductGroupPricingCriteria" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsProductGroupPricingCriteria::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
