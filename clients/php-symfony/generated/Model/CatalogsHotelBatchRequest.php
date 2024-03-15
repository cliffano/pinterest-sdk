<?php
/**
 * CatalogsHotelBatchRequest
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
 * Class representing the CatalogsHotelBatchRequest model.
 *
 * Request object to update catalogs hotel items
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsHotelBatchRequest 
{
        /**
     * @var CatalogsType|null
     * @SerializedName("catalog_type")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedCatalogType")
        * @Type("string")
     */
    protected ?CatalogsType $catalogType = null;

    /**
     * @var Country|null
     * @SerializedName("country")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedCountry")
        * @Type("string")
     */
    protected ?Country $country = null;

    /**
     * @var Language|null
     * @SerializedName("language")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedLanguage")
        * @Type("string")
     */
    protected ?Language $language = null;

    /**
     * Array with catalogs item operations
     *
     * @var CatalogsHotelBatchItem[]|null
     * @SerializedName("items")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\CatalogsHotelBatchItem")
     * })
     * @Type("array<OpenAPI\Server\Model\CatalogsHotelBatchItem>")
     * @Assert\Count(
     *   max = 1000
     * )
     * @Assert\Count(
     *   min = 1
     * )
     */
    protected ?array $items = null;

    /**
     * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
     *
     * @var string|null
     * @SerializedName("catalog_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $catalogId = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->catalogType = array_key_exists('catalogType', $data) ? $data['catalogType'] : $this->catalogType;
            $this->country = array_key_exists('country', $data) ? $data['country'] : $this->country;
            $this->language = array_key_exists('language', $data) ? $data['language'] : $this->language;
            $this->items = array_key_exists('items', $data) ? $data['items'] : $this->items;
            $this->catalogId = array_key_exists('catalogId', $data) ? $data['catalogId'] : $this->catalogId;
        }
    }

    /**
     * Gets catalogType.
     *
     * @return CatalogsType|null
     */
    public function getCatalogType(): ?CatalogsType
    {
        return $this->catalogType;
    }

    /**
    * Gets catalogType for serialization.
    *
    * @return string|null
    */
    public function getSerializedCatalogType(): string|null
    {
        return $this->catalogType?->value ? (string) $this->catalogType->value : null;
    }


    /**
     * Sets catalogType.
     *
     * @param CatalogsType|null $catalogType
     *
     * @return $this
     */
    public function setCatalogType(?CatalogsType $catalogType): self
    {
        $this->catalogType = $catalogType;

        return $this;
    }

    /**
     * Gets country.
     *
     * @return Country|null
     */
    public function getCountry(): ?Country
    {
        return $this->country;
    }

    /**
    * Gets country for serialization.
    *
    * @return string|null
    */
    public function getSerializedCountry(): string|null
    {
        return $this->country?->value ? (string) $this->country->value : null;
    }


    /**
     * Sets country.
     *
     * @param Country|null $country
     *
     * @return $this
     */
    public function setCountry(?Country $country): self
    {
        $this->country = $country;

        return $this;
    }

    /**
     * Gets language.
     *
     * @return Language|null
     */
    public function getLanguage(): ?Language
    {
        return $this->language;
    }

    /**
    * Gets language for serialization.
    *
    * @return string|null
    */
    public function getSerializedLanguage(): string|null
    {
        return $this->language?->value ? (string) $this->language->value : null;
    }


    /**
     * Sets language.
     *
     * @param Language|null $language
     *
     * @return $this
     */
    public function setLanguage(?Language $language): self
    {
        $this->language = $language;

        return $this;
    }

    /**
     * Gets items.
     *
     * @return CatalogsHotelBatchItem[]|null
     */
    public function getItems(): ?array
    {
        return $this->items;
    }



    /**
     * Sets items.
     *
     * @param CatalogsHotelBatchItem[]|null $items  Array with catalogs item operations
     *
     * @return $this
     */
    public function setItems(?array $items): self
    {
        $this->items = $items;

        return $this;
    }

    /**
     * Gets catalogId.
     *
     * @return string|null
     */
    public function getCatalogId(): ?string
    {
        return $this->catalogId;
    }



    /**
     * Sets catalogId.
     *
     * @param string|null $catalogId  Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
     *
     * @return $this
     */
    public function setCatalogId(?string $catalogId = null): self
    {
        $this->catalogId = $catalogId;

        return $this;
    }
}


