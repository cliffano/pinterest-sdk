<?php
/**
 * AudienceInsightCategoryCommon
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
 * Class representing the AudienceInsightCategoryCommon model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AudienceInsightCategoryCommon 
{
        /**
     * @var string|null
     * @SerializedName("key")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $key = null;

    /**
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * @var float|null
     * @SerializedName("ratio")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $ratio = null;

    /**
     * @var float|null
     * @SerializedName("index")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $index = null;

    /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $id = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->key = array_key_exists('key', $data) ? $data['key'] : $this->key;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->ratio = array_key_exists('ratio', $data) ? $data['ratio'] : $this->ratio;
            $this->index = array_key_exists('index', $data) ? $data['index'] : $this->index;
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
        }
    }

    /**
     * Gets key.
     *
     * @return string|null
     */
    public function getKey(): ?string
    {
        return $this->key;
    }



    /**
     * Sets key.
     *
     * @param string|null $key
     *
     * @return $this
     */
    public function setKey(?string $key = null): self
    {
        $this->key = $key;

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
     * @param string|null $name
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets ratio.
     *
     * @return float|null
     */
    public function getRatio(): ?float
    {
        return $this->ratio;
    }



    /**
     * Sets ratio.
     *
     * @param float|null $ratio
     *
     * @return $this
     */
    public function setRatio(?float $ratio = null): self
    {
        $this->ratio = $ratio;

        return $this;
    }

    /**
     * Gets index.
     *
     * @return float|null
     */
    public function getIndex(): ?float
    {
        return $this->index;
    }



    /**
     * Sets index.
     *
     * @param float|null $index
     *
     * @return $this
     */
    public function setIndex(?float $index = null): self
    {
        $this->index = $index;

        return $this;
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
     * @param string|null $id
     *
     * @return $this
     */
    public function setId(?string $id = null): self
    {
        $this->id = $id;

        return $this;
    }
}


