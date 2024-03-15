// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import {
    PinMediaSourceImageBase64,
    PinMediaSourceImageBase64FromJSON,
    PinMediaSourceImageBase64ToJSON,
    PinMediaSourceImageURL,
    PinMediaSourceImageURLFromJSON,
    PinMediaSourceImageURLToJSON,
    PinMediaSourceImagesBase64,
    PinMediaSourceImagesBase64FromJSON,
    PinMediaSourceImagesBase64ToJSON,
    PinMediaSourceImagesURL,
    PinMediaSourceImagesURLFromJSON,
    PinMediaSourceImagesURLToJSON,
    PinMediaSourcePinURL,
    PinMediaSourcePinURLFromJSON,
    PinMediaSourcePinURLToJSON,
    PinMediaSourceVideoID,
    PinMediaSourceVideoIDFromJSON,
    PinMediaSourceVideoIDToJSON,
} from './';

/**
 * @type PinMediaSource
 * Pin media source.
 * @export
 */
export type PinMediaSource = PinMediaSourceImageBase64 | PinMediaSourceImageURL | PinMediaSourceImagesBase64 | PinMediaSourceImagesURL | PinMediaSourcePinURL | PinMediaSourceVideoID;


export function PinMediaSourceFromJSON(json: any): PinMediaSource {
  switch (json.sourceType) {
  case 'image_base64': return PinMediaSourceImageBase64FromJSON(json);
  case 'image_url': return PinMediaSourceImageURLFromJSON(json);
  case 'multiple_image_base64': return PinMediaSourceImagesBase64FromJSON(json);
  case 'multiple_image_urls': return PinMediaSourceImagesURLFromJSON(json);
  case 'pin_url': return PinMediaSourcePinURLFromJSON(json);
  case 'video_id': return PinMediaSourceVideoIDFromJSON(json);
  default: throw new Error("Unexpected sourceType value.");
  }
}

export function PinMediaSourceToJSON(value?: PinMediaSource): any {
    if (value === undefined) {
        return undefined;
    }

    switch (value.sourceType) {
    case 'image_base64': return PinMediaSourceImageBase64ToJSON(<PinMediaSourceImageBase64>value);
    case 'image_url': return PinMediaSourceImageURLToJSON(<PinMediaSourceImageURL>value);
    case 'multiple_image_base64': return PinMediaSourceImagesBase64ToJSON(<PinMediaSourceImagesBase64>value);
    case 'multiple_image_urls': return PinMediaSourceImagesURLToJSON(<PinMediaSourceImagesURL>value);
    case 'pin_url': return PinMediaSourcePinURLToJSON(<PinMediaSourcePinURL>value);
    case 'video_id': return PinMediaSourceVideoIDToJSON(<PinMediaSourceVideoID>value);
    default: throw new Error("Unexpected sourceType value.");
    }
}

