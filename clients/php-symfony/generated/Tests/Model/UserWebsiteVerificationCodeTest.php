<?php
/**
 * UserWebsiteVerificationCodeTest
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

use OpenAPI\Server\Model\UserWebsiteVerificationCode;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * UserWebsiteVerificationCodeTest Class Doc Comment
 *
 * @category    Class
 * @description UserWebsiteVerificationCode
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\UserWebsiteVerificationCode
 */
class UserWebsiteVerificationCodeTest extends TestCase
{
    protected UserWebsiteVerificationCode|MockObject $object;

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
        $this->object = $this->getMockBuilder(UserWebsiteVerificationCode::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(UserWebsiteVerificationCode::class));
        $this->assertInstanceOf(UserWebsiteVerificationCode::class, $this->object);
    }

    /**
     * Test attribute "verificationCode"
     *
     * @group unit
     * @small
     */
    public function testPropertyVerificationCode(): void
    {
        $this->markTestSkipped('Test for property verificationCode not implemented');
    }

    /**
     * Test attribute "dnsTxtRecord"
     *
     * @group unit
     * @small
     */
    public function testPropertyDnsTxtRecord(): void
    {
        $this->markTestSkipped('Test for property dnsTxtRecord not implemented');
    }

    /**
     * Test attribute "metatag"
     *
     * @group unit
     * @small
     */
    public function testPropertyMetatag(): void
    {
        $this->markTestSkipped('Test for property metatag not implemented');
    }

    /**
     * Test attribute "filename"
     *
     * @group unit
     * @small
     */
    public function testPropertyFilename(): void
    {
        $this->markTestSkipped('Test for property filename not implemented');
    }

    /**
     * Test attribute "fileContent"
     *
     * @group unit
     * @small
     */
    public function testPropertyFileContent(): void
    {
        $this->markTestSkipped('Test for property fileContent not implemented');
    }
}
