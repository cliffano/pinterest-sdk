<?php
/**
 * PinMediaSourcePinURLTest
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

use OpenAPI\Server\Model\PinMediaSourcePinURL;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * PinMediaSourcePinURLTest Class Doc Comment
 *
 * @category    Class
 * @description Pin URL-based media source for product pin creation. Currently the field is only available to a list of beta users.
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\PinMediaSourcePinURL
 */
class PinMediaSourcePinURLTest extends TestCase
{
    protected PinMediaSourcePinURL|MockObject $object;

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
        $this->object = $this->getMockBuilder(PinMediaSourcePinURL::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(PinMediaSourcePinURL::class));
        $this->assertInstanceOf(PinMediaSourcePinURL::class, $this->object);
    }

    /**
     * Test attribute "sourceType"
     *
     * @group unit
     * @small
     */
    public function testPropertySourceType(): void
    {
        $this->markTestSkipped('Test for property sourceType not implemented');
    }

    /**
     * Test attribute "isAffiliateLink"
     *
     * @group unit
     * @small
     */
    public function testPropertyIsAffiliateLink(): void
    {
        $this->markTestSkipped('Test for property isAffiliateLink not implemented');
    }
}
