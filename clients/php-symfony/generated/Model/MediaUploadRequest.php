<?php
/**
 * MediaUploadRequest
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
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
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the MediaUploadRequest model.
 *
 * Media upload request
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class MediaUploadRequest 
{
        /**
     * @var MediaUploadType
     * @SerializedName("media_type")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("MediaUploadType")
     * @Type("MediaUploadType")
     */
    protected $mediaType;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->mediaType = isset($data['mediaType']) ? $data['mediaType'] : null;
    }

    /**
     * Gets mediaType.
     *
     * @return MediaUploadType
     */
    public function getMediaType()
    {
        return $this->mediaType;
    }

    /**
     * Sets mediaType.
     *
     * @param MediaUploadType $mediaType
     *
     * @return $this
     */
    public function setMediaType($mediaType)
    {
        $this->mediaType = $mediaType;

        return $this;
    }
}


