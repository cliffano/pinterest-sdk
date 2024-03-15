<?php
/**
 * LeadFormsApiInterfaceTest
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
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
 * Please update the test case below to test the endpoint.
 */

namespace OpenAPI\Server\Tests\Api;

use Symfony\Bundle\FrameworkBundle\KernelBrowser;
use Symfony\Bundle\FrameworkBundle\Test\WebTestCase;

/**
 * LeadFormsApiInterfaceTest Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Api\LeadFormsApiInterface
 */
class LeadFormsApiInterfaceTest extends WebTestCase
{
    private static ?KernelBrowser $client = null;

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
        if (null === self::$client) {
            self::$client = static::createClient();
        }
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown(): void
    {
        static::ensureKernelShutdown();
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass(): void
    {
    }

    /**
     * Test case for leadFormGet
     *
     * Get lead form by id.
     *
     */
    public function testLeadFormGet(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);
        $pattern = '{leadFormId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for leadFormGet not implemented');
    }

    /**
     * Test case for leadFormTestCreate
     *
     * Create lead form test data.
     *
     */
    public function testLeadFormTestCreate(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}/test';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);
        $pattern = '{leadFormId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
        $this->markTestSkipped('Test for leadFormTestCreate not implemented');
    }

    /**
     * Test case for leadFormsList
     *
     * Get lead forms.
     *
     */
    public function testLeadFormsList(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/lead_forms';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for leadFormsList not implemented');
    }

    /**
     * @param string $regexp
     * @return mixed
     */
    protected function genTestData(string $regexp)
    {
        $grammar  = new \Hoa\File\Read('hoa://Library/Regex/Grammar.pp');
        $compiler = \Hoa\Compiler\Llk\Llk::load($grammar);
        $ast      = $compiler->parse($regexp);
        $generator = new \Hoa\Regex\Visitor\Isotropic(new \Hoa\Math\Sampler\Random());

        return $generator->visit($ast);
    }
}
