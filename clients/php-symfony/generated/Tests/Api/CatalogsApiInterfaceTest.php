<?php
/**
 * CatalogsApiInterfaceTest
 * PHP version 7.1.3
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
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the endpoint.
 */

namespace OpenAPI\Server\Tests\Api;

use OpenAPI\Server\Configuration;
use OpenAPI\Server\ApiClient;
use OpenAPI\Server\ApiException;
use OpenAPI\Server\ObjectSerializer;
use Symfony\Bundle\FrameworkBundle\Test\WebTestCase;

/**
 * CatalogsApiInterfaceTest Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Tests\Api
 * @author   openapi-generator contributors
 * @link     https://github.com/openapitools/openapi-generator
 */
class CatalogsApiInterfaceTest extends WebTestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass()
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp()
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown()
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass()
    {
    }

    /**
     * Test case for catalogsProductGroupsCreate
     *
     * Create product group.
     *
     */
    public function testCatalogsProductGroupsCreate()
    {
        $client = static::createClient();

        $path = '/catalogs/product_groups';

        $crawler = $client->request('POST', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
    }

    /**
     * Test case for catalogsProductGroupsDelete
     *
     * Delete product group.
     *
     */
    public function testCatalogsProductGroupsDelete()
    {
        $client = static::createClient();

        $path = '/catalogs/product_groups/{product_group_id}';
        $pattern = '{productGroupId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('DELETE', $path);
    }

    /**
     * Test case for catalogsProductGroupsList
     *
     * Get product groups list.
     *
     */
    public function testCatalogsProductGroupsList()
    {
        $client = static::createClient();

        $path = '/catalogs/product_groups';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for catalogsProductGroupsUpdate
     *
     * Update product group.
     *
     */
    public function testCatalogsProductGroupsUpdate()
    {
        $client = static::createClient();

        $path = '/catalogs/product_groups/{product_group_id}';
        $pattern = '{productGroupId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('PATCH', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
    }

    /**
     * Test case for feedProcessingResultsList
     *
     * List processing results for a given feed.
     *
     */
    public function testFeedProcessingResultsList()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds/{feed_id}/processing_results';
        $pattern = '{feedId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for feedsCreate
     *
     * Create feed.
     *
     */
    public function testFeedsCreate()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds';

        $crawler = $client->request('POST', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
    }

    /**
     * Test case for feedsDelete
     *
     * Delete feed.
     *
     */
    public function testFeedsDelete()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds/{feed_id}';
        $pattern = '{feedId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('DELETE', $path);
    }

    /**
     * Test case for feedsGet
     *
     * Get feed.
     *
     */
    public function testFeedsGet()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds/{feed_id}';
        $pattern = '{feedId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for feedsList
     *
     * List feeds.
     *
     */
    public function testFeedsList()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds';

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for feedsUpdate
     *
     * Update feed.
     *
     */
    public function testFeedsUpdate()
    {
        $client = static::createClient();

        $path = '/catalogs/feeds/{feed_id}';
        $pattern = '{feedId}';
        $data = $this->genTestData('^\\d+$');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('PATCH', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
    }

    /**
     * Test case for itemsBatchGet
     *
     * Get catalogs items batch.
     *
     */
    public function testItemsBatchGet()
    {
        $client = static::createClient();

        $path = '/catalogs/items/batch/{batch_id}';
        $pattern = '{batchId}';
        $data = $this->genTestData('[a-z0-9]+');
        $path = str_replace($pattern, $data, $path);

        $crawler = $client->request('GET', $path);
    }

    /**
     * Test case for itemsBatchPost
     *
     * Perform an operation on an item batch.
     *
     */
    public function testItemsBatchPost()
    {
        $client = static::createClient();

        $path = '/catalogs/items/batch';

        $crawler = $client->request('POST', $path, [], [], ['CONTENT_TYPE' => 'application/json']);
    }

    /**
     * Test case for itemsGet
     *
     * Get catalogs items.
     *
     */
    public function testItemsGet()
    {
        $client = static::createClient();

        $path = '/catalogs/items';

        $crawler = $client->request('GET', $path);
    }

    protected function genTestData($regexp)
    {
        $grammar  = new \Hoa\File\Read('hoa://Library/Regex/Grammar.pp');
        $compiler = \Hoa\Compiler\Llk\Llk::load($grammar);
        $ast      = $compiler->parse($regexp);
        $generator = new \Hoa\Regex\Visitor\Isotropic(new \Hoa\Math\Sampler\Random());

        return $generator->visit($ast);
    }
}
