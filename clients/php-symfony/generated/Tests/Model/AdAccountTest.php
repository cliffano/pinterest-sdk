<?php
/**
 * AdAccountTest
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

use OpenAPI\Server\Model\AdAccount;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * AdAccountTest Class Doc Comment
 *
 * @category    Class
 * @description AdAccount
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\AdAccount
 */
class AdAccountTest extends TestCase
{
    protected AdAccount|MockObject $object;

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
        $this->object = $this->getMockBuilder(AdAccount::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(AdAccount::class));
        $this->assertInstanceOf(AdAccount::class, $this->object);
    }

    /**
     * Test attribute "id"
     *
     * @group unit
     * @small
     */
    public function testPropertyId(): void
    {
        $this->markTestSkipped('Test for property id not implemented');
    }

    /**
     * Test attribute "name"
     *
     * @group unit
     * @small
     */
    public function testPropertyName(): void
    {
        $this->markTestSkipped('Test for property name not implemented');
    }

    /**
     * Test attribute "owner"
     *
     * @group unit
     * @small
     */
    public function testPropertyOwner(): void
    {
        $this->markTestSkipped('Test for property owner not implemented');
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
     * Test attribute "permissions"
     *
     * @group unit
     * @small
     */
    public function testPropertyPermissions(): void
    {
        $this->markTestSkipped('Test for property permissions not implemented');
    }

    /**
     * Test attribute "createdTime"
     *
     * @group unit
     * @small
     */
    public function testPropertyCreatedTime(): void
    {
        $this->markTestSkipped('Test for property createdTime not implemented');
    }

    /**
     * Test attribute "updatedTime"
     *
     * @group unit
     * @small
     */
    public function testPropertyUpdatedTime(): void
    {
        $this->markTestSkipped('Test for property updatedTime not implemented');
    }
}