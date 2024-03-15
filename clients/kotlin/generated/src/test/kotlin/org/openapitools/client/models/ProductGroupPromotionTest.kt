/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.models.ProductGroupPromotion
import org.openapitools.client.models.CreativeType
import org.openapitools.client.models.EntityStatus
import org.openapitools.client.models.GridClickType

class ProductGroupPromotionTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of ProductGroupPromotion
        //val modelInstance = ProductGroupPromotion()

        // to test the property `id` - ID of the product group promotion.
        should("test id") {
            // uncomment below to test the property
            //modelInstance.id shouldBe ("TODO")
        }

        // to test the property `adGroupId` - ID of the ad group the product group belongs to.
        should("test adGroupId") {
            // uncomment below to test the property
            //modelInstance.adGroupId shouldBe ("TODO")
        }

        // to test the property `bidInMicroCurrency` - The bid in micro currency.
        should("test bidInMicroCurrency") {
            // uncomment below to test the property
            //modelInstance.bidInMicroCurrency shouldBe ("TODO")
        }

        // to test the property `included` - True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads.
        should("test included") {
            // uncomment below to test the property
            //modelInstance.included shouldBe ("TODO")
        }

        // to test the property `definition` - The full product group definition path
        should("test definition") {
            // uncomment below to test the property
            //modelInstance.definition shouldBe ("TODO")
        }

        // to test the property `relativeDefinition` - The definition of the product group, relative to its parent - an attribute name/value pair
        should("test relativeDefinition") {
            // uncomment below to test the property
            //modelInstance.relativeDefinition shouldBe ("TODO")
        }

        // to test the property `parentId` - The parent Product Group ID of this Product Group
        should("test parentId") {
            // uncomment below to test the property
            //modelInstance.parentId shouldBe ("TODO")
        }

        // to test the property `slideshowCollectionsTitle` - Slideshow Collections Title
        should("test slideshowCollectionsTitle") {
            // uncomment below to test the property
            //modelInstance.slideshowCollectionsTitle shouldBe ("TODO")
        }

        // to test the property `slideshowCollectionsDescription` - Slideshow Collections Description
        should("test slideshowCollectionsDescription") {
            // uncomment below to test the property
            //modelInstance.slideshowCollectionsDescription shouldBe ("TODO")
        }

        // to test the property `isMdl` - If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
        should("test isMdl") {
            // uncomment below to test the property
            //modelInstance.isMdl shouldBe ("TODO")
        }

        // to test the property `status`
        should("test status") {
            // uncomment below to test the property
            //modelInstance.status shouldBe ("TODO")
        }

        // to test the property `trackingUrl` - Tracking template for proudct group promotions. 4000 limit
        should("test trackingUrl") {
            // uncomment below to test the property
            //modelInstance.trackingUrl shouldBe ("TODO")
        }

        // to test the property `catalogProductGroupId` - ID of the catalogs product group that this product group promotion references
        should("test catalogProductGroupId") {
            // uncomment below to test the property
            //modelInstance.catalogProductGroupId shouldBe ("TODO")
        }

        // to test the property `catalogProductGroupName` - Catalogs product group name
        should("test catalogProductGroupName") {
            // uncomment below to test the property
            //modelInstance.catalogProductGroupName shouldBe ("TODO")
        }

        // to test the property `creativeType`
        should("test creativeType") {
            // uncomment below to test the property
            //modelInstance.creativeType shouldBe ("TODO")
        }

        // to test the property `collectionsHeroPinId` - Hero Pin ID if this PG is promoted as a Collection
        should("test collectionsHeroPinId") {
            // uncomment below to test the property
            //modelInstance.collectionsHeroPinId shouldBe ("TODO")
        }

        // to test the property `collectionsHeroDestinationUrl` - Collections Hero Destination Url
        should("test collectionsHeroDestinationUrl") {
            // uncomment below to test the property
            //modelInstance.collectionsHeroDestinationUrl shouldBe ("TODO")
        }

        // to test the property `gridClickType`
        should("test gridClickType") {
            // uncomment below to test the property
            //modelInstance.gridClickType shouldBe ("TODO")
        }

    }
}