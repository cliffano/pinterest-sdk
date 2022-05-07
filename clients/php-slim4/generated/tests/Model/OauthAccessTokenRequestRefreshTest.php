<?php

/**
 * Pinterest REST API
 * PHP version 7.4
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest's REST API
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\OauthAccessTokenRequestRefresh;

/**
 * OauthAccessTokenRequestRefreshTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\OauthAccessTokenRequestRefresh
 */
class OauthAccessTokenRequestRefreshTest extends TestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
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
     * Test "OauthAccessTokenRequestRefresh"
     */
    public function testOauthAccessTokenRequestRefresh()
    {
        $testOauthAccessTokenRequestRefresh = new OauthAccessTokenRequestRefresh();
        $namespacedClassname = OauthAccessTokenRequestRefresh::getModelsNamespace() . '\\OauthAccessTokenRequestRefresh';
        $this->assertSame('\\' . OauthAccessTokenRequestRefresh::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "OauthAccessTokenRequestRefresh" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "grantType"
     */
    public function testPropertyGrantType()
    {
        $this->markTestIncomplete(
            'Test of "grantType" property in "OauthAccessTokenRequestRefresh" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "refreshToken"
     */
    public function testPropertyRefreshToken()
    {
        $this->markTestIncomplete(
            'Test of "refreshToken" property in "OauthAccessTokenRequestRefresh" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "scope"
     */
    public function testPropertyScope()
    {
        $this->markTestIncomplete(
            'Test of "scope" property in "OauthAccessTokenRequestRefresh" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = OauthAccessTokenRequestRefresh::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
