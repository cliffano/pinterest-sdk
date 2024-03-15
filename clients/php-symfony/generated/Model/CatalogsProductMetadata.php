<?php
/**
 * CatalogsProductMetadata
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
 * Class representing the CatalogsProductMetadata model.
 *
 * Product metadata entity
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsProductMetadata 
{
        /**
     * The user-created unique ID that represents the product.
     *
     * @var string|null
     * @SerializedName("item_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $itemId = null;

    /**
     * The parent ID of the product.
     *
     * @var string|null
     * @SerializedName("item_group_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $itemGroupId = null;

    /**
     * @var NonNullableProductAvailabilityType|null
     * @SerializedName("availability")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedAvailability")
        * @Type("string")
     */
    protected ?NonNullableProductAvailabilityType $availability = null;

    /**
     * The price of the product.
     *
     * @var float|null
     * @SerializedName("price")
     * @Assert\NotNull()
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $price = null;

    /**
     * The discounted price of the product.
     *
     * @var float|null
     * @SerializedName("sale_price")
     * @Assert\NotNull()
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $salePrice = null;

    /**
     * @var NonNullableCatalogsCurrency|null
     * @SerializedName("currency")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedCurrency")
        * @Type("string")
     */
    protected ?NonNullableCatalogsCurrency $currency = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->itemId = array_key_exists('itemId', $data) ? $data['itemId'] : $this->itemId;
            $this->itemGroupId = array_key_exists('itemGroupId', $data) ? $data['itemGroupId'] : $this->itemGroupId;
            $this->availability = array_key_exists('availability', $data) ? $data['availability'] : $this->availability;
            $this->price = array_key_exists('price', $data) ? $data['price'] : $this->price;
            $this->salePrice = array_key_exists('salePrice', $data) ? $data['salePrice'] : $this->salePrice;
            $this->currency = array_key_exists('currency', $data) ? $data['currency'] : $this->currency;
        }
    }

    /**
     * Gets itemId.
     *
     * @return string|null
     */
    public function getItemId(): ?string
    {
        return $this->itemId;
    }



    /**
     * Sets itemId.
     *
     * @param string|null $itemId  The user-created unique ID that represents the product.
     *
     * @return $this
     */
    public function setItemId(?string $itemId): self
    {
        $this->itemId = $itemId;

        return $this;
    }

    /**
     * Gets itemGroupId.
     *
     * @return string|null
     */
    public function getItemGroupId(): ?string
    {
        return $this->itemGroupId;
    }



    /**
     * Sets itemGroupId.
     *
     * @param string|null $itemGroupId  The parent ID of the product.
     *
     * @return $this
     */
    public function setItemGroupId(?string $itemGroupId): self
    {
        $this->itemGroupId = $itemGroupId;

        return $this;
    }

    /**
     * Gets availability.
     *
     * @return NonNullableProductAvailabilityType|null
     */
    public function getAvailability(): ?NonNullableProductAvailabilityType
    {
        return $this->availability;
    }

    /**
    * Gets availability for serialization.
    *
    * @return string|null
    */
    public function getSerializedAvailability(): string|null
    {
        return $this->availability?->value ? (string) $this->availability->value : null;
    }


    /**
     * Sets availability.
     *
     * @param NonNullableProductAvailabilityType|null $availability
     *
     * @return $this
     */
    public function setAvailability(?NonNullableProductAvailabilityType $availability): self
    {
        $this->availability = $availability;

        return $this;
    }

    /**
     * Gets price.
     *
     * @return float|null
     */
    public function getPrice(): ?float
    {
        return $this->price;
    }



    /**
     * Sets price.
     *
     * @param float|null $price  The price of the product.
     *
     * @return $this
     */
    public function setPrice(?float $price): self
    {
        $this->price = $price;

        return $this;
    }

    /**
     * Gets salePrice.
     *
     * @return float|null
     */
    public function getSalePrice(): ?float
    {
        return $this->salePrice;
    }



    /**
     * Sets salePrice.
     *
     * @param float|null $salePrice  The discounted price of the product.
     *
     * @return $this
     */
    public function setSalePrice(?float $salePrice): self
    {
        $this->salePrice = $salePrice;

        return $this;
    }

    /**
     * Gets currency.
     *
     * @return NonNullableCatalogsCurrency|null
     */
    public function getCurrency(): ?NonNullableCatalogsCurrency
    {
        return $this->currency;
    }

    /**
    * Gets currency for serialization.
    *
    * @return string|null
    */
    public function getSerializedCurrency(): string|null
    {
        return $this->currency?->value ? (string) $this->currency->value : null;
    }


    /**
     * Sets currency.
     *
     * @param NonNullableCatalogsCurrency|null $currency
     *
     * @return $this
     */
    public function setCurrency(?NonNullableCatalogsCurrency $currency): self
    {
        $this->currency = $currency;

        return $this;
    }
}

