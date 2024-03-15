<?php
/**
 * CatalogsRetailItemsFilter
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
 * Class representing the CatalogsRetailItemsFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsRetailItemsFilter 
{
        /**
     * @var string|null
     * @SerializedName("catalog_type")
     * @Assert\NotNull()
     * @Assert\Choice({ "RETAIL" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $catalogType = null;

    /**
     * @var string[]|null
     * @SerializedName("item_ids")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     * @Assert\Count(
     *   max = 100
     * )
     * @Assert\Count(
     *   min = 1
     * )
     */
    protected ?array $itemIds = null;

    /**
     * Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
     *
     * @var string|null
     * @SerializedName("catalog_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $catalogId = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->catalogType = array_key_exists('catalogType', $data) ? $data['catalogType'] : $this->catalogType;
            $this->itemIds = array_key_exists('itemIds', $data) ? $data['itemIds'] : $this->itemIds;
            $this->catalogId = array_key_exists('catalogId', $data) ? $data['catalogId'] : $this->catalogId;
        }
    }

    /**
     * Gets catalogType.
     *
     * @return string|null
     */
    public function getCatalogType(): ?string
    {
        return $this->catalogType;
    }



    /**
     * Sets catalogType.
     *
     * @param string|null $catalogType
     *
     * @return $this
     */
    public function setCatalogType(?string $catalogType): self
    {
        $this->catalogType = $catalogType;

        return $this;
    }

    /**
     * Gets itemIds.
     *
     * @return string[]|null
     */
    public function getItemIds(): ?array
    {
        return $this->itemIds;
    }



    /**
     * Sets itemIds.
     *
     * @param string[]|null $itemIds
     *
     * @return $this
     */
    public function setItemIds(?array $itemIds): self
    {
        $this->itemIds = $itemIds;

        return $this;
    }

    /**
     * Gets catalogId.
     *
     * @return string|null
     */
    public function getCatalogId(): ?string
    {
        return $this->catalogId;
    }



    /**
     * Sets catalogId.
     *
     * @param string|null $catalogId  Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
     *
     * @return $this
     */
    public function setCatalogId(?string $catalogId = null): self
    {
        $this->catalogId = $catalogId;

        return $this;
    }
}

