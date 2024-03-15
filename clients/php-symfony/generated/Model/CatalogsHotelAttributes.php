<?php
/**
 * CatalogsHotelAttributes
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
 * Class representing the CatalogsHotelAttributes model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsHotelAttributes 
{
        /**
     * The hotel&#39;s name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * Link to the product page
     *
     * @var string|null
     * @SerializedName("link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $link = null;

    /**
     * Brief description of the hotel.
     *
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $description = null;

    /**
     * The brand to which this hotel belongs to.
     *
     * @var string|null
     * @SerializedName("brand")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $brand = null;

    /**
     * Latitude of the hotel.
     *
     * @var float|null
     * @SerializedName("latitude")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $latitude = null;

    /**
     * Longitude of the hotel.
     *
     * @var float|null
     * @SerializedName("longitude")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $longitude = null;

    /**
     * A list of neighborhoods where the hotel is located
     *
     * @var string[]|null
     * @SerializedName("neighborhood")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $neighborhood = null;

    /**
     * @var CatalogsHotelAddress|null
     * @SerializedName("address")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsHotelAddress")
     * @Type("OpenAPI\Server\Model\CatalogsHotelAddress")
     */
    protected ?CatalogsHotelAddress $address = null;

    /**
     * Custom grouping of hotels
     *
     * @var string|null
     * @SerializedName("custom_label_0")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customLabel0 = null;

    /**
     * Custom grouping of hotels
     *
     * @var string|null
     * @SerializedName("custom_label_1")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customLabel1 = null;

    /**
     * Custom grouping of hotels
     *
     * @var string|null
     * @SerializedName("custom_label_2")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customLabel2 = null;

    /**
     * Custom grouping of hotels
     *
     * @var string|null
     * @SerializedName("custom_label_3")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customLabel3 = null;

    /**
     * Custom grouping of hotels
     *
     * @var string|null
     * @SerializedName("custom_label_4")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customLabel4 = null;

    /**
     * The type of property. The category can be any type of internal description desired.
     *
     * @var string|null
     * @SerializedName("category")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $category = null;

    /**
     * Base price of the hotel room per night followed by the ISO currency code
     *
     * @var string|null
     * @SerializedName("base_price")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $basePrice = null;

    /**
     * Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
     *
     * @var string|null
     * @SerializedName("sale_price")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $salePrice = null;

    /**
     * @var CatalogsHotelGuestRatings|null
     * @SerializedName("guest_ratings")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsHotelGuestRatings")
     * @Type("OpenAPI\Server\Model\CatalogsHotelGuestRatings")
     */
    protected ?CatalogsHotelGuestRatings $guestRatings = null;

    /**
     * @var CatalogsHotelAttributesAllOfMainImage|null
     * @SerializedName("main_image")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsHotelAttributesAllOfMainImage")
     * @Type("OpenAPI\Server\Model\CatalogsHotelAttributesAllOfMainImage")
     */
    protected ?CatalogsHotelAttributesAllOfMainImage $mainImage = null;

    /**
     * &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The links to additional images for your hotel. Up to ten additional images can be used to show a hotel from different angles. Must begin with http:// or https://.&lt;/p&gt;
     *
     * @var string[]|null
     * @SerializedName("additional_image_link")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $additionalImageLink = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->link = array_key_exists('link', $data) ? $data['link'] : $this->link;
            $this->description = array_key_exists('description', $data) ? $data['description'] : $this->description;
            $this->brand = array_key_exists('brand', $data) ? $data['brand'] : $this->brand;
            $this->latitude = array_key_exists('latitude', $data) ? $data['latitude'] : $this->latitude;
            $this->longitude = array_key_exists('longitude', $data) ? $data['longitude'] : $this->longitude;
            $this->neighborhood = array_key_exists('neighborhood', $data) ? $data['neighborhood'] : $this->neighborhood;
            $this->address = array_key_exists('address', $data) ? $data['address'] : $this->address;
            $this->customLabel0 = array_key_exists('customLabel0', $data) ? $data['customLabel0'] : $this->customLabel0;
            $this->customLabel1 = array_key_exists('customLabel1', $data) ? $data['customLabel1'] : $this->customLabel1;
            $this->customLabel2 = array_key_exists('customLabel2', $data) ? $data['customLabel2'] : $this->customLabel2;
            $this->customLabel3 = array_key_exists('customLabel3', $data) ? $data['customLabel3'] : $this->customLabel3;
            $this->customLabel4 = array_key_exists('customLabel4', $data) ? $data['customLabel4'] : $this->customLabel4;
            $this->category = array_key_exists('category', $data) ? $data['category'] : $this->category;
            $this->basePrice = array_key_exists('basePrice', $data) ? $data['basePrice'] : $this->basePrice;
            $this->salePrice = array_key_exists('salePrice', $data) ? $data['salePrice'] : $this->salePrice;
            $this->guestRatings = array_key_exists('guestRatings', $data) ? $data['guestRatings'] : $this->guestRatings;
            $this->mainImage = array_key_exists('mainImage', $data) ? $data['mainImage'] : $this->mainImage;
            $this->additionalImageLink = array_key_exists('additionalImageLink', $data) ? $data['additionalImageLink'] : $this->additionalImageLink;
        }
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  The hotel's name.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets link.
     *
     * @return string|null
     */
    public function getLink(): ?string
    {
        return $this->link;
    }



    /**
     * Sets link.
     *
     * @param string|null $link  Link to the product page
     *
     * @return $this
     */
    public function setLink(?string $link = null): self
    {
        $this->link = $link;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription(): ?string
    {
        return $this->description;
    }



    /**
     * Sets description.
     *
     * @param string|null $description  Brief description of the hotel.
     *
     * @return $this
     */
    public function setDescription(?string $description = null): self
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets brand.
     *
     * @return string|null
     */
    public function getBrand(): ?string
    {
        return $this->brand;
    }



    /**
     * Sets brand.
     *
     * @param string|null $brand  The brand to which this hotel belongs to.
     *
     * @return $this
     */
    public function setBrand(?string $brand = null): self
    {
        $this->brand = $brand;

        return $this;
    }

    /**
     * Gets latitude.
     *
     * @return float|null
     */
    public function getLatitude(): ?float
    {
        return $this->latitude;
    }



    /**
     * Sets latitude.
     *
     * @param float|null $latitude  Latitude of the hotel.
     *
     * @return $this
     */
    public function setLatitude(?float $latitude = null): self
    {
        $this->latitude = $latitude;

        return $this;
    }

    /**
     * Gets longitude.
     *
     * @return float|null
     */
    public function getLongitude(): ?float
    {
        return $this->longitude;
    }



    /**
     * Sets longitude.
     *
     * @param float|null $longitude  Longitude of the hotel.
     *
     * @return $this
     */
    public function setLongitude(?float $longitude = null): self
    {
        $this->longitude = $longitude;

        return $this;
    }

    /**
     * Gets neighborhood.
     *
     * @return string[]|null
     */
    public function getNeighborhood(): ?array
    {
        return $this->neighborhood;
    }



    /**
     * Sets neighborhood.
     *
     * @param string[]|null $neighborhood  A list of neighborhoods where the hotel is located
     *
     * @return $this
     */
    public function setNeighborhood(?array $neighborhood = null): self
    {
        $this->neighborhood = $neighborhood;

        return $this;
    }

    /**
     * Gets address.
     *
     * @return CatalogsHotelAddress|null
     */
    public function getAddress(): ?CatalogsHotelAddress
    {
        return $this->address;
    }



    /**
     * Sets address.
     *
     * @param CatalogsHotelAddress|null $address
     *
     * @return $this
     */
    public function setAddress(?CatalogsHotelAddress $address = null): self
    {
        $this->address = $address;

        return $this;
    }

    /**
     * Gets customLabel0.
     *
     * @return string|null
     */
    public function getCustomLabel0(): ?string
    {
        return $this->customLabel0;
    }



    /**
     * Sets customLabel0.
     *
     * @param string|null $customLabel0  Custom grouping of hotels
     *
     * @return $this
     */
    public function setCustomLabel0(?string $customLabel0 = null): self
    {
        $this->customLabel0 = $customLabel0;

        return $this;
    }

    /**
     * Gets customLabel1.
     *
     * @return string|null
     */
    public function getCustomLabel1(): ?string
    {
        return $this->customLabel1;
    }



    /**
     * Sets customLabel1.
     *
     * @param string|null $customLabel1  Custom grouping of hotels
     *
     * @return $this
     */
    public function setCustomLabel1(?string $customLabel1 = null): self
    {
        $this->customLabel1 = $customLabel1;

        return $this;
    }

    /**
     * Gets customLabel2.
     *
     * @return string|null
     */
    public function getCustomLabel2(): ?string
    {
        return $this->customLabel2;
    }



    /**
     * Sets customLabel2.
     *
     * @param string|null $customLabel2  Custom grouping of hotels
     *
     * @return $this
     */
    public function setCustomLabel2(?string $customLabel2 = null): self
    {
        $this->customLabel2 = $customLabel2;

        return $this;
    }

    /**
     * Gets customLabel3.
     *
     * @return string|null
     */
    public function getCustomLabel3(): ?string
    {
        return $this->customLabel3;
    }



    /**
     * Sets customLabel3.
     *
     * @param string|null $customLabel3  Custom grouping of hotels
     *
     * @return $this
     */
    public function setCustomLabel3(?string $customLabel3 = null): self
    {
        $this->customLabel3 = $customLabel3;

        return $this;
    }

    /**
     * Gets customLabel4.
     *
     * @return string|null
     */
    public function getCustomLabel4(): ?string
    {
        return $this->customLabel4;
    }



    /**
     * Sets customLabel4.
     *
     * @param string|null $customLabel4  Custom grouping of hotels
     *
     * @return $this
     */
    public function setCustomLabel4(?string $customLabel4 = null): self
    {
        $this->customLabel4 = $customLabel4;

        return $this;
    }

    /**
     * Gets category.
     *
     * @return string|null
     */
    public function getCategory(): ?string
    {
        return $this->category;
    }



    /**
     * Sets category.
     *
     * @param string|null $category  The type of property. The category can be any type of internal description desired.
     *
     * @return $this
     */
    public function setCategory(?string $category = null): self
    {
        $this->category = $category;

        return $this;
    }

    /**
     * Gets basePrice.
     *
     * @return string|null
     */
    public function getBasePrice(): ?string
    {
        return $this->basePrice;
    }



    /**
     * Sets basePrice.
     *
     * @param string|null $basePrice  Base price of the hotel room per night followed by the ISO currency code
     *
     * @return $this
     */
    public function setBasePrice(?string $basePrice = null): self
    {
        $this->basePrice = $basePrice;

        return $this;
    }

    /**
     * Gets salePrice.
     *
     * @return string|null
     */
    public function getSalePrice(): ?string
    {
        return $this->salePrice;
    }



    /**
     * Sets salePrice.
     *
     * @param string|null $salePrice  Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
     *
     * @return $this
     */
    public function setSalePrice(?string $salePrice = null): self
    {
        $this->salePrice = $salePrice;

        return $this;
    }

    /**
     * Gets guestRatings.
     *
     * @return CatalogsHotelGuestRatings|null
     */
    public function getGuestRatings(): ?CatalogsHotelGuestRatings
    {
        return $this->guestRatings;
    }



    /**
     * Sets guestRatings.
     *
     * @param CatalogsHotelGuestRatings|null $guestRatings
     *
     * @return $this
     */
    public function setGuestRatings(?CatalogsHotelGuestRatings $guestRatings = null): self
    {
        $this->guestRatings = $guestRatings;

        return $this;
    }

    /**
     * Gets mainImage.
     *
     * @return CatalogsHotelAttributesAllOfMainImage|null
     */
    public function getMainImage(): ?CatalogsHotelAttributesAllOfMainImage
    {
        return $this->mainImage;
    }



    /**
     * Sets mainImage.
     *
     * @param CatalogsHotelAttributesAllOfMainImage|null $mainImage
     *
     * @return $this
     */
    public function setMainImage(?CatalogsHotelAttributesAllOfMainImage $mainImage = null): self
    {
        $this->mainImage = $mainImage;

        return $this;
    }

    /**
     * Gets additionalImageLink.
     *
     * @return string[]|null
     */
    public function getAdditionalImageLink(): ?array
    {
        return $this->additionalImageLink;
    }



    /**
     * Sets additionalImageLink.
     *
     * @param string[]|null $additionalImageLink  <p><= 2000 characters</p> <p>The links to additional images for your hotel. Up to ten additional images can be used to show a hotel from different angles. Must begin with http:// or https://.</p>
     *
     * @return $this
     */
    public function setAdditionalImageLink(?array $additionalImageLink = null): self
    {
        $this->additionalImageLink = $additionalImageLink;

        return $this;
    }
}

