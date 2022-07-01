<?php
/**
 * MediaUploadAllOf
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
 * Contact: blah@cliffano.com
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
 * Class representing the MediaUploadAllOf model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class MediaUploadAllOf 
{
        /**
     * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
     *
     * @var string|null
     * @SerializedName("media_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $mediaId;

    /**
     * @var MediaUploadType|null
     * @SerializedName("media_type")
     * @Assert\Type("MediaUploadType")
     * @Type("MediaUploadType")
     */
    protected $mediaType;

    /**
     * The URL where you will POST your media file.
     *
     * @var string|null
     * @SerializedName("upload_url")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $uploadUrl;

    /**
     * @var OpenAPI\Server\Model\MediaUploadAllOfUploadParameters|null
     * @SerializedName("upload_parameters")
     * @Assert\Type("OpenAPI\Server\Model\MediaUploadAllOfUploadParameters")
     * @Type("OpenAPI\Server\Model\MediaUploadAllOfUploadParameters")
     */
    protected $uploadParameters;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->mediaId = isset($data['mediaId']) ? $data['mediaId'] : null;
        $this->mediaType = isset($data['mediaType']) ? $data['mediaType'] : null;
        $this->uploadUrl = isset($data['uploadUrl']) ? $data['uploadUrl'] : null;
        $this->uploadParameters = isset($data['uploadParameters']) ? $data['uploadParameters'] : null;
    }

    /**
     * Gets mediaId.
     *
     * @return string|null
     */
    public function getMediaId()
    {
        return $this->mediaId;
    }

    /**
     * Sets mediaId.
     *
     * @param string|null $mediaId  Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
     *
     * @return $this
     */
    public function setMediaId($mediaId = null)
    {
        $this->mediaId = $mediaId;

        return $this;
    }

    /**
     * Gets mediaType.
     *
     * @return MediaUploadType|null
     */
    public function getMediaType()
    {
        return $this->mediaType;
    }

    /**
     * Sets mediaType.
     *
     * @param MediaUploadType|null $mediaType
     *
     * @return $this
     */
    public function setMediaType($mediaType = null)
    {
        $this->mediaType = $mediaType;

        return $this;
    }

    /**
     * Gets uploadUrl.
     *
     * @return string|null
     */
    public function getUploadUrl()
    {
        return $this->uploadUrl;
    }

    /**
     * Sets uploadUrl.
     *
     * @param string|null $uploadUrl  The URL where you will POST your media file.
     *
     * @return $this
     */
    public function setUploadUrl($uploadUrl = null)
    {
        $this->uploadUrl = $uploadUrl;

        return $this;
    }

    /**
     * Gets uploadParameters.
     *
     * @return OpenAPI\Server\Model\MediaUploadAllOfUploadParameters|null
     */
    public function getUploadParameters(): ?MediaUploadAllOfUploadParameters
    {
        return $this->uploadParameters;
    }

    /**
     * Sets uploadParameters.
     *
     * @param OpenAPI\Server\Model\MediaUploadAllOfUploadParameters|null $uploadParameters
     *
     * @return $this
     */
    public function setUploadParameters(MediaUploadAllOfUploadParameters $uploadParameters = null)
    {
        $this->uploadParameters = $uploadParameters;

        return $this;
    }
}


