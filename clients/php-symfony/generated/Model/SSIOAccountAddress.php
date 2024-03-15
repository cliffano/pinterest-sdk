<?php
/**
 * SSIOAccountAddress
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
 * Class representing the SSIOAccountAddress model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class SSIOAccountAddress 
{
        /**
     * Address display
     *
     * @var string|null
     * @SerializedName("display")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $display = null;

    /**
     * Purpose for which the address is used, usually Billing or Businness
     *
     * @var string|null
     * @SerializedName("purpose")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $purpose = null;

    /**
     * Salesforce id for address
     *
     * @var string|null
     * @SerializedName("address_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $addressId = null;

    /**
     * Legal entity for this insertion order
     *
     * @var string|null
     * @SerializedName("order_legal_entity")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $orderLegalEntity = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->display = array_key_exists('display', $data) ? $data['display'] : $this->display;
            $this->purpose = array_key_exists('purpose', $data) ? $data['purpose'] : $this->purpose;
            $this->addressId = array_key_exists('addressId', $data) ? $data['addressId'] : $this->addressId;
            $this->orderLegalEntity = array_key_exists('orderLegalEntity', $data) ? $data['orderLegalEntity'] : $this->orderLegalEntity;
        }
    }

    /**
     * Gets display.
     *
     * @return string|null
     */
    public function getDisplay(): ?string
    {
        return $this->display;
    }



    /**
     * Sets display.
     *
     * @param string|null $display  Address display
     *
     * @return $this
     */
    public function setDisplay(?string $display = null): self
    {
        $this->display = $display;

        return $this;
    }

    /**
     * Gets purpose.
     *
     * @return string|null
     */
    public function getPurpose(): ?string
    {
        return $this->purpose;
    }



    /**
     * Sets purpose.
     *
     * @param string|null $purpose  Purpose for which the address is used, usually Billing or Businness
     *
     * @return $this
     */
    public function setPurpose(?string $purpose = null): self
    {
        $this->purpose = $purpose;

        return $this;
    }

    /**
     * Gets addressId.
     *
     * @return string|null
     */
    public function getAddressId(): ?string
    {
        return $this->addressId;
    }



    /**
     * Sets addressId.
     *
     * @param string|null $addressId  Salesforce id for address
     *
     * @return $this
     */
    public function setAddressId(?string $addressId = null): self
    {
        $this->addressId = $addressId;

        return $this;
    }

    /**
     * Gets orderLegalEntity.
     *
     * @return string|null
     */
    public function getOrderLegalEntity(): ?string
    {
        return $this->orderLegalEntity;
    }



    /**
     * Sets orderLegalEntity.
     *
     * @param string|null $orderLegalEntity  Legal entity for this insertion order
     *
     * @return $this
     */
    public function setOrderLegalEntity(?string $orderLegalEntity = null): self
    {
        $this->orderLegalEntity = $orderLegalEntity;

        return $this;
    }
}


