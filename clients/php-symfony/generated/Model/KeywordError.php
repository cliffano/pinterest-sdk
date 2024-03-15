<?php
/**
 * KeywordError
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
 * Class representing the KeywordError model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class KeywordError 
{
        /**
     * @var Keyword|null
     * @SerializedName("data")
     * @Assert\Type("OpenAPI\Server\Model\Keyword")
     * @Type("OpenAPI\Server\Model\Keyword")
     */
    protected ?Keyword $data = null;

    /**
     * @var string[]|null
     * @SerializedName("error_messages")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $errorMessages = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->data = array_key_exists('data', $data) ? $data['data'] : $this->data;
            $this->errorMessages = array_key_exists('errorMessages', $data) ? $data['errorMessages'] : $this->errorMessages;
        }
    }

    /**
     * Gets data.
     *
     * @return Keyword|null
     */
    public function getData(): ?Keyword
    {
        return $this->data;
    }



    /**
     * Sets data.
     *
     * @param Keyword|null $data
     *
     * @return $this
     */
    public function setData(?Keyword $data = null): self
    {
        $this->data = $data;

        return $this;
    }

    /**
     * Gets errorMessages.
     *
     * @return string[]|null
     */
    public function getErrorMessages(): ?array
    {
        return $this->errorMessages;
    }



    /**
     * Sets errorMessages.
     *
     * @param string[]|null $errorMessages
     *
     * @return $this
     */
    public function setErrorMessages(?array $errorMessages = null): self
    {
        $this->errorMessages = $errorMessages;

        return $this;
    }
}


