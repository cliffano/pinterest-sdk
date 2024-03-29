<?php
/**
 * AdCommonQuizPinDataTest
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

use OpenAPI\Server\Model\AdCommonQuizPinData;
use PHPUnit\Framework\MockObject\MockObject;
use PHPUnit\Framework\TestCase;

/**
 * AdCommonQuizPinDataTest Class Doc Comment
 *
 * @category    Class
 * @description Before creating a quiz ad, you must create an organic Pin using POST/Create Pin for each result in the quiz. Quiz ads cannot be saved by a Pinner. Quiz ad results can be saved.
 * @package     OpenAPI\Server\Tests\Model
 * @author      openapi-generator contributors
 * @link        https://github.com/openapitools/openapi-generator
 * @coversDefaultClass \OpenAPI\Server\Model\AdCommonQuizPinData
 */
class AdCommonQuizPinDataTest extends TestCase
{
    protected AdCommonQuizPinData|MockObject $object;

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
        $this->object = $this->getMockBuilder(AdCommonQuizPinData::class)->getMockForAbstractClass();
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
        $this->assertTrue(class_exists(AdCommonQuizPinData::class));
        $this->assertInstanceOf(AdCommonQuizPinData::class, $this->object);
    }

    /**
     * Test attribute "questions"
     *
     * @group unit
     * @small
     */
    public function testPropertyQuestions(): void
    {
        $this->markTestSkipped('Test for property questions not implemented');
    }

    /**
     * Test attribute "results"
     *
     * @group unit
     * @small
     */
    public function testPropertyResults(): void
    {
        $this->markTestSkipped('Test for property results not implemented');
    }
}
