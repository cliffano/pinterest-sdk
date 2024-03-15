<?php
/**
 * KeywordsMetricsArrayResponse
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
 * Class representing the KeywordsMetricsArrayResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class KeywordsMetricsArrayResponse 
{
        /**
     * @var KeywordMetricsResponse[]|null
     * @SerializedName("data")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\KeywordMetricsResponse")
     * })
     * @Type("array<OpenAPI\Server\Model\KeywordMetricsResponse>")
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
     * @return KeywordMetricsResponse[]|null
     */
    public function getData(): ?array
    {
        return $this->data;
    }



    /**
     * Sets data.
     *
     * @param KeywordMetricsResponse[]|null $data
     *
     * @return $this
     */
    public function setData(?array $data = null): self
    {
        $this->data = $data;

        return $this;
    }
}


