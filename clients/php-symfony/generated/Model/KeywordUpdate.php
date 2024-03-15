<?php
/**
 * KeywordUpdate
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
 * Class representing the KeywordUpdate model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class KeywordUpdate 
{
        /**
     * Keyword ID.
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
     * Is keyword archived?
     *
     * @var bool|null
     * @SerializedName("archived")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $archived = null;

    /**
     * Keyword custom bid in microcurrency - null if inherited from parent ad group.
     *
     * @var int|null
     * @SerializedName("bid")
     * @Assert\Type("int")
     * @Type("int")
     * @Assert\GreaterThanOrEqual(1)
     */
    protected ?int $bid = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->archived = array_key_exists('archived', $data) ? $data['archived'] : $this->archived;
            $this->bid = array_key_exists('bid', $data) ? $data['bid'] : $this->bid;
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
     * @param string|null $id  Keyword ID.
     *
     * @return $this
     */
    public function setId(?string $id): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets archived.
     *
     * @return bool|null
     */
    public function isArchived(): ?bool
    {
        return $this->archived;
    }



    /**
     * Sets archived.
     *
     * @param bool|null $archived  Is keyword archived?
     *
     * @return $this
     */
    public function setArchived(?bool $archived = null): self
    {
        $this->archived = $archived;

        return $this;
    }

    /**
     * Gets bid.
     *
     * @return int|null
     */
    public function getBid(): ?int
    {
        return $this->bid;
    }



    /**
     * Sets bid.
     *
     * @param int|null $bid  Keyword custom bid in microcurrency - null if inherited from parent ad group.
     *
     * @return $this
     */
    public function setBid(?int $bid = null): self
    {
        $this->bid = $bid;

        return $this;
    }
}


