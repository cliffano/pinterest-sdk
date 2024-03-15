<?php
/**
 * ItemResponseAnyOf1Test
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

use OpenAPI\Server\Model\ItemResponseAnyOf1;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * ItemResponseAnyOf1Test Class Doc Comment
 *
 * @category    Class
 * @description ItemResponseAnyOf1
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\ItemResponseAnyOf1
 */
class ItemResponseAnyOf1Test extends TestCase
{
    protected ItemResponseAnyOf1|MockObject $object;

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
        $this->object = $this->getMockBuilder(ItemResponseAnyOf1::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(ItemResponseAnyOf1::class));
        $this->assertInstanceOf(ItemResponseAnyOf1::class, $this->object);
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
     * Test attribute "itemId"
     *
     * @group unit
     * @small
     */
    public function testPropertyItemId(): void
    {
        $this->markTestSkipped('Test for property itemId not implemented');
    }

    /**
     * Test attribute "errors"
     *
     * @group unit
     * @small
     */
    public function testPropertyErrors(): void
    {
        $this->markTestSkipped('Test for property errors not implemented');
    }

    /**
     * Test attribute "hotelId"
     *
     * @group unit
     * @small
     */
    public function testPropertyHotelId(): void
    {
        $this->markTestSkipped('Test for property hotelId not implemented');
    }
}
