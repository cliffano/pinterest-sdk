<?php
/**
 * TemplateResponseDateRangeAbsoluteDateRangeTest
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

use OpenAPI\Server\Model\TemplateResponseDateRangeAbsoluteDateRange;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * TemplateResponseDateRangeAbsoluteDateRangeTest Class Doc Comment
 *
 * @category    Class
 * @description The absolute date range of the template
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\TemplateResponseDateRangeAbsoluteDateRange
 */
class TemplateResponseDateRangeAbsoluteDateRangeTest extends TestCase
{
    protected TemplateResponseDateRangeAbsoluteDateRange|MockObject $object;

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
        $this->object = $this->getMockBuilder(TemplateResponseDateRangeAbsoluteDateRange::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(TemplateResponseDateRangeAbsoluteDateRange::class));
        $this->assertInstanceOf(TemplateResponseDateRangeAbsoluteDateRange::class, $this->object);
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
     * Test attribute "startDate"
     *
     * @group unit
     * @small
     */
    public function testPropertyStartDate(): void
    {
        $this->markTestSkipped('Test for property startDate not implemented');
    }

    /**
     * Test attribute "endDate"
     *
     * @group unit
     * @small
     */
    public function testPropertyEndDate(): void
    {
        $this->markTestSkipped('Test for property endDate not implemented');
    }
}