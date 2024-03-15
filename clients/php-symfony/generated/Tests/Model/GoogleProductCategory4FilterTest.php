<?php
/**
 * GoogleProductCategory4FilterTest
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

use OpenAPI\Server\Model\GoogleProductCategory4Filter;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * GoogleProductCategory4FilterTest Class Doc Comment
 *
 * @category    Class
 * @description GoogleProductCategory4Filter
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\GoogleProductCategory4Filter
 */
class GoogleProductCategory4FilterTest extends TestCase
{
    protected GoogleProductCategory4Filter|MockObject $object;

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
        $this->object = $this->getMockBuilder(GoogleProductCategory4Filter::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(GoogleProductCategory4Filter::class));
        $this->assertInstanceOf(GoogleProductCategory4Filter::class, $this->object);
    }

    /**
     * Test attribute "gOOGLEPRODUCTCATEGORY4"
     *
     * @group unit
     * @small
     */
    public function testPropertyGOOGLEPRODUCTCATEGORY4(): void
    {
        $this->markTestSkipped('Test for property gOOGLEPRODUCTCATEGORY4 not implemented');
    }
}
