<?php
/**
 * ConversionEvents
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
 * Class representing the ConversionEvents model.
 *
 * A list of events (one or more) encapsulated by a data object.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class ConversionEvents 
{
        /**
     * @var ConversionEventsDataInner[]|null
     * @SerializedName("data")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ConversionEventsDataInner")
     * })
     * @Type("array<OpenAPI\Server\Model\ConversionEventsDataInner>")
     * @Assert\Count(
     *   max = 1000
     * )
     * @Assert\Count(
     *   min = 1
     * )
     */
    protected ?array $data = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->data = array_key_exists('data', $data) ? $data['data'] : $this->data;
        }
    }

    /**
     * Gets data.
     *
     * @return ConversionEventsDataInner[]|null
     */
    public function getData(): ?array
    {
        return $this->data;
    }



    /**
     * Sets data.
     *
     * @param ConversionEventsDataInner[]|null $data
     *
     * @return $this
     */
    public function setData(?array $data): self
    {
        $this->data = $data;

        return $this;
    }
}


