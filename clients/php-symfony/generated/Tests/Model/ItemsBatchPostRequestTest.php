<?php
/**
 * ItemsBatchPostRequestTest
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

use OpenAPI\Server\Model\ItemsBatchPostRequest;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * ItemsBatchPostRequestTest Class Doc Comment
 *
 * @category    Class
 * @description ItemsBatchPostRequest
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\ItemsBatchPostRequest
 */
class ItemsBatchPostRequestTest extends TestCase
{
    protected ItemsBatchPostRequest|MockObject $object;

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
        $this->object = $this->getMockBuilder(ItemsBatchPostRequest::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(ItemsBatchPostRequest::class));
        $this->assertInstanceOf(ItemsBatchPostRequest::class, $this->object);
    }

    /**
     * Test attribute "country"
     *
     * @group unit
     * @small
     */
    public function testPropertyCountry(): void
    {
        $this->markTestSkipped('Test for property country not implemented');
    }

    /**
     * Test attribute "language"
     *
     * @group unit
     * @small
     */
    public function testPropertyLanguage(): void
    {
        $this->markTestSkipped('Test for property language not implemented');
    }

    /**
     * Test attribute "operation"
     *
     * @group unit
     * @small
     */
    public function testPropertyOperation(): void
    {
        $this->markTestSkipped('Test for property operation not implemented');
    }

    /**
     * Test attribute "items"
     *
     * @group unit
     * @small
     */
    public function testPropertyItems(): void
    {
        $this->markTestSkipped('Test for property items not implemented');
    }
}
