<?php
/**
 * UserWebsiteSummaryTest
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

use OpenAPI\Server\Model\UserWebsiteSummary;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * UserWebsiteSummaryTest Class Doc Comment
 *
 * @category    Class
 * @description UserWebsiteSummary
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\UserWebsiteSummary
 */
class UserWebsiteSummaryTest extends TestCase
{
    protected UserWebsiteSummary|MockObject $object;

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
        $this->object = $this->getMockBuilder(UserWebsiteSummary::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(UserWebsiteSummary::class));
        $this->assertInstanceOf(UserWebsiteSummary::class, $this->object);
    }

    /**
     * Test attribute "website"
     *
     * @group unit
     * @small
     */
    public function testPropertyWebsite(): void
    {
        $this->markTestSkipped('Test for property website not implemented');
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
     * Test attribute "verifiedAt"
     *
     * @group unit
     * @small
     */
    public function testPropertyVerifiedAt(): void
    {
        $this->markTestSkipped('Test for property verifiedAt not implemented');
    }
}
