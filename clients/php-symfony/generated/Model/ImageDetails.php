<?php
/**
 * ImageDetails
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
 * Class representing the ImageDetails model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ImageDetails 
{
        /**
     * @var int
     * @SerializedName("width")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     * @Assert\GreaterThanOrEqual(100)
     */
    protected $width;

    /**
     * @var int
     * @SerializedName("height")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     * @Assert\GreaterThanOrEqual(100)
     */
    protected $height;

    /**
     * @var string
     * @SerializedName("url")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $url;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->width = isset($data['width']) ? $data['width'] : null;
        $this->height = isset($data['height']) ? $data['height'] : null;
        $this->url = isset($data['url']) ? $data['url'] : null;
    }

    /**
     * Gets width.
     *
     * @return int
     */
    public function getWidth()
    {
        return $this->width;
    }

    /**
     * Sets width.
     *
     * @param int $width
     *
     * @return $this
     */
    public function setWidth($width)
    {
        $this->width = $width;

        return $this;
    }

    /**
     * Gets height.
     *
     * @return int
     */
    public function getHeight()
    {
        return $this->height;
    }

    /**
     * Sets height.
     *
     * @param int $height
     *
     * @return $this
     */
    public function setHeight($height)
    {
        $this->height = $height;

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
}

