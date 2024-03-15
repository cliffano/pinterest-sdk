<?php
/**
 * HotelProcessingRecord
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
 * Class representing the HotelProcessingRecord model.
 *
 * Object describing an item processing record
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class HotelProcessingRecord 
{
        /**
     * The catalog hotel id in the merchant namespace
     *
     * @var string|null
     * @SerializedName("hotel_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $hotelId = null;

    /**
     * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     *
     * @var ItemValidationEvent[]|null
     * @SerializedName("errors")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ItemValidationEvent")
     * })
     * @Type("array<OpenAPI\Server\Model\ItemValidationEvent>")
     */
    protected ?array $errors = null;

    /**
     * Array with the validation warnings for the item processing record
     *
     * @var ItemValidationEvent[]|null
     * @SerializedName("warnings")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ItemValidationEvent")
     * })
     * @Type("array<OpenAPI\Server\Model\ItemValidationEvent>")
     */
    protected ?array $warnings = null;

    /**
     * @var ItemProcessingStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?ItemProcessingStatus $status = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->hotelId = array_key_exists('hotelId', $data) ? $data['hotelId'] : $this->hotelId;
            $this->errors = array_key_exists('errors', $data) ? $data['errors'] : $this->errors;
            $this->warnings = array_key_exists('warnings', $data) ? $data['warnings'] : $this->warnings;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
        }
    }

    /**
     * Gets hotelId.
     *
     * @return string|null
     */
    public function getHotelId(): ?string
    {
        return $this->hotelId;
    }



    /**
     * Sets hotelId.
     *
     * @param string|null $hotelId  The catalog hotel id in the merchant namespace
     *
     * @return $this
     */
    public function setHotelId(?string $hotelId = null): self
    {
        $this->hotelId = $hotelId;

        return $this;
    }

    /**
     * Gets errors.
     *
     * @return ItemValidationEvent[]|null
     */
    public function getErrors(): ?array
    {
        return $this->errors;
    }



    /**
     * Sets errors.
     *
     * @param ItemValidationEvent[]|null $errors  Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     *
     * @return $this
     */
    public function setErrors(?array $errors = null): self
    {
        $this->errors = $errors;

        return $this;
    }

    /**
     * Gets warnings.
     *
     * @return ItemValidationEvent[]|null
     */
    public function getWarnings(): ?array
    {
        return $this->warnings;
    }



    /**
     * Sets warnings.
     *
     * @param ItemValidationEvent[]|null $warnings  Array with the validation warnings for the item processing record
     *
     * @return $this
     */
    public function setWarnings(?array $warnings = null): self
    {
        $this->warnings = $warnings;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return ItemProcessingStatus|null
     */
    public function getStatus(): ?ItemProcessingStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param ItemProcessingStatus|null $status
     *
     * @return $this
     */
    public function setStatus(?ItemProcessingStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }
}


