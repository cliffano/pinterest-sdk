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
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\CatalogsFeedValidationWarnings;

/**
 * CatalogsFeedValidationWarningsTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\CatalogsFeedValidationWarnings
 */
class CatalogsFeedValidationWarningsTest extends TestCase
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
     * Test "CatalogsFeedValidationWarnings"
     */
    public function testCatalogsFeedValidationWarnings()
    {
        $testCatalogsFeedValidationWarnings = new CatalogsFeedValidationWarnings();
        $namespacedClassname = CatalogsFeedValidationWarnings::getModelsNamespace() . '\\CatalogsFeedValidationWarnings';
        $this->assertSame('\\' . CatalogsFeedValidationWarnings::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "titleLengthTooLong"
     */
    public function testPropertyTitleLengthTooLong()
    {
        $this->markTestIncomplete(
            'Test of "titleLengthTooLong" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "descriptionLengthTooLong"
     */
    public function testPropertyDescriptionLengthTooLong()
    {
        $this->markTestIncomplete(
            'Test of "descriptionLengthTooLong" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "genderInvalid"
     */
    public function testPropertyGenderInvalid()
    {
        $this->markTestIncomplete(
            'Test of "genderInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "ageGroupInvalid"
     */
    public function testPropertyAgeGroupInvalid()
    {
        $this->markTestIncomplete(
            'Test of "ageGroupInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "sizeTypeInvalid"
     */
    public function testPropertySizeTypeInvalid()
    {
        $this->markTestIncomplete(
            'Test of "sizeTypeInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "linkFormatWarning"
     */
    public function testPropertyLinkFormatWarning()
    {
        $this->markTestIncomplete(
            'Test of "linkFormatWarning" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "duplicateProducts"
     */
    public function testPropertyDuplicateProducts()
    {
        $this->markTestIncomplete(
            'Test of "duplicateProducts" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "duplicateLinks"
     */
    public function testPropertyDuplicateLinks()
    {
        $this->markTestIncomplete(
            'Test of "duplicateLinks" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "salesPriceInvalid"
     */
    public function testPropertySalesPriceInvalid()
    {
        $this->markTestIncomplete(
            'Test of "salesPriceInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "productCategoryDepthWarning"
     */
    public function testPropertyProductCategoryDepthWarning()
    {
        $this->markTestIncomplete(
            'Test of "productCategoryDepthWarning" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adwordsSameAsLink"
     */
    public function testPropertyAdwordsSameAsLink()
    {
        $this->markTestIncomplete(
            'Test of "adwordsSameAsLink" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "duplicateHeaders"
     */
    public function testPropertyDuplicateHeaders()
    {
        $this->markTestIncomplete(
            'Test of "duplicateHeaders" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "fetchSameSignature"
     */
    public function testPropertyFetchSameSignature()
    {
        $this->markTestIncomplete(
            'Test of "fetchSameSignature" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "adwordsFormatWarning"
     */
    public function testPropertyAdwordsFormatWarning()
    {
        $this->markTestIncomplete(
            'Test of "adwordsFormatWarning" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "additionalImageLinkWarning"
     */
    public function testPropertyAdditionalImageLinkWarning()
    {
        $this->markTestIncomplete(
            'Test of "additionalImageLinkWarning" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "imageLinkWarning"
     */
    public function testPropertyImageLinkWarning()
    {
        $this->markTestIncomplete(
            'Test of "imageLinkWarning" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "shippingInvalid"
     */
    public function testPropertyShippingInvalid()
    {
        $this->markTestIncomplete(
            'Test of "shippingInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "taxInvalid"
     */
    public function testPropertyTaxInvalid()
    {
        $this->markTestIncomplete(
            'Test of "taxInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "shippingWeightInvalid"
     */
    public function testPropertyShippingWeightInvalid()
    {
        $this->markTestIncomplete(
            'Test of "shippingWeightInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "expirationDateInvalid"
     */
    public function testPropertyExpirationDateInvalid()
    {
        $this->markTestIncomplete(
            'Test of "expirationDateInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "availabilityDateInvalid"
     */
    public function testPropertyAvailabilityDateInvalid()
    {
        $this->markTestIncomplete(
            'Test of "availabilityDateInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "saleDateInvalid"
     */
    public function testPropertySaleDateInvalid()
    {
        $this->markTestIncomplete(
            'Test of "saleDateInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "weightUnitInvalid"
     */
    public function testPropertyWeightUnitInvalid()
    {
        $this->markTestIncomplete(
            'Test of "weightUnitInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "isBundleInvalid"
     */
    public function testPropertyIsBundleInvalid()
    {
        $this->markTestIncomplete(
            'Test of "isBundleInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "updatedTimeInvalid"
     */
    public function testPropertyUpdatedTimeInvalid()
    {
        $this->markTestIncomplete(
            'Test of "updatedTimeInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "customLabelLengthTooLong"
     */
    public function testPropertyCustomLabelLengthTooLong()
    {
        $this->markTestIncomplete(
            'Test of "customLabelLengthTooLong" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "productTypeLengthTooLong"
     */
    public function testPropertyProductTypeLengthTooLong()
    {
        $this->markTestIncomplete(
            'Test of "productTypeLengthTooLong" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "tooManyAdditionalImageLinks"
     */
    public function testPropertyTooManyAdditionalImageLinks()
    {
        $this->markTestIncomplete(
            'Test of "tooManyAdditionalImageLinks" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "multipackInvalid"
     */
    public function testPropertyMultipackInvalid()
    {
        $this->markTestIncomplete(
            'Test of "multipackInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "indexedProductCountLargeDelta"
     */
    public function testPropertyIndexedProductCountLargeDelta()
    {
        $this->markTestIncomplete(
            'Test of "indexedProductCountLargeDelta" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "itemAdditionalImageDownloadFailure"
     */
    public function testPropertyItemAdditionalImageDownloadFailure()
    {
        $this->markTestIncomplete(
            'Test of "itemAdditionalImageDownloadFailure" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "optionalProductCategoryMissing"
     */
    public function testPropertyOptionalProductCategoryMissing()
    {
        $this->markTestIncomplete(
            'Test of "optionalProductCategoryMissing" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "optionalProductCategoryInvalid"
     */
    public function testPropertyOptionalProductCategoryInvalid()
    {
        $this->markTestIncomplete(
            'Test of "optionalProductCategoryInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "optionalConditionMissing"
     */
    public function testPropertyOptionalConditionMissing()
    {
        $this->markTestIncomplete(
            'Test of "optionalConditionMissing" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "optionalConditionInvalid"
     */
    public function testPropertyOptionalConditionInvalid()
    {
        $this->markTestIncomplete(
            'Test of "optionalConditionInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "iosDeepLinkInvalid"
     */
    public function testPropertyIosDeepLinkInvalid()
    {
        $this->markTestIncomplete(
            'Test of "iosDeepLinkInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "androidDeepLinkInvalid"
     */
    public function testPropertyAndroidDeepLinkInvalid()
    {
        $this->markTestIncomplete(
            'Test of "androidDeepLinkInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "availabilityNormalized"
     */
    public function testPropertyAvailabilityNormalized()
    {
        $this->markTestIncomplete(
            'Test of "availabilityNormalized" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "conditionNormalized"
     */
    public function testPropertyConditionNormalized()
    {
        $this->markTestIncomplete(
            'Test of "conditionNormalized" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "genderNormalized"
     */
    public function testPropertyGenderNormalized()
    {
        $this->markTestIncomplete(
            'Test of "genderNormalized" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "sizeTypeNormalized"
     */
    public function testPropertySizeTypeNormalized()
    {
        $this->markTestIncomplete(
            'Test of "sizeTypeNormalized" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "ageGroupNormalized"
     */
    public function testPropertyAgeGroupNormalized()
    {
        $this->markTestIncomplete(
            'Test of "ageGroupNormalized" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "utmSourceAutoCorrected"
     */
    public function testPropertyUtmSourceAutoCorrected()
    {
        $this->markTestIncomplete(
            'Test of "utmSourceAutoCorrected" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "countryDoesNotMapToCurrency"
     */
    public function testPropertyCountryDoesNotMapToCurrency()
    {
        $this->markTestIncomplete(
            'Test of "countryDoesNotMapToCurrency" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "minAdPriceInvalid"
     */
    public function testPropertyMinAdPriceInvalid()
    {
        $this->markTestIncomplete(
            'Test of "minAdPriceInvalid" property in "CatalogsFeedValidationWarnings" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = CatalogsFeedValidationWarnings::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
