<?php
/**
 * CatalogsProductGroup
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
 * Class representing the CatalogsProductGroup model.
 *
 * catalog product group entity
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CatalogsProductGroup 
{
        /**
     * ID of the catalog product group.
     *
     * @var string
     * @SerializedName("id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $id;

    /**
     * Name of catalog product group
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $name;

    /**
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $description;

    /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupFilters
     * @SerializedName("filters")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupFilters")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupFilters")
     */
    protected $filters;

    /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupType|null
     * @SerializedName("type")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupType")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupType")
     */
    protected $type;

    /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupStatus|null
     * @SerializedName("status")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupStatus")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupStatus")
     */
    protected $status;

    /**
     * id of the catalogs feed belonging to this catalog product group
     *
     * @var string|null
     * @SerializedName("feed_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $feedId;

    /**
     * Unix timestamp in seconds of when catalog product group was created.
     *
     * @var int|null
     * @SerializedName("created_at")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $createdAt;

    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     *
     * @var int|null
     * @SerializedName("updated_at")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $updatedAt;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->description = isset($data['description']) ? $data['description'] : null;
        $this->filters = isset($data['filters']) ? $data['filters'] : null;
        $this->type = isset($data['type']) ? $data['type'] : null;
        $this->status = isset($data['status']) ? $data['status'] : null;
        $this->feedId = isset($data['feedId']) ? $data['feedId'] : null;
        $this->createdAt = isset($data['createdAt']) ? $data['createdAt'] : null;
        $this->updatedAt = isset($data['updatedAt']) ? $data['updatedAt'] : null;
    }

    /**
     * Gets id.
     *
     * @return string
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string $id  ID of the catalog product group.
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName()
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
    public function setName($name = null)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription()
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
    public function setDescription($description = null)
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets filters.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupFilters
     */
    public function getFilters(): CatalogsProductGroupFilters
    {
        return $this->filters;
    }

    /**
     * Sets filters.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupFilters $filters
     *
     * @return $this
     */
    public function setFilters(CatalogsProductGroupFilters $filters)
    {
        $this->filters = $filters;

        return $this;
    }

    /**
     * Gets type.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupType|null
     */
    public function getType(): ?CatalogsProductGroupType
    {
        return $this->type;
    }

    /**
     * Sets type.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupType|null $type
     *
     * @return $this
     */
    public function setType(CatalogsProductGroupType $type = null)
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupStatus|null
     */
    public function getStatus(): ?CatalogsProductGroupStatus
    {
        return $this->status;
    }

    /**
     * Sets status.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupStatus|null $status
     *
     * @return $this
     */
    public function setStatus(CatalogsProductGroupStatus $status = null)
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets feedId.
     *
     * @return string|null
     */
    public function getFeedId()
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
    public function setFeedId($feedId = null)
    {
        $this->feedId = $feedId;

        return $this;
    }

    /**
     * Gets createdAt.
     *
     * @return int|null
     */
    public function getCreatedAt()
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
    public function setCreatedAt($createdAt = null)
    {
        $this->createdAt = $createdAt;

        return $this;
    }

    /**
     * Gets updatedAt.
     *
     * @return int|null
     */
    public function getUpdatedAt()
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
    public function setUpdatedAt($updatedAt = null)
    {
        $this->updatedAt = $updatedAt;

        return $this;
    }
}


