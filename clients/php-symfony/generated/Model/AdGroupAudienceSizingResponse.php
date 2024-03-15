<?php
/**
 * AdGroupAudienceSizingResponse
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
 * Class representing the AdGroupAudienceSizingResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdGroupAudienceSizingResponse 
{
        /**
     * The lower confidence bound of the estimated potential audience size. \&quot;Potential audience size\&quot; estimates the number of people you may be able to reach per month with your campaign. It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
     *
     * @var float|null
     * @SerializedName("audience_size_lower_bound")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $audienceSizeLowerBound = null;

    /**
     * The upper confidence bound of the estimated potential audience size. \&quot;Potential audience size\&quot; estimates the number of people you may be able to reach per month with your campaign. It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
     *
     * @var float|null
     * @SerializedName("audience_size_upper_bound")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $audienceSizeUpperBound = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->audienceSizeLowerBound = array_key_exists('audienceSizeLowerBound', $data) ? $data['audienceSizeLowerBound'] : $this->audienceSizeLowerBound;
            $this->audienceSizeUpperBound = array_key_exists('audienceSizeUpperBound', $data) ? $data['audienceSizeUpperBound'] : $this->audienceSizeUpperBound;
        }
    }

    /**
     * Gets audienceSizeLowerBound.
     *
     * @return float|null
     */
    public function getAudienceSizeLowerBound(): ?float
    {
        return $this->audienceSizeLowerBound;
    }



    /**
     * Sets audienceSizeLowerBound.
     *
     * @param float|null $audienceSizeLowerBound  The lower confidence bound of the estimated potential audience size. \"Potential audience size\" estimates the number of people you may be able to reach per month with your campaign. It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
     *
     * @return $this
     */
    public function setAudienceSizeLowerBound(?float $audienceSizeLowerBound = null): self
    {
        $this->audienceSizeLowerBound = $audienceSizeLowerBound;

        return $this;
    }

    /**
     * Gets audienceSizeUpperBound.
     *
     * @return float|null
     */
    public function getAudienceSizeUpperBound(): ?float
    {
        return $this->audienceSizeUpperBound;
    }



    /**
     * Sets audienceSizeUpperBound.
     *
     * @param float|null $audienceSizeUpperBound  The upper confidence bound of the estimated potential audience size. \"Potential audience size\" estimates the number of people you may be able to reach per month with your campaign. It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
     *
     * @return $this
     */
    public function setAudienceSizeUpperBound(?float $audienceSizeUpperBound = null): self
    {
        $this->audienceSizeUpperBound = $audienceSizeUpperBound;

        return $this;
    }
}


