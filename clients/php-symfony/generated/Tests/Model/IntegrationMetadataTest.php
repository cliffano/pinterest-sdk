<?php
/**
 * IntegrationMetadataTest
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

use OpenAPI\Server\Model\IntegrationMetadata;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * IntegrationMetadataTest Class Doc Comment
 *
 * @category    Class
 * @description Integration metadata
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\IntegrationMetadata
 */
class IntegrationMetadataTest extends TestCase
{
    protected IntegrationMetadata|MockObject $object;

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
        $this->object = $this->getMockBuilder(IntegrationMetadata::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(IntegrationMetadata::class));
        $this->assertInstanceOf(IntegrationMetadata::class, $this->object);
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
     * Test attribute "externalBusinessId"
     *
     * @group unit
     * @small
     */
    public function testPropertyExternalBusinessId(): void
    {
        $this->markTestSkipped('Test for property externalBusinessId not implemented');
    }

    /**
     * Test attribute "connectedMerchantId"
     *
     * @group unit
     * @small
     */
    public function testPropertyConnectedMerchantId(): void
    {
        $this->markTestSkipped('Test for property connectedMerchantId not implemented');
    }

    /**
     * Test attribute "connectedUserId"
     *
     * @group unit
     * @small
     */
    public function testPropertyConnectedUserId(): void
    {
        $this->markTestSkipped('Test for property connectedUserId not implemented');
    }

    /**
     * Test attribute "connectedAdvertiserId"
     *
     * @group unit
     * @small
     */
    public function testPropertyConnectedAdvertiserId(): void
    {
        $this->markTestSkipped('Test for property connectedAdvertiserId not implemented');
    }

    /**
     * Test attribute "connectedLbaId"
     *
     * @group unit
     * @small
     */
    public function testPropertyConnectedLbaId(): void
    {
        $this->markTestSkipped('Test for property connectedLbaId not implemented');
    }

    /**
     * Test attribute "connectedTagId"
     *
     * @group unit
     * @small
     */
    public function testPropertyConnectedTagId(): void
    {
        $this->markTestSkipped('Test for property connectedTagId not implemented');
    }

    /**
     * Test attribute "partnerAccessTokenExpiry"
     *
     * @group unit
     * @small
     */
    public function testPropertyPartnerAccessTokenExpiry(): void
    {
        $this->markTestSkipped('Test for property partnerAccessTokenExpiry not implemented');
    }

    /**
     * Test attribute "partnerRefreshTokenExpiry"
     *
     * @group unit
     * @small
     */
    public function testPropertyPartnerRefreshTokenExpiry(): void
    {
        $this->markTestSkipped('Test for property partnerRefreshTokenExpiry not implemented');
    }

    /**
     * Test attribute "scopes"
     *
     * @group unit
     * @small
     */
    public function testPropertyScopes(): void
    {
        $this->markTestSkipped('Test for property scopes not implemented');
    }

    /**
     * Test attribute "createdTimestamp"
     *
     * @group unit
     * @small
     */
    public function testPropertyCreatedTimestamp(): void
    {
        $this->markTestSkipped('Test for property createdTimestamp not implemented');
    }

    /**
     * Test attribute "updatedTimestamp"
     *
     * @group unit
     * @small
     */
    public function testPropertyUpdatedTimestamp(): void
    {
        $this->markTestSkipped('Test for property updatedTimestamp not implemented');
    }

    /**
     * Test attribute "additionalId1"
     *
     * @group unit
     * @small
     */
    public function testPropertyAdditionalId1(): void
    {
        $this->markTestSkipped('Test for property additionalId1 not implemented');
    }

    /**
     * Test attribute "partnerMetadata"
     *
     * @group unit
     * @small
     */
    public function testPropertyPartnerMetadata(): void
    {
        $this->markTestSkipped('Test for property partnerMetadata not implemented');
    }
}
