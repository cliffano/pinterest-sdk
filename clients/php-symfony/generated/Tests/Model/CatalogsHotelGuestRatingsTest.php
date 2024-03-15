<?php
/**
 * CatalogsHotelGuestRatingsTest
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

use OpenAPI\Server\Model\CatalogsHotelGuestRatings;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * CatalogsHotelGuestRatingsTest Class Doc Comment
 *
 * @category    Class
 * @description If specified, you must provide all properties
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\CatalogsHotelGuestRatings
 */
class CatalogsHotelGuestRatingsTest extends TestCase
{
    protected CatalogsHotelGuestRatings|MockObject $object;

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
        $this->object = $this->getMockBuilder(CatalogsHotelGuestRatings::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(CatalogsHotelGuestRatings::class));
        $this->assertInstanceOf(CatalogsHotelGuestRatings::class, $this->object);
    }

    /**
     * Test attribute "score"
     *
     * @group unit
     * @small
     */
    public function testPropertyScore(): void
    {
        $this->markTestSkipped('Test for property score not implemented');
    }

    /**
     * Test attribute "numberOfReviewers"
     *
     * @group unit
     * @small
     */
    public function testPropertyNumberOfReviewers(): void
    {
        $this->markTestSkipped('Test for property numberOfReviewers not implemented');
    }

    /**
     * Test attribute "maxScore"
     *
     * @group unit
     * @small
     */
    public function testPropertyMaxScore(): void
    {
        $this->markTestSkipped('Test for property maxScore not implemented');
    }

    /**
     * Test attribute "ratingSystem"
     *
     * @group unit
     * @small
     */
    public function testPropertyRatingSystem(): void
    {
        $this->markTestSkipped('Test for property ratingSystem not implemented');
    }
}
