<?php
/**
 * CatalogsProduct
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
 * Class representing the CatalogsProduct model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsProduct 
{
        /**
     * @var CatalogsProductMetadata|null
     * @SerializedName("metadata")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductMetadata")
     * @Type("OpenAPI\Server\Model\CatalogsProductMetadata")
     */
    protected ?CatalogsProductMetadata $metadata = null;

    /**
     * @var Pin|null
     * @SerializedName("pin")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\Pin")
     * @Type("OpenAPI\Server\Model\Pin")
     */
    protected ?Pin $pin = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->metadata = array_key_exists('metadata', $data) ? $data['metadata'] : $this->metadata;
            $this->pin = array_key_exists('pin', $data) ? $data['pin'] : $this->pin;
        }
    }

    /**
     * Gets metadata.
     *
     * @return CatalogsProductMetadata|null
     */
    public function getMetadata(): ?CatalogsProductMetadata
    {
        return $this->metadata;
    }



    /**
     * Sets metadata.
     *
     * @param CatalogsProductMetadata|null $metadata
     *
     * @return $this
     */
    public function setMetadata(?CatalogsProductMetadata $metadata): self
    {
        $this->metadata = $metadata;

        return $this;
    }

    /**
     * Gets pin.
     *
     * @return Pin|null
     */
    public function getPin(): ?Pin
    {
        return $this->pin;
    }



    /**
     * Sets pin.
     *
     * @param Pin|null $pin
     *
     * @return $this
     */
    public function setPin(?Pin $pin): self
    {
        $this->pin = $pin;

        return $this;
    }
}


