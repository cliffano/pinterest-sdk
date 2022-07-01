<?php
/**
 * Paginated
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
 * Class representing the Paginated model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class Paginated 
{
        /**
     * @var array[]
     * @SerializedName("items")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("array")
     * })
     * @Type("array<array>")
     */
    protected $items;

    /**
     * @var string|null
     * @SerializedName("bookmark")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $bookmark;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->items = isset($data['items']) ? $data['items'] : null;
        $this->bookmark = isset($data['bookmark']) ? $data['bookmark'] : null;
    }

    /**
     * Gets items.
     *
     * @return array[]
     */
    public function getItems(): array
    {
        return $this->items;
    }

    /**
     * Sets items.
     *
     * @param array[] $items
     *
     * @return $this
     */
    public function setItems(array $items)
    {
        $this->items = $items;

        return $this;
    }

    /**
     * Gets bookmark.
     *
     * @return string|null
     */
    public function getBookmark()
    {
        return $this->bookmark;
    }

    /**
     * Sets bookmark.
     *
     * @param string|null $bookmark
     *
     * @return $this
     */
    public function setBookmark($bookmark = null)
    {
        $this->bookmark = $bookmark;

        return $this;
    }
}


