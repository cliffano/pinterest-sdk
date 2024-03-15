<?php
/**
 * CampaignResponseTest
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

use OpenAPI\Server\Model\CampaignResponse;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CampaignResponseTest Class Doc Comment
 *
 * @category    Class
 * @description CampaignResponse
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CampaignResponse
 */
class CampaignResponseTest extends TestCase
{
    protected CampaignResponse|MockObject $object;

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
        $this->object = $this->getMockBuilder(CampaignResponse::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(CampaignResponse::class));
        $this->assertInstanceOf(CampaignResponse::class, $this->object);
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
     * Test attribute "adAccountId"
     *
     * @group unit
     * @small
     */
    public function testPropertyAdAccountId(): void
    {
        $this->markTestSkipped('Test for property adAccountId not implemented');
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
     * Test attribute "lifetimeSpendCap"
     *
     * @group unit
     * @small
     */
    public function testPropertyLifetimeSpendCap(): void
    {
        $this->markTestSkipped('Test for property lifetimeSpendCap not implemented');
    }

    /**
     * Test attribute "dailySpendCap"
     *
     * @group unit
     * @small
     */
    public function testPropertyDailySpendCap(): void
    {
        $this->markTestSkipped('Test for property dailySpendCap not implemented');
    }

    /**
     * Test attribute "orderLineId"
     *
     * @group unit
     * @small
     */
    public function testPropertyOrderLineId(): void
    {
        $this->markTestSkipped('Test for property orderLineId not implemented');
    }

    /**
     * Test attribute "trackingUrls"
     *
     * @group unit
     * @small
     */
    public function testPropertyTrackingUrls(): void
    {
        $this->markTestSkipped('Test for property trackingUrls not implemented');
    }

    /**
     * Test attribute "startTime"
     *
     * @group unit
     * @small
     */
    public function testPropertyStartTime(): void
    {
        $this->markTestSkipped('Test for property startTime not implemented');
    }

    /**
     * Test attribute "endTime"
     *
     * @group unit
     * @small
     */
    public function testPropertyEndTime(): void
    {
        $this->markTestSkipped('Test for property endTime not implemented');
    }

    /**
     * Test attribute "summaryStatus"
     *
     * @group unit
     * @small
     */
    public function testPropertySummaryStatus(): void
    {
        $this->markTestSkipped('Test for property summaryStatus not implemented');
    }

    /**
     * Test attribute "objectiveType"
     *
     * @group unit
     * @small
     */
    public function testPropertyObjectiveType(): void
    {
        $this->markTestSkipped('Test for property objectiveType not implemented');
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

    /**
     * Test attribute "type"
     *
     * @group unit
     * @small
     */
    public function testPropertyType(): void
    {
        $this->markTestSkipped('Test for property type not implemented');
    }

    /**
     * Test attribute "isFlexibleDailyBudgets"
     *
     * @group unit
     * @small
     */
    public function testPropertyIsFlexibleDailyBudgets(): void
    {
        $this->markTestSkipped('Test for property isFlexibleDailyBudgets not implemented');
    }

    /**
     * Test attribute "isCampaignBudgetOptimization"
     *
     * @group unit
     * @small
     */
    public function testPropertyIsCampaignBudgetOptimization(): void
    {
        $this->markTestSkipped('Test for property isCampaignBudgetOptimization not implemented');
    }
}