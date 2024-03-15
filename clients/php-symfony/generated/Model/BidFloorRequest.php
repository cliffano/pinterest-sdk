<?php
/**
 * BidFloorRequest
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
 * Class representing the BidFloorRequest model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class BidFloorRequest 
{
        /**
     * @var BidFloorSpec[]|null
     * @SerializedName("bid_floor_specs")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\BidFloorSpec")
     * })
     * @Type("array<OpenAPI\Server\Model\BidFloorSpec>")
     */
    protected ?array $bidFloorSpecs = null;

    /**
     * @var TargetingSpec|null
     * @SerializedName("targeting_spec")
     * @Assert\Type("OpenAPI\Server\Model\TargetingSpec")
     * @Type("OpenAPI\Server\Model\TargetingSpec")
     */
    protected ?TargetingSpec $targetingSpec = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->bidFloorSpecs = array_key_exists('bidFloorSpecs', $data) ? $data['bidFloorSpecs'] : $this->bidFloorSpecs;
            $this->targetingSpec = array_key_exists('targetingSpec', $data) ? $data['targetingSpec'] : $this->targetingSpec;
        }
    }

    /**
     * Gets bidFloorSpecs.
     *
     * @return BidFloorSpec[]|null
     */
    public function getBidFloorSpecs(): ?array
    {
        return $this->bidFloorSpecs;
    }



    /**
     * Sets bidFloorSpecs.
     *
     * @param BidFloorSpec[]|null $bidFloorSpecs
     *
     * @return $this
     */
    public function setBidFloorSpecs(?array $bidFloorSpecs): self
    {
        $this->bidFloorSpecs = $bidFloorSpecs;

        return $this;
    }

    /**
     * Gets targetingSpec.
     *
     * @return TargetingSpec|null
     */
    public function getTargetingSpec(): ?TargetingSpec
    {
        return $this->targetingSpec;
    }



    /**
     * Sets targetingSpec.
     *
     * @param TargetingSpec|null $targetingSpec
     *
     * @return $this
     */
    public function setTargetingSpec(?TargetingSpec $targetingSpec = null): self
    {
        $this->targetingSpec = $targetingSpec;

        return $this;
    }
}

