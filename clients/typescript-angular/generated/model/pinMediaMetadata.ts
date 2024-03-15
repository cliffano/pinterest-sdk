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
import { ImageMetadataImages } from './imageMetadataImages';
import { ImageMetadata } from './imageMetadata';
import { VideoMetadata } from './videoMetadata';


export interface PinMediaMetadata { 
    item_type?: string;
    title?: string | null;
    description?: string | null;
    link?: string | null;
    images?: ImageMetadataImages;
    cover_image_url?: string;
    /**
     * Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
     */
    video_url?: string | null;
    /**
     * Duration (in milliseconds)
     */
    duration?: number;
    /**
     * Height (in pixels)
     */
    height?: number;
    /**
     * Width (in pixels)
     */
    width?: number;
}

