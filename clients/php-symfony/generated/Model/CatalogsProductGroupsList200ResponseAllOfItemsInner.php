<?php
/**
 * CatalogsProductGroupsList200ResponseAllOfItemsInner
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
 * Class representing the CatalogsProductGroupsList200ResponseAllOfItemsInner model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsProductGroupsList200ResponseAllOfItemsInner 
{
        /**
     * ID of the catalog product group.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $id = null;

    /**
     * Name of catalog product group
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $description = null;

    /**
     * @var CatalogsProductGroupFilters|null
     * @SerializedName("filters")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupFilters")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupFilters")
     */
    protected ?CatalogsProductGroupFilters $filters = null;

    /**
     * boolean indicator of whether the product group is being featured or not
     *
     * @var bool|null
     * @SerializedName("is_featured")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $isFeatured = null;

    /**
     * @var CatalogsProductGroupType|null
     * @SerializedName("type")
        * @Accessor(getter="getSerializedType")
        * @Type("string")
     */
    protected ?CatalogsProductGroupType $type = null;

    /**
     * @var CatalogsProductGroupStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?CatalogsProductGroupStatus $status = null;

    /**
     * Unix timestamp in seconds of when catalog product group was created.
     *
     * @var int|null
     * @SerializedName("created_at")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $createdAt = null;

    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     *
     * @var int|null
     * @SerializedName("updated_at")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $updatedAt = null;

    /**
     * id of the catalogs feed belonging to this catalog product group
     *
     * @var string|null
     * @SerializedName("feed_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $feedId = null;

    /**
     * @var string|null
     * @SerializedName("catalog_type")
     * @Assert\Choice({ "RETAIL" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $catalogType = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->description = array_key_exists('description', $data) ? $data['description'] : $this->description;
            $this->filters = array_key_exists('filters', $data) ? $data['filters'] : $this->filters;
            $this->isFeatured = array_key_exists('isFeatured', $data) ? $data['isFeatured'] : $this->isFeatured;
            $this->type = array_key_exists('type', $data) ? $data['type'] : $this->type;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
            $this->createdAt = array_key_exists('createdAt', $data) ? $data['createdAt'] : $this->createdAt;
            $this->updatedAt = array_key_exists('updatedAt', $data) ? $data['updatedAt'] : $this->updatedAt;
            $this->feedId = array_key_exists('feedId', $data) ? $data['feedId'] : $this->feedId;
            $this->catalogType = array_key_exists('catalogType', $data) ? $data['catalogType'] : $this->catalogType;
        }
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId(): ?string
    {
        return $this->id;
    }



    /**
     * Sets id.
     *
     * @param string|null $id  ID of the catalog product group.
     *
     * @return $this
     */
    public function setId(?string $id): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Name of catalog product group
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription(): ?string
    {
        return $this->description;
    }



    /**
     * Sets description.
     *
     * @param string|null $description
     *
     * @return $this
     */
    public function setDescription(?string $description = null): self
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets filters.
     *
     * @return CatalogsProductGroupFilters|null
     */
    public function getFilters(): ?CatalogsProductGroupFilters
    {
        return $this->filters;
    }



    /**
     * Sets filters.
     *
     * @param CatalogsProductGroupFilters|null $filters
     *
     * @return $this
     */
    public function setFilters(?CatalogsProductGroupFilters $filters): self
    {
        $this->filters = $filters;

        return $this;
    }

    /**
     * Gets isFeatured.
     *
     * @return bool|null
     */
    public function isIsFeatured(): ?bool
    {
        return $this->isFeatured;
    }



    /**
     * Sets isFeatured.
     *
     * @param bool|null $isFeatured  boolean indicator of whether the product group is being featured or not
     *
     * @return $this
     */
    public function setIsFeatured(?bool $isFeatured = null): self
    {
        $this->isFeatured = $isFeatured;

        return $this;
    }

    /**
     * Gets type.
     *
     * @return CatalogsProductGroupType|null
     */
    public function getType(): ?CatalogsProductGroupType
    {
        return $this->type;
    }

    /**
    * Gets type for serialization.
    *
    * @return string|null
    */
    public function getSerializedType(): string|null
    {
        return $this->type?->value ? (string) $this->type->value : null;
    }


    /**
     * Sets type.
     *
     * @param CatalogsProductGroupType|null $type
     *
     * @return $this
     */
    public function setType(?CatalogsProductGroupType $type = null): self
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return CatalogsProductGroupStatus|null
     */
    public function getStatus(): ?CatalogsProductGroupStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param CatalogsProductGroupStatus|null $status
     *
     * @return $this
     */
    public function setStatus(?CatalogsProductGroupStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets createdAt.
     *
     * @return int|null
     */
    public function getCreatedAt(): ?int
    {
        return $this->createdAt;
    }



    /**
     * Sets createdAt.
     *
     * @param int|null $createdAt  Unix timestamp in seconds of when catalog product group was created.
     *
     * @return $this
     */
    public function setCreatedAt(?int $createdAt = null): self
    {
        $this->createdAt = $createdAt;

        return $this;
    }

    /**
     * Gets updatedAt.
     *
     * @return int|null
     */
    public function getUpdatedAt(): ?int
    {
        return $this->updatedAt;
    }



    /**
     * Sets updatedAt.
     *
     * @param int|null $updatedAt  Unix timestamp in seconds of last time catalog product group was updated.
     *
     * @return $this
     */
    public function setUpdatedAt(?int $updatedAt = null): self
    {
        $this->updatedAt = $updatedAt;

        return $this;
    }

    /**
     * Gets feedId.
     *
     * @return string|null
     */
    public function getFeedId(): ?string
    {
        return $this->feedId;
    }



    /**
     * Sets feedId.
     *
     * @param string|null $feedId  id of the catalogs feed belonging to this catalog product group
     *
     * @return $this
     */
    public function setFeedId(?string $feedId): self
    {
        $this->feedId = $feedId;

        return $this;
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
    public function setCatalogType(?string $catalogType = null): self
    {
        $this->catalogType = $catalogType;

        return $this;
    }
}


