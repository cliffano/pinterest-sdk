<?php
/**
 * CampaignsApiInterfaceTest
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
 * CampaignsApiInterfaceTest Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Api\CampaignsApiInterface
 */
class CampaignsApiInterfaceTest extends WebTestCase
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
     * Test case for campaignTargetingAnalyticsGet
     *
     * Get targeting analytics for campaigns.
     *
     */
    public function testCampaignTargetingAnalyticsGet(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns/targeting_analytics';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for campaignTargetingAnalyticsGet not implemented');
    }

    /**
     * Test case for campaignsAnalytics
     *
     * Get campaign analytics.
     *
     */
    public function testCampaignsAnalytics(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns/analytics';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for campaignsAnalytics not implemented');
    }

    /**
     * Test case for campaignsCreate
     *
     * Create campaigns.
     *
     */
    public function testCampaignsCreate(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('POST', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
        $this->markTestSkipped('Test for campaignsCreate not implemented');
    }

    /**
     * Test case for campaignsGet
     *
     * Get campaign.
     *
     */
    public function testCampaignsGet(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns/{campaign_id}';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);
        $pattern = '{campaignId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for campaignsGet not implemented');
    }

    /**
     * Test case for campaignsList
     *
     * List campaigns.
     *
     */
    public function testCampaignsList(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
        $this->markTestSkipped('Test for campaignsList not implemented');
    }

    /**
     * Test case for campaignsUpdate
     *
     * Update campaigns.
     *
     */
    public function testCampaignsUpdate(): void
    {
        $client = self::$client;

        $path = '/ad_accounts/{ad_account_id}/campaigns';
        $pattern = '{adAccountId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('PATCH', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
        $this->markTestSkipped('Test for campaignsUpdate not implemented');
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