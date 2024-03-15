<?php
/**
 * PinMediaSourceImagesBase64ItemsInnerTest
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

use OpenAPI\Server\Model\PinMediaSourceImagesBase64ItemsInner;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * PinMediaSourceImagesBase64ItemsInnerTest Class Doc Comment
 *
 * @category    Class
 * @description PinMediaSourceImagesBase64ItemsInner
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\PinMediaSourceImagesBase64ItemsInner
 */
class PinMediaSourceImagesBase64ItemsInnerTest extends TestCase
{
    protected PinMediaSourceImagesBase64ItemsInner|MockObject $object;

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
        $this->object = $this->getMockBuilder(PinMediaSourceImagesBase64ItemsInner::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(PinMediaSourceImagesBase64ItemsInner::class));
        $this->assertInstanceOf(PinMediaSourceImagesBase64ItemsInner::class, $this->object);
    }

    /**
     * Test attribute "title"
     *
     * @group unit
     * @small
     */
    public function testPropertyTitle(): void
    {
        $this->markTestSkipped('Test for property title not implemented');
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
     * Test attribute "link"
     *
     * @group unit
     * @small
     */
    public function testPropertyLink(): void
    {
        $this->markTestSkipped('Test for property link not implemented');
    }

    /**
     * Test attribute "contentType"
     *
     * @group unit
     * @small
     */
    public function testPropertyContentType(): void
    {
        $this->markTestSkipped('Test for property contentType not implemented');
    }

    /**
     * Test attribute "data"
     *
     * @group unit
     * @small
     */
    public function testPropertyData(): void
    {
        $this->markTestSkipped('Test for property data not implemented');
    }
}
