<?php
/**
 * ImageDetailsTest
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

use OpenAPI\Server\Model\ImageDetails;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * ImageDetailsTest Class Doc Comment
 *
 * @category    Class
 * @description ImageDetails
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\ImageDetails
 */
class ImageDetailsTest extends TestCase
{
    protected ImageDetails|MockObject $object;

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
        $this->object = $this->getMockBuilder(ImageDetails::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(ImageDetails::class));
        $this->assertInstanceOf(ImageDetails::class, $this->object);
    }

    /**
     * Test attribute "width"
     *
     * @group unit
     * @small
     */
    public function testPropertyWidth(): void
    {
        $this->markTestSkipped('Test for property width not implemented');
    }

    /**
     * Test attribute "height"
     *
     * @group unit
     * @small
     */
    public function testPropertyHeight(): void
    {
        $this->markTestSkipped('Test for property height not implemented');
    }

    /**
     * Test attribute "url"
     *
     * @group unit
     * @small
     */
    public function testPropertyUrl(): void
    {
        $this->markTestSkipped('Test for property url not implemented');
    }
}
