<?php
/**
 * BidFloorSpecTest
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

use OpenAPI\Server\Model\BidFloorSpec;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * BidFloorSpecTest Class Doc Comment
 *
 * @category    Class
 * @description BidFloorSpec
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\BidFloorSpec
 */
class BidFloorSpecTest extends TestCase
{
    protected BidFloorSpec|MockObject $object;

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
        $this->object = $this->getMockBuilder(BidFloorSpec::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(BidFloorSpec::class));
        $this->assertInstanceOf(BidFloorSpec::class, $this->object);
    }

    /**
     * Test attribute "countries"
     *
     * @group unit
     * @small
     */
    public function testPropertyCountries(): void
    {
        $this->markTestSkipped('Test for property countries not implemented');
    }

    /**
     * Test attribute "currency"
     *
     * @group unit
     * @small
     */
    public function testPropertyCurrency(): void
    {
        $this->markTestSkipped('Test for property currency not implemented');
    }

    /**
     * Test attribute "objectiveType"
     *
     * @group unit
     * @small
     */
    public function testPropertyObjectiveType(): void
    {
        $this->markTestSkipped('Test for property objectiveType not implemented');
    }

    /**
     * Test attribute "billableEvent"
     *
     * @group unit
     * @small
     */
    public function testPropertyBillableEvent(): void
    {
        $this->markTestSkipped('Test for property billableEvent not implemented');
    }

    /**
     * Test attribute "optimizationGoalMetadata"
     *
     * @group unit
     * @small
     */
    public function testPropertyOptimizationGoalMetadata(): void
    {
        $this->markTestSkipped('Test for property optimizationGoalMetadata not implemented');
    }

    /**
     * Test attribute "creativeType"
     *
     * @group unit
     * @small
     */
    public function testPropertyCreativeType(): void
    {
        $this->markTestSkipped('Test for property creativeType not implemented');
    }
}
