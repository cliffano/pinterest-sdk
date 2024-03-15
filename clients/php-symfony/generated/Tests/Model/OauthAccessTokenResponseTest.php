<?php
/**
 * OauthAccessTokenResponseTest
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

use OpenAPI\Server\Model\OauthAccessTokenResponse;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * OauthAccessTokenResponseTest Class Doc Comment
 *
 * @category    Class
 * @description A successful OAuth access token response.
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\OauthAccessTokenResponse
 */
class OauthAccessTokenResponseTest extends TestCase
{
    protected OauthAccessTokenResponse|MockObject $object;

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
        $this->object = $this->getMockBuilder(OauthAccessTokenResponse::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(OauthAccessTokenResponse::class));
        $this->assertInstanceOf(OauthAccessTokenResponse::class, $this->object);
    }

    /**
     * Test attribute "responseType"
     *
     * @group unit
     * @small
     */
    public function testPropertyResponseType(): void
    {
        $this->markTestSkipped('Test for property responseType not implemented');
    }

    /**
     * Test attribute "accessToken"
     *
     * @group unit
     * @small
     */
    public function testPropertyAccessToken(): void
    {
        $this->markTestSkipped('Test for property accessToken not implemented');
    }

    /**
     * Test attribute "tokenType"
     *
     * @group unit
     * @small
     */
    public function testPropertyTokenType(): void
    {
        $this->markTestSkipped('Test for property tokenType not implemented');
    }

    /**
     * Test attribute "expiresIn"
     *
     * @group unit
     * @small
     */
    public function testPropertyExpiresIn(): void
    {
        $this->markTestSkipped('Test for property expiresIn not implemented');
    }

    /**
     * Test attribute "scope"
     *
     * @group unit
     * @small
     */
    public function testPropertyScope(): void
    {
        $this->markTestSkipped('Test for property scope not implemented');
    }
}
