<?php
/**
 * TargetingTypeFilter
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
 * Class representing the TargetingTypeFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class TargetingTypeFilter 
{
        /**
     * List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.
     *
     * @var AdsAnalyticsTargetingType[]|null
     * @SerializedName("targeting_types")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\AdsAnalyticsTargetingType")
     * })
     * @Accessor(getter="getSerializedTargetingTypes")
     * @Type("array<string>")
     * @Assert\Count(
     *   max = 5
     * )
     * @Assert\Count(
     *   min = 1
     * )
     */
    protected ?array $targetingTypes = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->targetingTypes = array_key_exists('targetingTypes', $data) ? $data['targetingTypes'] : $this->targetingTypes;
        }
    }

    /**
     * Gets targetingTypes.
     *
     * @return AdsAnalyticsTargetingType[]|null
     */
    public function getTargetingTypes(): ?array
    {
        return $this->targetingTypes;
    }


    /**
    * Gets targetingTypes for serialization.
    *
    * @return array
    */
    public function getSerializedTargetingTypes(): array
    {
        return array_map(
            static fn ($value) => (string) $value->value,
            $this->test ?? []
        );
    }

    /**
     * Sets targetingTypes.
     *
     * @param AdsAnalyticsTargetingType[]|null $targetingTypes  List of targeting types. Requires `level` to be a value ending in `_TARGETING`.
     *
     * @return $this
     */
    public function setTargetingTypes(?array $targetingTypes = null): self
    {
        $this->targetingTypes = $targetingTypes;

        return $this;
    }
}


