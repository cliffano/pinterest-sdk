<?php
/**
 * GetMMMReportResponse
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
 * Class representing the GetMMMReportResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class GetMMMReportResponse 
{
        /**
     * @var float|null
     * @SerializedName("code")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $code = null;

    /**
     * @var GetMMMReportResponseData|null
     * @SerializedName("data")
     * @Assert\Type("OpenAPI\Server\Model\GetMMMReportResponseData")
     * @Type("OpenAPI\Server\Model\GetMMMReportResponseData")
     */
    protected ?GetMMMReportResponseData $data = null;

    /**
     * @var string|null
     * @SerializedName("message")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $message = null;

    /**
     * @var string|null
     * @SerializedName("status")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $status = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->code = array_key_exists('code', $data) ? $data['code'] : $this->code;
            $this->data = array_key_exists('data', $data) ? $data['data'] : $this->data;
            $this->message = array_key_exists('message', $data) ? $data['message'] : $this->message;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
        }
    }

    /**
     * Gets code.
     *
     * @return float|null
     */
    public function getCode(): ?float
    {
        return $this->code;
    }



    /**
     * Sets code.
     *
     * @param float|null $code
     *
     * @return $this
     */
    public function setCode(?float $code = null): self
    {
        $this->code = $code;

        return $this;
    }

    /**
     * Gets data.
     *
     * @return GetMMMReportResponseData|null
     */
    public function getData(): ?GetMMMReportResponseData
    {
        return $this->data;
    }



    /**
     * Sets data.
     *
     * @param GetMMMReportResponseData|null $data
     *
     * @return $this
     */
    public function setData(?GetMMMReportResponseData $data = null): self
    {
        $this->data = $data;

        return $this;
    }

    /**
     * Gets message.
     *
     * @return string|null
     */
    public function getMessage(): ?string
    {
        return $this->message;
    }



    /**
     * Sets message.
     *
     * @param string|null $message
     *
     * @return $this
     */
    public function setMessage(?string $message = null): self
    {
        $this->message = $message;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return string|null
     */
    public function getStatus(): ?string
    {
        return $this->status;
    }



    /**
     * Sets status.
     *
     * @param string|null $status
     *
     * @return $this
     */
    public function setStatus(?string $status = null): self
    {
        $this->status = $status;

        return $this;
    }
}

