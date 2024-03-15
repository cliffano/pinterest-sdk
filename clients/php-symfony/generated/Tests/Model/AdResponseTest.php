<?php
/**
 * AdResponseTest
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

use OpenAPI\Server\Model\AdResponse;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * AdResponseTest Class Doc Comment
 *
 * @category    Class
 * @description AdResponse
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\AdResponse
 */
class AdResponseTest extends TestCase
{
    protected AdResponse|MockObject $object;

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
        $this->object = $this->getMockBuilder(AdResponse::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(AdResponse::class));
        $this->assertInstanceOf(AdResponse::class, $this->object);
    }

    /**
     * Test attribute "adGroupId"
     *
     * @group unit
     * @small
     */
    public function testPropertyAdGroupId(): void
    {
        $this->markTestSkipped('Test for property adGroupId not implemented');
    }

    /**
     * Test attribute "androidDeepLink"
     *
     * @group unit
     * @small
     */
    public function testPropertyAndroidDeepLink(): void
    {
        $this->markTestSkipped('Test for property androidDeepLink not implemented');
    }

    /**
     * Test attribute "carouselAndroidDeepLinks"
     *
     * @group unit
     * @small
     */
    public function testPropertyCarouselAndroidDeepLinks(): void
    {
        $this->markTestSkipped('Test for property carouselAndroidDeepLinks not implemented');
    }

    /**
     * Test attribute "carouselDestinationUrls"
     *
     * @group unit
     * @small
     */
    public function testPropertyCarouselDestinationUrls(): void
    {
        $this->markTestSkipped('Test for property carouselDestinationUrls not implemented');
    }

    /**
     * Test attribute "carouselIosDeepLinks"
     *
     * @group unit
     * @small
     */
    public function testPropertyCarouselIosDeepLinks(): void
    {
        $this->markTestSkipped('Test for property carouselIosDeepLinks not implemented');
    }

    /**
     * Test attribute "clickTrackingUrl"
     *
     * @group unit
     * @small
     */
    public function testPropertyClickTrackingUrl(): void
    {
        $this->markTestSkipped('Test for property clickTrackingUrl not implemented');
    }

    /**
     * Test attribute "creativeType"
     *
     * @group unit
     * @small
     */
    public function testPropertyCreativeType(): void
    {
        $this->markTestSkipped('Test for property creativeType not implemented');
    }

    /**
     * Test attribute "destinationUrl"
     *
     * @group unit
     * @small
     */
    public function testPropertyDestinationUrl(): void
    {
        $this->markTestSkipped('Test for property destinationUrl not implemented');
    }

    /**
     * Test attribute "iosDeepLink"
     *
     * @group unit
     * @small
     */
    public function testPropertyIosDeepLink(): void
    {
        $this->markTestSkipped('Test for property iosDeepLink not implemented');
    }

    /**
     * Test attribute "isPinDeleted"
     *
     * @group unit
     * @small
     */
    public function testPropertyIsPinDeleted(): void
    {
        $this->markTestSkipped('Test for property isPinDeleted not implemented');
    }

    /**
     * Test attribute "isRemovable"
     *
     * @group unit
     * @small
     */
    public function testPropertyIsRemovable(): void
    {
        $this->markTestSkipped('Test for property isRemovable not implemented');
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
     * Test attribute "viewTrackingUrl"
     *
     * @group unit
     * @small
     */
    public function testPropertyViewTrackingUrl(): void
    {
        $this->markTestSkipped('Test for property viewTrackingUrl not implemented');
    }

    /**
     * Test attribute "leadFormId"
     *
     * @group unit
     * @small
     */
    public function testPropertyLeadFormId(): void
    {
        $this->markTestSkipped('Test for property leadFormId not implemented');
    }

    /**
     * Test attribute "gridClickType"
     *
     * @group unit
     * @small
     */
    public function testPropertyGridClickType(): void
    {
        $this->markTestSkipped('Test for property gridClickType not implemented');
    }

    /**
     * Test attribute "customizableCtaType"
     *
     * @group unit
     * @small
     */
    public function testPropertyCustomizableCtaType(): void
    {
        $this->markTestSkipped('Test for property customizableCtaType not implemented');
    }

    /**
     * Test attribute "quizPinData"
     *
     * @group unit
     * @small
     */
    public function testPropertyQuizPinData(): void
    {
        $this->markTestSkipped('Test for property quizPinData not implemented');
    }

    /**
     * Test attribute "pinId"
     *
     * @group unit
     * @small
     */
    public function testPropertyPinId(): void
    {
        $this->markTestSkipped('Test for property pinId not implemented');
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
     * Test attribute "campaignId"
     *
     * @group unit
     * @small
     */
    public function testPropertyCampaignId(): void
    {
        $this->markTestSkipped('Test for property campaignId not implemented');
    }

    /**
     * Test attribute "collectionItemsDestinationUrlTemplate"
     *
     * @group unit
     * @small
     */
    public function testPropertyCollectionItemsDestinationUrlTemplate(): void
    {
        $this->markTestSkipped('Test for property collectionItemsDestinationUrlTemplate not implemented');
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
     * Test attribute "rejectedReasons"
     *
     * @group unit
     * @small
     */
    public function testPropertyRejectedReasons(): void
    {
        $this->markTestSkipped('Test for property rejectedReasons not implemented');
    }

    /**
     * Test attribute "rejectionLabels"
     *
     * @group unit
     * @small
     */
    public function testPropertyRejectionLabels(): void
    {
        $this->markTestSkipped('Test for property rejectionLabels not implemented');
    }

    /**
     * Test attribute "reviewStatus"
     *
     * @group unit
     * @small
     */
    public function testPropertyReviewStatus(): void
    {
        $this->markTestSkipped('Test for property reviewStatus not implemented');
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
     * Test attribute "summaryStatus"
     *
     * @group unit
     * @small
     */
    public function testPropertySummaryStatus(): void
    {
        $this->markTestSkipped('Test for property summaryStatus not implemented');
    }
}