<?php
/**
 * CampaignsAnalyticsResponseInnerTest
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

use OpenAPI\Server\Model\CampaignsAnalyticsResponseInner;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CampaignsAnalyticsResponseInnerTest Class Doc Comment
 *
 * @category    Class
 * @description CampaignsAnalyticsResponseInner
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CampaignsAnalyticsResponseInner
 */
class CampaignsAnalyticsResponseInnerTest extends TestCase
{
    protected CampaignsAnalyticsResponseInner|MockObject $object;

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
        $this->object = $this->getMockBuilder(CampaignsAnalyticsResponseInner::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(CampaignsAnalyticsResponseInner::class));
        $this->assertInstanceOf(CampaignsAnalyticsResponseInner::class, $this->object);
    }

    /**
     * Test attribute "cAMPAIGNID"
     *
     * @group unit
     * @small
     */
    public function testPropertyCAMPAIGNID(): void
    {
        $this->markTestSkipped('Test for property cAMPAIGNID not implemented');
    }

    /**
     * Test attribute "dATE"
     *
     * @group unit
     * @small
     */
    public function testPropertyDATE(): void
    {
        $this->markTestSkipped('Test for property dATE not implemented');
    }
}