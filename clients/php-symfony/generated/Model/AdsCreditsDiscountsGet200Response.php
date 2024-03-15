<?php
/**
 * AdsCreditsDiscountsGet200Response
 *
 * PHP version 8.1.1
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
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the AdsCreditsDiscountsGet200Response model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdsCreditsDiscountsGet200Response 
{
        /**
     * @var AdsCreditDiscountsResponse[]|null
     * @SerializedName("items")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\AdsCreditDiscountsResponse")
     * })
     * @Type("array<OpenAPI\Server\Model\AdsCreditDiscountsResponse>")
     */
    protected ?array $items = null;

    /**
     * @var string|null
     * @SerializedName("bookmark")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $bookmark = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->items = array_key_exists('items', $data) ? $data['items'] : $this->items;
            $this->bookmark = array_key_exists('bookmark', $data) ? $data['bookmark'] : $this->bookmark;
        }
    }

    /**
     * Gets items.
     *
     * @return AdsCreditDiscountsResponse[]|null
     */
    public function getItems(): ?array
    {
        return $this->items;
    }



    /**
     * Sets items.
     *
     * @param AdsCreditDiscountsResponse[]|null $items
     *
     * @return $this
     */
    public function setItems(?array $items): self
    {
        $this->items = $items;

        return $this;
    }

    /**
     * Gets bookmark.
     *
     * @return string|null
     */
    public function getBookmark(): ?string
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
    public function setBookmark(?string $bookmark = null): self
    {
        $this->bookmark = $bookmark;

        return $this;
    }
}


