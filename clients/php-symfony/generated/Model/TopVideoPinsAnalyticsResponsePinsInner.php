<?php
/**
 * TopVideoPinsAnalyticsResponsePinsInner
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
 * Class representing the TopVideoPinsAnalyticsResponsePinsInner model.
 *
 * Array with metrics, status, and pin id for the requested metric
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class TopVideoPinsAnalyticsResponsePinsInner 
{
        /**
     * The metric name and daily value for each requested metric
     *
     * @var float[]|null
     * @SerializedName("metrics")
     * @Assert\All({
     *   @Assert\Type("float")
     * })
     * @Type("array<string, float>")
     */
    protected ?array $metrics = null;

    /**
     * @var DataStatus[]|null
     * @SerializedName("data_status")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\DataStatus")
     * })
     * @Type("array<string, OpenAPI\Server\Model\DataStatus>")
     */
    protected ?array $dataStatus = null;

    /**
     * The pin id
     *
     * @var string|null
     * @SerializedName("pin_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $pinId = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->metrics = array_key_exists('metrics', $data) ? $data['metrics'] : $this->metrics;
            $this->dataStatus = array_key_exists('dataStatus', $data) ? $data['dataStatus'] : $this->dataStatus;
            $this->pinId = array_key_exists('pinId', $data) ? $data['pinId'] : $this->pinId;
        }
    }

    /**
     * Gets metrics.
     *
     * @return float[]|null
     */
    public function getMetrics(): ?array
    {
        return $this->metrics;
    }



    /**
     * Sets metrics.
     *
     * @param float[]|null $metrics  The metric name and daily value for each requested metric
     *
     * @return $this
     */
    public function setMetrics(?array $metrics = null): self
    {
        $this->metrics = $metrics;

        return $this;
    }

    /**
     * Gets dataStatus.
     *
     * @return DataStatus[]|null
     */
    public function getDataStatus(): ?array
    {
        return $this->dataStatus;
    }


    /**
    * Gets inner for serialization.
    *
    * @return array
    */
    public function getSerializedInner(): array
    {
        return array_map(
            static fn ($value) => (string) $value->value,
            $this->test ?? []
        );
    }

    /**
     * Sets dataStatus.
     *
     * @param DataStatus[]|null $dataStatus
     *
     * @return $this
     */
    public function setDataStatus(?array $dataStatus = null): self
    {
        $this->dataStatus = $dataStatus;

        return $this;
    }

    /**
     * Gets pinId.
     *
     * @return string|null
     */
    public function getPinId(): ?string
    {
        return $this->pinId;
    }



    /**
     * Sets pinId.
     *
     * @param string|null $pinId  The pin id
     *
     * @return $this
     */
    public function setPinId(?string $pinId = null): self
    {
        $this->pinId = $pinId;

        return $this;
    }
}

