<?php
/**
 * CatalogsHotelProductGroupTest
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Model
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */

namespace OpenAPI\Server\Tests\Model;

use OpenAPI\Server\Model\CatalogsHotelProductGroup;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CatalogsHotelProductGroupTest Class Doc Comment
 *
 * @category    Class
 * @description CatalogsHotelProductGroup
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CatalogsHotelProductGroup
 */
class CatalogsHotelProductGroupTest extends TestCase
{
    protected CatalogsHotelProductGroup|MockObject $object;

    /**
     * Setup before running any test case
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
        $this->object = $this->getMockBuilder(CatalogsHotelProductGroup::class)->getMockForAbstractClass();
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
     * @group integration
     * @small
     */
    public function testTestClassExists(): void
    {
        $this->assertTrue(class_exists(CatalogsHotelProductGroup::class));
        $this->assertInstanceOf(CatalogsHotelProductGroup::class, $this->object);
    }

    /**
     * Test attribute "catalogType"
     *
     * @group unit
     * @small
     */
    public function testPropertyCatalogType(): void
    {
        $this->markTestSkipped('Test for property catalogType not implemented');
    }

    /**
     * Test attribute "id"
     *
     * @group unit
     * @small
     */
    public function testPropertyId(): void
    {
        $this->markTestSkipped('Test for property id not implemented');
    }

    /**
     * Test attribute "name"
     *
     * @group unit
     * @small
     */
    public function testPropertyName(): void
    {
        $this->markTestSkipped('Test for property name not implemented');
    }

    /**
     * Test attribute "description"
     *
     * @group unit
     * @small
     */
    public function testPropertyDescription(): void
    {
        $this->markTestSkipped('Test for property description not implemented');
    }

    /**
     * Test attribute "filters"
     *
     * @group unit
     * @small
     */
    public function testPropertyFilters(): void
    {
        $this->markTestSkipped('Test for property filters not implemented');
    }

    /**
     * Test attribute "createdAt"
     *
     * @group unit
     * @small
     */
    public function testPropertyCreatedAt(): void
    {
        $this->markTestSkipped('Test for property createdAt not implemented');
    }

    /**
     * Test attribute "updatedAt"
     *
     * @group unit
     * @small
     */
    public function testPropertyUpdatedAt(): void
    {
        $this->markTestSkipped('Test for property updatedAt not implemented');
    }

    /**
     * Test attribute "catalogId"
     *
     * @group unit
     * @small
     */
    public function testPropertyCatalogId(): void
    {
        $this->markTestSkipped('Test for property catalogId not implemented');
    }
}
