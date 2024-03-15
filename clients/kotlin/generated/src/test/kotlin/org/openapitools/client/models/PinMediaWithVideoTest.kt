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

import org.openapitools.client.models.PinMediaWithVideo
import org.openapitools.client.models.ImageMetadataImages
import org.openapitools.client.models.PinMedia

class PinMediaWithVideoTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of PinMediaWithVideo
        //val modelInstance = PinMediaWithVideo()

        // to test the property `images`
        should("test images") {
            // uncomment below to test the property
            //modelInstance.images shouldBe ("TODO")
        }

        // to test the property `coverImageUrl`
        should("test coverImageUrl") {
            // uncomment below to test the property
            //modelInstance.coverImageUrl shouldBe ("TODO")
        }

        // to test the property `videoUrl` - Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
        should("test videoUrl") {
            // uncomment below to test the property
            //modelInstance.videoUrl shouldBe ("TODO")
        }

        // to test the property `duration` - Duration (in milliseconds)
        should("test duration") {
            // uncomment below to test the property
            //modelInstance.duration shouldBe ("TODO")
        }

        // to test the property `height` - Height (in pixels)
        should("test height") {
            // uncomment below to test the property
            //modelInstance.height shouldBe ("TODO")
        }

        // to test the property `width` - Width (in pixels)
        should("test width") {
            // uncomment below to test the property
            //modelInstance.width shouldBe ("TODO")
        }

    }
}
