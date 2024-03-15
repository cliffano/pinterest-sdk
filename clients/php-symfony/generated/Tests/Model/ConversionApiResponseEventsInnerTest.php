<?php
/**
 * ConversionApiResponseEventsInnerTest
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

use OpenAPI\Server\Model\ConversionApiResponseEventsInner;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * ConversionApiResponseEventsInnerTest Class Doc Comment
 *
 * @category    Class
 * @description ConversionApiResponseEventsInner
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\ConversionApiResponseEventsInner
 */
class ConversionApiResponseEventsInnerTest extends TestCase
{
    protected ConversionApiResponseEventsInner|MockObject $object;

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
        $this->object = $this->getMockBuilder(ConversionApiResponseEventsInner::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(ConversionApiResponseEventsInner::class));
        $this->assertInstanceOf(ConversionApiResponseEventsInner::class, $this->object);
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
     * Test attribute "errorMessage"
     *
     * @group unit
     * @small
     */
    public function testPropertyErrorMessage(): void
    {
        $this->markTestSkipped('Test for property errorMessage not implemented');
    }

    /**
     * Test attribute "warningMessage"
     *
     * @group unit
     * @small
     */
    public function testPropertyWarningMessage(): void
    {
        $this->markTestSkipped('Test for property warningMessage not implemented');
    }
}
