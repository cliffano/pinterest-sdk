<?php
/**
 * CatalogsFeedProcessingScheduleTest
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

use OpenAPI\Server\Model\CatalogsFeedProcessingSchedule;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CatalogsFeedProcessingScheduleTest Class Doc Comment
 *
 * @category    Class
 * @description Daily processing schedule. This field is **OPTIONAL**. Use this to configure the preferred time for processing a feed (otherwise random).
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CatalogsFeedProcessingSchedule
 */
class CatalogsFeedProcessingScheduleTest extends TestCase
{
    protected CatalogsFeedProcessingSchedule|MockObject $object;

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
        $this->object = $this->getMockBuilder(CatalogsFeedProcessingSchedule::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(CatalogsFeedProcessingSchedule::class));
        $this->assertInstanceOf(CatalogsFeedProcessingSchedule::class, $this->object);
    }

    /**
     * Test attribute "time"
     *
     * @group unit
     * @small
     */
    public function testPropertyTime(): void
    {
        $this->markTestSkipped('Test for property time not implemented');
    }

    /**
     * Test attribute "timezone"
     *
     * @group unit
     * @small
     */
    public function testPropertyTimezone(): void
    {
        $this->markTestSkipped('Test for property timezone not implemented');
    }
}
