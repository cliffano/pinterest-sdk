<?php
/**
 * SearchUserBoardsGet200ResponseTest
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

use OpenAPI\Server\Model\SearchUserBoardsGet200Response;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * SearchUserBoardsGet200ResponseTest Class Doc Comment
 *
 * @category    Class
 * @description SearchUserBoardsGet200Response
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\SearchUserBoardsGet200Response
 */
class SearchUserBoardsGet200ResponseTest extends TestCase
{
    protected SearchUserBoardsGet200Response|MockObject $object;

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
        $this->object = $this->getMockBuilder(SearchUserBoardsGet200Response::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(SearchUserBoardsGet200Response::class));
        $this->assertInstanceOf(SearchUserBoardsGet200Response::class, $this->object);
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

    /**
     * Test attribute "bookmark"
     *
     * @group unit
     * @small
     */
    public function testPropertyBookmark(): void
    {
        $this->markTestSkipped('Test for property bookmark not implemented');
    }
}
