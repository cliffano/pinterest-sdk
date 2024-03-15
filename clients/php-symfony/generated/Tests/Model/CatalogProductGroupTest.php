<?php
/**
 * CatalogProductGroupTest
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

use OpenAPI\Server\Model\CatalogProductGroup;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CatalogProductGroupTest Class Doc Comment
 *
 * @category    Class
 * @description non-promoted catalog product group entity
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CatalogProductGroup
 */
class CatalogProductGroupTest extends TestCase
{
    protected CatalogProductGroup|MockObject $object;

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
        $this->object = $this->getMockBuilder(CatalogProductGroup::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(CatalogProductGroup::class));
        $this->assertInstanceOf(CatalogProductGroup::class, $this->object);
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
     * Test attribute "merchantId"
     *
     * @group unit
     * @small
     */
    public function testPropertyMerchantId(): void
    {
        $this->markTestSkipped('Test for property merchantId not implemented');
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
     * Test attribute "filterV2"
     *
     * @group unit
     * @small
     */
    public function testPropertyFilterV2(): void
    {
        $this->markTestSkipped('Test for property filterV2 not implemented');
    }

    /**
     * Test attribute "type"
     *
     * @group unit
     * @small
     */
    public function testPropertyType(): void
    {
        $this->markTestSkipped('Test for property type not implemented');
    }

    /**
     * Test attribute "status"
     *
     * @group unit
     * @small
     */
    public function testPropertyStatus(): void
    {
        $this->markTestSkipped('Test for property status not implemented');
    }

    /**
     * Test attribute "feedProfileId"
     *
     * @group unit
     * @small
     */
    public function testPropertyFeedProfileId(): void
    {
        $this->markTestSkipped('Test for property feedProfileId not implemented');
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
     * Test attribute "lastUpdate"
     *
     * @group unit
     * @small
     */
    public function testPropertyLastUpdate(): void
    {
        $this->markTestSkipped('Test for property lastUpdate not implemented');
    }

    /**
     * Test attribute "productCount"
     *
     * @group unit
     * @small
     */
    public function testPropertyProductCount(): void
    {
        $this->markTestSkipped('Test for property productCount not implemented');
    }

    /**
     * Test attribute "featuredPosition"
     *
     * @group unit
     * @small
     */
    public function testPropertyFeaturedPosition(): void
    {
        $this->markTestSkipped('Test for property featuredPosition not implemented');
    }
}
