<?php
/**
 * OptimizationGoalMetadata
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
 * Class representing the OptimizationGoalMetadata model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class OptimizationGoalMetadata 
{
        /**
     * @var OptimizationGoalMetadataConversionTagV3GoalMetadata|null
     * @SerializedName("conversion_tag_v3_goal_metadata")
     * @Assert\Type("OpenAPI\Server\Model\OptimizationGoalMetadataConversionTagV3GoalMetadata")
     * @Type("OpenAPI\Server\Model\OptimizationGoalMetadataConversionTagV3GoalMetadata")
     */
    protected ?OptimizationGoalMetadataConversionTagV3GoalMetadata $conversionTagV3GoalMetadata = null;

    /**
     * @var OptimizationGoalMetadataFrequencyGoalMetadata|null
     * @SerializedName("frequency_goal_metadata")
     * @Assert\Type("OpenAPI\Server\Model\OptimizationGoalMetadataFrequencyGoalMetadata")
     * @Type("OpenAPI\Server\Model\OptimizationGoalMetadataFrequencyGoalMetadata")
     */
    protected ?OptimizationGoalMetadataFrequencyGoalMetadata $frequencyGoalMetadata = null;

    /**
     * @var OptimizationGoalMetadataScrollupGoalMetadata|null
     * @SerializedName("scrollup_goal_metadata")
     * @Assert\Type("OpenAPI\Server\Model\OptimizationGoalMetadataScrollupGoalMetadata")
     * @Type("OpenAPI\Server\Model\OptimizationGoalMetadataScrollupGoalMetadata")
     */
    protected ?OptimizationGoalMetadataScrollupGoalMetadata $scrollupGoalMetadata = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->conversionTagV3GoalMetadata = array_key_exists('conversionTagV3GoalMetadata', $data) ? $data['conversionTagV3GoalMetadata'] : $this->conversionTagV3GoalMetadata;
            $this->frequencyGoalMetadata = array_key_exists('frequencyGoalMetadata', $data) ? $data['frequencyGoalMetadata'] : $this->frequencyGoalMetadata;
            $this->scrollupGoalMetadata = array_key_exists('scrollupGoalMetadata', $data) ? $data['scrollupGoalMetadata'] : $this->scrollupGoalMetadata;
        }
    }

    /**
     * Gets conversionTagV3GoalMetadata.
     *
     * @return OptimizationGoalMetadataConversionTagV3GoalMetadata|null
     */
    public function getConversionTagV3GoalMetadata(): ?OptimizationGoalMetadataConversionTagV3GoalMetadata
    {
        return $this->conversionTagV3GoalMetadata;
    }



    /**
     * Sets conversionTagV3GoalMetadata.
     *
     * @param OptimizationGoalMetadataConversionTagV3GoalMetadata|null $conversionTagV3GoalMetadata
     *
     * @return $this
     */
    public function setConversionTagV3GoalMetadata(?OptimizationGoalMetadataConversionTagV3GoalMetadata $conversionTagV3GoalMetadata = null): self
    {
        $this->conversionTagV3GoalMetadata = $conversionTagV3GoalMetadata;

        return $this;
    }

    /**
     * Gets frequencyGoalMetadata.
     *
     * @return OptimizationGoalMetadataFrequencyGoalMetadata|null
     */
    public function getFrequencyGoalMetadata(): ?OptimizationGoalMetadataFrequencyGoalMetadata
    {
        return $this->frequencyGoalMetadata;
    }



    /**
     * Sets frequencyGoalMetadata.
     *
     * @param OptimizationGoalMetadataFrequencyGoalMetadata|null $frequencyGoalMetadata
     *
     * @return $this
     */
    public function setFrequencyGoalMetadata(?OptimizationGoalMetadataFrequencyGoalMetadata $frequencyGoalMetadata = null): self
    {
        $this->frequencyGoalMetadata = $frequencyGoalMetadata;

        return $this;
    }

    /**
     * Gets scrollupGoalMetadata.
     *
     * @return OptimizationGoalMetadataScrollupGoalMetadata|null
     */
    public function getScrollupGoalMetadata(): ?OptimizationGoalMetadataScrollupGoalMetadata
    {
        return $this->scrollupGoalMetadata;
    }



    /**
     * Sets scrollupGoalMetadata.
     *
     * @param OptimizationGoalMetadataScrollupGoalMetadata|null $scrollupGoalMetadata
     *
     * @return $this
     */
    public function setScrollupGoalMetadata(?OptimizationGoalMetadataScrollupGoalMetadata $scrollupGoalMetadata = null): self
    {
        $this->scrollupGoalMetadata = $scrollupGoalMetadata;

        return $this;
    }
}

