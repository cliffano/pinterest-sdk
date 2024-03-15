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

import org.openapitools.client.models.MediaUpload
import org.openapitools.client.models.MediaUploadAllOfUploadParameters
import org.openapitools.client.models.MediaUploadType

class MediaUploadTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of MediaUpload
        //val modelInstance = MediaUpload()

        // to test the property `mediaId` - Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
        should("test mediaId") {
            // uncomment below to test the property
            //modelInstance.mediaId shouldBe ("TODO")
        }

        // to test the property `mediaType`
        should("test mediaType") {
            // uncomment below to test the property
            //modelInstance.mediaType shouldBe ("TODO")
        }

        // to test the property `uploadUrl` - The URL where you will POST your media file.
        should("test uploadUrl") {
            // uncomment below to test the property
            //modelInstance.uploadUrl shouldBe ("TODO")
        }

        // to test the property `uploadParameters`
        should("test uploadParameters") {
            // uncomment below to test the property
            //modelInstance.uploadParameters shouldBe ("TODO")
        }

    }
}
