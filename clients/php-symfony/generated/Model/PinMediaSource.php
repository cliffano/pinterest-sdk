<?php
/**
 * PinMediaSource
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
 * Class representing the PinMediaSource model.
 *
 * Pin media source.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class PinMediaSource 
{
        /**
     * @var string
     * @SerializedName("source_type")
     * @Assert\NotNull()
     * @Assert\Choice({ "video_id" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $sourceType;

    /**
     * @var string
     * @SerializedName("content_type")
     * @Assert\NotNull()
     * @Assert\Choice({ "image/jpeg", "image/png" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $contentType;

    /**
     * @var string
     * @SerializedName("data")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/[a-zA-Z0-9+/&#x3D;]+/")
     */
    protected $data;

    /**
     * @var string
     * @SerializedName("url")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $url;

    /**
     * @var string
     * @SerializedName("cover_image_url")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $coverImageUrl;

    /**
     * @var string
     * @SerializedName("media_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $mediaId;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->sourceType = isset($data['sourceType']) ? $data['sourceType'] : null;
        $this->contentType = isset($data['contentType']) ? $data['contentType'] : null;
        $this->data = isset($data['data']) ? $data['data'] : null;
        $this->url = isset($data['url']) ? $data['url'] : null;
        $this->coverImageUrl = isset($data['coverImageUrl']) ? $data['coverImageUrl'] : null;
        $this->mediaId = isset($data['mediaId']) ? $data['mediaId'] : null;
    }

    /**
     * Gets sourceType.
     *
     * @return string
     */
    public function getSourceType()
    {
        return $this->sourceType;
    }

    /**
     * Sets sourceType.
     *
     * @param string $sourceType
     *
     * @return $this
     */
    public function setSourceType($sourceType)
    {
        $this->sourceType = $sourceType;

        return $this;
    }

    /**
     * Gets contentType.
     *
     * @return string
     */
    public function getContentType()
    {
        return $this->contentType;
    }

    /**
     * Sets contentType.
     *
     * @param string $contentType
     *
     * @return $this
     */
    public function setContentType($contentType)
    {
        $this->contentType = $contentType;

        return $this;
    }

    /**
     * Gets data.
     *
     * @return string
     */
    public function getData()
    {
        return $this->data;
    }

    /**
     * Sets data.
     *
     * @param string $data
     *
     * @return $this
     */
    public function setData($data)
    {
        $this->data = $data;

        return $this;
    }

    /**
     * Gets url.
     *
     * @return string
     */
    public function getUrl()
    {
        return $this->url;
    }

    /**
     * Sets url.
     *
     * @param string $url
     *
     * @return $this
     */
    public function setUrl($url)
    {
        $this->url = $url;

        return $this;
    }

    /**
     * Gets coverImageUrl.
     *
     * @return string
     */
    public function getCoverImageUrl()
    {
        return $this->coverImageUrl;
    }

    /**
     * Sets coverImageUrl.
     *
     * @param string $coverImageUrl
     *
     * @return $this
     */
    public function setCoverImageUrl($coverImageUrl)
    {
        $this->coverImageUrl = $coverImageUrl;

        return $this;
    }

    /**
     * Gets mediaId.
     *
     * @return string
     */
    public function getMediaId()
    {
        return $this->mediaId;
    }

    /**
     * Sets mediaId.
     *
     * @param string $mediaId
     *
     * @return $this
     */
    public function setMediaId($mediaId)
    {
        $this->mediaId = $mediaId;

        return $this;
    }
}

